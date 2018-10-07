/*
Copyright © 2015, BVAgile. All rights reserved.
Contacts: <bvagile@gmail.com>
*/

#include "MgtClient.h"
#include <Arduino.h>
#include <Ethernet.h>

TimeStamp shiftTime;
extern signed long device_id;

byte mac[] = { 0xDE, 0xAD, (byte)(device_id >> 3), (byte)(device_id >> 2), (byte)(device_id >> 1), (byte)(device_id >> 0) };
IPAddress ip(192,168,0,177);
EthernetClient socket;

TimeStamp getUTCTime() {
	static TimeStamp delta = 0;
	static __uint32 prev = 0;
	__uint32 curr = millis();
	if (prev > curr)
		delta += 0xffffffffUL;
	prev = curr;
	return delta + curr + shiftTime;
}
void sleepms(__uint32 aMilliseconds) {
	delay(aMilliseconds);
}

static bool socket_open(const char* aHost, __uint16 aPort) {
	socket.stop();
  //if (Ethernet.begin(mac, 5000, 4000) == 0) { // нужно подобрать оптимальные задержки//пофиксил 07102018
	//Serial.println("Failed to configure Ethernet using DHCP");//пофиксил 07102018 только эти две строчки
		Ethernet.begin(mac, ip);
	delay(1000);
  
	if (socket.connect(aHost, aPort))
		return true;
	return false;
}

static int socket_receive(void* aBuf, __uint16 aSize) {
	int readSize = socket.available();
	if (readSize) {
		if (readSize > aSize)
			readSize = aSize;
		for (int i = 0; i < readSize; i++)
			((char*)aBuf)[i] = socket.read();
		return readSize;
	}

	if (!socket.connected()) {
		socket.stop();
		return -1;
	}
	return 0;
}

static bool socket_send(const void* aBuf, __uint16 aSize) {
	socket.write((__uint8*)aBuf, aSize);
	return true;
}

static void socket_shutdown() {
}

static void socket_close() {
	socket.stop();
}

static bool socket_isTxBusy() {
	return false;
}

static bool socket_isConnected() {
	return true;
}


struct PortableSocket mySocket = {
	socket_open,
	socket_receive,
	socket_send,
	socket_shutdown,
	socket_close,
	socket_isTxBusy,
	socket_isConnected
};
