/*
Copyright © 2015, BVAgile. All rights reserved.
Contacts: <bvagile@gmail.com>
*/

#include"MgtClient.h"
#define ld struct
#define lm __uint32
#define lb __uint8
#define lq void
#define lw const
#define l15 static
#define le if
#define lk return
#define l32 memcpy
#define l77 while
#define l79 __int8
#define l226 unsigned
#define l23 int
#define l207 strlen
#define l501 strncmp
#define l36 for
#define l481 continue
#define l383 memset
#define l69 sizeof
#define l2 else
#define l33 char
#define l176 crc32
#define l61 __uint64
#define l111 union
#define l27 enum
#define l18 __uint16
#define l12 bool
#define l320 rand
#define lu false
#define l416 memcmp
#define lz true
#define l497 strchr
#define l14 break
#define l237 typedef
#define l193 __int64
#define l132 __int16
#define l221 read
#define l274 abort
#define l222 __int32
#define l303 float
#define l178 double
#define l133 switch
#define l3 case
#define l206 default
#define l65 getUTCTime
#define l351 updateTime
#define l227 open
#define l284 close
#define l6 m_signals
#define l131 rem
#define l0 signal
#define l340 memmove
#define l139 time
#define l381 shiftTime
#define l440 signal_update_int
#define l106 Signal
#define l155 TimeStamp
#define l427 signal_update_double
#define l504 signal_update_str
#define l463 signal_updateTime
#define l511 mgt_init
#define l70 MgtClient
#define l452 DeviceConfig
#define l476 PortableSocket
#define l474 m_reserv
#define l496 mgt_start
#define l445 mgt_stop
#define l109 MgtState
#define l450 mgt_run
#define l422 mgt_getState
#define l466 mgt_send
#define l449 mgt_eventSend
#define l297 Event
#define l461 va_list
#define l421 va_start
#define l372 va_arg
#define l454 va_end
#define l438 mgt_eventBegin
#define l509 mgt_eventEnd
#define l429 mgt_readAns
#define l406 ErrorCode
#define l490 mgt_writeAns
#define l480 mgt_createSignal
#define l489 SignalType
#define l502 ChunkedTransfer


ld l103{lm l76[2];lm l28[4];lb l251[64];};lq l118(ld l103*lx);lq l37(
ld l103*lx,lw lb*l7,lm l56);lq l119(lb l44[16],ld l103*lx);lq l118(ld
l103*lx){lx->l76[0]=0;lx->l76[1]=0;lx->l28[0]=0x67452301;lx->l28[1]=
0xEFCDAB89;lx->l28[2]=0x98BADCFE;lx->l28[3]=0x10325476;}l15 lq l306(
ld l103*lx,lw lb lr[64]){lm lc[16],li,lg,lf,lh;{(lc[0])=((lm)(lr)[(0)]
)|((lm)(lr)[(0)+1]<<8)|((lm)(lr)[(0)+2]<<16)|((lm)(lr)[(0)+3]<<24);};
{(lc[1])=((lm)(lr)[(4)])|((lm)(lr)[(4)+1]<<8)|((lm)(lr)[(4)+2]<<16)|(
(lm)(lr)[(4)+3]<<24);};{(lc[2])=((lm)(lr)[(8)])|((lm)(lr)[(8)+1]<<8)|
((lm)(lr)[(8)+2]<<16)|((lm)(lr)[(8)+3]<<24);};{(lc[3])=((lm)(lr)[(12)]
)|((lm)(lr)[(12)+1]<<8)|((lm)(lr)[(12)+2]<<16)|((lm)(lr)[(12)+3]<<24);
};{(lc[4])=((lm)(lr)[(16)])|((lm)(lr)[(16)+1]<<8)|((lm)(lr)[(16)+2]<<
16)|((lm)(lr)[(16)+3]<<24);};{(lc[5])=((lm)(lr)[(20)])|((lm)(lr)[(20)+
1]<<8)|((lm)(lr)[(20)+2]<<16)|((lm)(lr)[(20)+3]<<24);};{(lc[6])=((lm)(
lr)[(24)])|((lm)(lr)[(24)+1]<<8)|((lm)(lr)[(24)+2]<<16)|((lm)(lr)[(24
)+3]<<24);};{(lc[7])=((lm)(lr)[(28)])|((lm)(lr)[(28)+1]<<8)|((lm)(lr)[
(28)+2]<<16)|((lm)(lr)[(28)+3]<<24);};{(lc[8])=((lm)(lr)[(32)])|((lm)(
lr)[(32)+1]<<8)|((lm)(lr)[(32)+2]<<16)|((lm)(lr)[(32)+3]<<24);};{(lc[
9])=((lm)(lr)[(36)])|((lm)(lr)[(36)+1]<<8)|((lm)(lr)[(36)+2]<<16)|((
lm)(lr)[(36)+3]<<24);};{(lc[10])=((lm)(lr)[(40)])|((lm)(lr)[(40)+1]<<
8)|((lm)(lr)[(40)+2]<<16)|((lm)(lr)[(40)+3]<<24);};{(lc[11])=((lm)(lr
)[(44)])|((lm)(lr)[(44)+1]<<8)|((lm)(lr)[(44)+2]<<16)|((lm)(lr)[(44)+
3]<<24);};{(lc[12])=((lm)(lr)[(48)])|((lm)(lr)[(48)+1]<<8)|((lm)(lr)[
(48)+2]<<16)|((lm)(lr)[(48)+3]<<24);};{(lc[13])=((lm)(lr)[(52)])|((lm
)(lr)[(52)+1]<<8)|((lm)(lr)[(52)+2]<<16)|((lm)(lr)[(52)+3]<<24);};{(
lc[14])=((lm)(lr)[(56)])|((lm)(lr)[(56)+1]<<8)|((lm)(lr)[(56)+2]<<16)|
((lm)(lr)[(56)+3]<<24);};{(lc[15])=((lm)(lr)[(60)])|((lm)(lr)[(60)+1]
<<8)|((lm)(lr)[(60)+2]<<16)|((lm)(lr)[(60)+3]<<24);};li=lx->l28[0];lg
=lx->l28[1];lf=lx->l28[2];lh=lx->l28[3];{li+=(lh^(lg&(lf^lh)))+lc[0]+
0xD76AA478;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lh+=(lf^(li&(
lg^lf)))+lc[1]+0xE8C7B756;lh=((lh<<12)|((lh&0xFFFFFFFF)>>(32-12)))+li
;};{lf+=(lg^(lh&(li^lg)))+lc[2]+0x242070DB;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+lh;};{lg+=(li^(lf&(lh^li)))+lc[3]+0xC1BDCEEE;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lh^(lg&(lf^lh)))+
lc[4]+0xF57C0FAF;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lh+=(lf
^(li&(lg^lf)))+lc[5]+0x4787C62A;lh=((lh<<12)|((lh&0xFFFFFFFF)>>(32-12
)))+li;};{lf+=(lg^(lh&(li^lg)))+lc[6]+0xA8304613;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+lh;};{lg+=(li^(lf&(lh^li)))+lc[7]+0xFD469501;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lh^(lg&(lf^lh)))+
lc[8]+0x698098D8;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lh+=(lf
^(li&(lg^lf)))+lc[9]+0x8B44F7AF;lh=((lh<<12)|((lh&0xFFFFFFFF)>>(32-12
)))+li;};{lf+=(lg^(lh&(li^lg)))+lc[10]+0xFFFF5BB1;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+lh;};{lg+=(li^(lf&(lh^li)))+lc[11]+0x895CD7BE;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lh^(lg&(lf^lh)))+
lc[12]+0x6B901122;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lh+=(
lf^(li&(lg^lf)))+lc[13]+0xFD987193;lh=((lh<<12)|((lh&0xFFFFFFFF)>>(32
-12)))+li;};{lf+=(lg^(lh&(li^lg)))+lc[14]+0xA679438E;lf=((lf<<17)|((
lf&0xFFFFFFFF)>>(32-17)))+lh;};{lg+=(li^(lf&(lh^li)))+lc[15]+
0x49B40821;lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lf^(lh
&(lg^lf)))+lc[1]+0xF61E2562;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5)))+lg
;};{lh+=(lg^(lf&(li^lg)))+lc[6]+0xC040B340;lh=((lh<<9)|((lh&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lh^li)))+lc[11]+0x265E5A51;
lf=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lh;};{lg+=(lh^(li&(lf^lh)))+
lc[0]+0xE9B6C7AA;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(
lf^(lh&(lg^lf)))+lc[5]+0xD62F105D;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5
)))+lg;};{lh+=(lg^(lf&(li^lg)))+lc[10]+0x02441453;lh=((lh<<9)|((lh&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lh^li)))+lc[15]+0xD8A1E681;
lf=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lh;};{lg+=(lh^(li&(lf^lh)))+
lc[4]+0xE7D3FBC8;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(
lf^(lh&(lg^lf)))+lc[9]+0x21E1CDE6;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5
)))+lg;};{lh+=(lg^(lf&(li^lg)))+lc[14]+0xC33707D6;lh=((lh<<9)|((lh&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lh^li)))+lc[3]+0xF4D50D87;lf
=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lh;};{lg+=(lh^(li&(lf^lh)))+lc
[8]+0x455A14ED;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(lf
^(lh&(lg^lf)))+lc[13]+0xA9E3E905;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5)))+
lg;};{lh+=(lg^(lf&(li^lg)))+lc[2]+0xFCEFA3F8;lh=((lh<<9)|((lh&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lh^li)))+lc[7]+0x676F02D9;lf
=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lh;};{lg+=(lh^(li&(lf^lh)))+lc
[12]+0x8D2A4C8A;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(
lg^lf^lh)+lc[5]+0xFFFA3942;li=((li<<4)|((li&0xFFFFFFFF)>>(32-4)))+lg;
};{lh+=(li^lg^lf)+lc[8]+0x8771F681;lh=((lh<<11)|((lh&0xFFFFFFFF)>>(32
-11)))+li;};{lf+=(lh^li^lg)+lc[11]+0x6D9D6122;lf=((lf<<16)|((lf&
0xFFFFFFFF)>>(32-16)))+lh;};{lg+=(lf^lh^li)+lc[14]+0xFDE5380C;lg=((lg
<<23)|((lg&0xFFFFFFFF)>>(32-23)))+lf;};{li+=(lg^lf^lh)+lc[1]+
0xA4BEEA44;li=((li<<4)|((li&0xFFFFFFFF)>>(32-4)))+lg;};{lh+=(li^lg^lf
)+lc[4]+0x4BDECFA9;lh=((lh<<11)|((lh&0xFFFFFFFF)>>(32-11)))+li;};{lf
+=(lh^li^lg)+lc[7]+0xF6BB4B60;lf=((lf<<16)|((lf&0xFFFFFFFF)>>(32-16)))+
lh;};{lg+=(lf^lh^li)+lc[10]+0xBEBFBC70;lg=((lg<<23)|((lg&0xFFFFFFFF)>>
(32-23)))+lf;};{li+=(lg^lf^lh)+lc[13]+0x289B7EC6;li=((li<<4)|((li&
0xFFFFFFFF)>>(32-4)))+lg;};{lh+=(li^lg^lf)+lc[0]+0xEAA127FA;lh=((lh<<
11)|((lh&0xFFFFFFFF)>>(32-11)))+li;};{lf+=(lh^li^lg)+lc[3]+0xD4EF3085
;lf=((lf<<16)|((lf&0xFFFFFFFF)>>(32-16)))+lh;};{lg+=(lf^lh^li)+lc[6]+
0x04881D05;lg=((lg<<23)|((lg&0xFFFFFFFF)>>(32-23)))+lf;};{li+=(lg^lf^
lh)+lc[9]+0xD9D4D039;li=((li<<4)|((li&0xFFFFFFFF)>>(32-4)))+lg;};{lh
+=(li^lg^lf)+lc[12]+0xE6DB99E5;lh=((lh<<11)|((lh&0xFFFFFFFF)>>(32-11)))+
li;};{lf+=(lh^li^lg)+lc[15]+0x1FA27CF8;lf=((lf<<16)|((lf&0xFFFFFFFF)>>
(32-16)))+lh;};{lg+=(lf^lh^li)+lc[2]+0xC4AC5665;lg=((lg<<23)|((lg&
0xFFFFFFFF)>>(32-23)))+lf;};{li+=(lf^(lg|~lh))+lc[0]+0xF4292244;li=((
li<<6)|((li&0xFFFFFFFF)>>(32-6)))+lg;};{lh+=(lg^(li|~lf))+lc[7]+
0x432AFF97;lh=((lh<<10)|((lh&0xFFFFFFFF)>>(32-10)))+li;};{lf+=(li^(lh
|~lg))+lc[14]+0xAB9423A7;lf=((lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+lh;
};{lg+=(lh^(lf|~li))+lc[5]+0xFC93A039;lg=((lg<<21)|((lg&0xFFFFFFFF)>>
(32-21)))+lf;};{li+=(lf^(lg|~lh))+lc[12]+0x655B59C3;li=((li<<6)|((li&
0xFFFFFFFF)>>(32-6)))+lg;};{lh+=(lg^(li|~lf))+lc[3]+0x8F0CCC92;lh=((
lh<<10)|((lh&0xFFFFFFFF)>>(32-10)))+li;};{lf+=(li^(lh|~lg))+lc[10]+
0xFFEFF47D;lf=((lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+lh;};{lg+=(lh^(lf
|~li))+lc[1]+0x85845DD1;lg=((lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;}
;{li+=(lf^(lg|~lh))+lc[8]+0x6FA87E4F;li=((li<<6)|((li&0xFFFFFFFF)>>(
32-6)))+lg;};{lh+=(lg^(li|~lf))+lc[15]+0xFE2CE6E0;lh=((lh<<10)|((lh&
0xFFFFFFFF)>>(32-10)))+li;};{lf+=(li^(lh|~lg))+lc[6]+0xA3014314;lf=((
lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+lh;};{lg+=(lh^(lf|~li))+lc[13]+
0x4E0811A1;lg=((lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;};{li+=(lf^(lg
|~lh))+lc[4]+0xF7537E82;li=((li<<6)|((li&0xFFFFFFFF)>>(32-6)))+lg;};{
lh+=(lg^(li|~lf))+lc[11]+0xBD3AF235;lh=((lh<<10)|((lh&0xFFFFFFFF)>>(
32-10)))+li;};{lf+=(li^(lh|~lg))+lc[2]+0x2AD7D2BB;lf=((lf<<15)|((lf&
0xFFFFFFFF)>>(32-15)))+lh;};{lg+=(lh^(lf|~li))+lc[9]+0xEB86D391;lg=((
lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;};lx->l28[0]+=li;lx->l28[1]+=
lg;lx->l28[2]+=lf;lx->l28[3]+=lh;}lq l37(ld l103*lx,lw lb*l7,lm l56){
lm l134,l177;le(!l56)lk;l134=lx->l76[0]&0x3F;l177=64-l134;lx->l76[0]
+=l56;lx->l76[0]&=0xFFFFFFFF;le(lx->l76[0]<l56)lx->l76[1]++;le(l134&&
l56>=l177){l32((lq* )(lx->l251+l134),(lq* )l7,l177);l306(lx,lx->l251);
l56-=l177;l7+=l177;l134=0;}l77(l56>=64){l306(lx,l7);l56-=64;l7+=64;}
le(l56)l32((lq* )(lx->l251+l134),(lq* )l7,l56);}l15 lb l388[64]={0x80
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};lq l119(lb
l44[16],ld l103*lx){lm l199,l309;lm l168,l159;lb l99[8];l168=(lx->l76
[0]>>29)|(lx->l76[1]<<3);l159=(lx->l76[0]<<3);{(l99)[(0)]=(lb)((l159));
(l99)[(0)+1]=(lb)((l159)>>8);(l99)[(0)+2]=(lb)((l159)>>16);(l99)[(0)+
3]=(lb)((l159)>>24);};{(l99)[(4)]=(lb)((l168));(l99)[(4)+1]=(lb)((
l168)>>8);(l99)[(4)+2]=(lb)((l168)>>16);(l99)[(4)+3]=(lb)((l168)>>24);
};l199=lx->l76[0]&0x3F;l309=(l199<56)?(56-l199):(120-l199);l37(lx,
l388,l309);l37(lx,l99,8);{(l44)[(0)]=(lb)((lx->l28[0]));(l44)[(0)+1]=
(lb)((lx->l28[0])>>8);(l44)[(0)+2]=(lb)((lx->l28[0])>>16);(l44)[(0)+3
]=(lb)((lx->l28[0])>>24);};{(l44)[(4)]=(lb)((lx->l28[1]));(l44)[(4)+1
]=(lb)((lx->l28[1])>>8);(l44)[(4)+2]=(lb)((lx->l28[1])>>16);(l44)[(4)+
3]=(lb)((lx->l28[1])>>24);};{(l44)[(8)]=(lb)((lx->l28[2]));(l44)[(8)+
1]=(lb)((lx->l28[2])>>8);(l44)[(8)+2]=(lb)((lx->l28[2])>>16);(l44)[(8
)+3]=(lb)((lx->l28[2])>>24);};{(l44)[(12)]=(lb)((lx->l28[3]));(l44)[(
12)+1]=(lb)((lx->l28[3])>>8);(l44)[(12)+2]=(lb)((lx->l28[3])>>16);(
l44)[(12)+3]=(lb)((lx->l28[3])>>24);};}lb*l326(lw l79*l95,lw l79*l286
){lw l79*l98, *l151;l15 lb l89[16];l226 l23 lo,l190,l94;ld l103 lx,
l64;l23 l164;l94=l207(l95);l98=l286;le(l501(l98,"\x24\x31\x24",3)==0)l98
+=3;l36(l151=l98; *l151!='\0'&& *l151!='$'&&l151<(l98+8);l151++)l481;
l190=l151-l98;l118(&lx);l37(&lx,(lw lb* )l95,l94);l37(&lx,(lw lb* )""
"\x24\x31\x24",3);l37(&lx,(lw lb* )l98,l190);l118(&l64);l37(&l64,(lw
lb* )l95,l94);l37(&l64,(lw lb* )l98,l190);l37(&l64,(lw lb* )l95,l94);
l119(l89,&l64);l36(l164=l94;l164>0;l164-=16)l37(&lx,l89,(l226 l23)(
l164>16?16:l164));l383(l89,0,l69(l89));l36(lo=l94;lo!=0;lo>>=1)le((lo
&1)!=0)l37(&lx,l89,1);l2 l37(&lx,(lw lb* )l95,1);l119(l89,&lx);l36(lo
=0;lo<1000;lo++){l118(&l64);le((lo&1)!=0)l37(&l64,(lw lb* )l95,l94);
l2 l37(&l64,l89,16);le((lo%3)!=0)l37(&l64,(lw lb* )l98,l190);le((lo%7
)!=0)l37(&l64,(lw lb* )l95,l94);le((lo&1)!=0)l37(&l64,l89,16);l2 l37(
&l64,(lw lb* )l95,l94);l119(l89,&l64);}lk l89;}



#ifdef CRYPTO_ON
#define l17( l101, l238) (( lm)(( l101) + ( l238)))
#define l187( l101) ( l17(( l101),1))
ld l97{lm l7[16];};lq l194(lb l146[64],lw lm l7[16]);lq l393(ld l97*
lc,lw lb*l210,lb*lf,lm l80);lq l301(ld l97*lc,lw lb*l53);lq l264(ld
l97*lc,lw lb*l241);
#endif
#ifdef CRYPTO_ON
#define l21( l101, lf) ( ROTL32( l101, lf))
#define l22( l101, l238) (( l101) ^ ( l238))
#define l333( l123, l101) ((( lm  *  )( l123))[0] = l101)
#define l60( l123) ((( lm  *  )( l123))[0])
lq l194(lb l146[64],lw lm l7[16]){lm lc[16];l23 lo;l36(lo=0;lo<16;++
lo)lc[lo]=l7[lo];l36(lo=20;lo>0;lo-=2){lc[4]=l22(lc[4],l21(l17(lc[0],
lc[12]),7));lc[8]=l22(lc[8],l21(l17(lc[4],lc[0]),9));lc[12]=l22(lc[12
],l21(l17(lc[8],lc[4]),13));lc[0]=l22(lc[0],l21(l17(lc[12],lc[8]),18));
lc[9]=l22(lc[9],l21(l17(lc[5],lc[1]),7));lc[13]=l22(lc[13],l21(l17(lc
[9],lc[5]),9));lc[1]=l22(lc[1],l21(l17(lc[13],lc[9]),13));lc[5]=l22(
lc[5],l21(l17(lc[1],lc[13]),18));lc[14]=l22(lc[14],l21(l17(lc[10],lc[
6]),7));lc[2]=l22(lc[2],l21(l17(lc[14],lc[10]),9));lc[6]=l22(lc[6],
l21(l17(lc[2],lc[14]),13));lc[10]=l22(lc[10],l21(l17(lc[6],lc[2]),18));
lc[3]=l22(lc[3],l21(l17(lc[15],lc[11]),7));lc[7]=l22(lc[7],l21(l17(lc
[3],lc[15]),9));lc[11]=l22(lc[11],l21(l17(lc[7],lc[3]),13));lc[15]=
l22(lc[15],l21(l17(lc[11],lc[7]),18));lc[1]=l22(lc[1],l21(l17(lc[0],
lc[3]),7));lc[2]=l22(lc[2],l21(l17(lc[1],lc[0]),9));lc[3]=l22(lc[3],
l21(l17(lc[2],lc[1]),13));lc[0]=l22(lc[0],l21(l17(lc[3],lc[2]),18));
lc[6]=l22(lc[6],l21(l17(lc[5],lc[4]),7));lc[7]=l22(lc[7],l21(l17(lc[6
],lc[5]),9));lc[4]=l22(lc[4],l21(l17(lc[7],lc[6]),13));lc[5]=l22(lc[5
],l21(l17(lc[4],lc[7]),18));lc[11]=l22(lc[11],l21(l17(lc[10],lc[9]),7
));lc[8]=l22(lc[8],l21(l17(lc[11],lc[10]),9));lc[9]=l22(lc[9],l21(l17
(lc[8],lc[11]),13));lc[10]=l22(lc[10],l21(l17(lc[9],lc[8]),18));lc[12
]=l22(lc[12],l21(l17(lc[15],lc[14]),7));lc[13]=l22(lc[13],l21(l17(lc[
12],lc[15]),9));lc[14]=l22(lc[14],l21(l17(lc[13],lc[12]),13));lc[15]=
l22(lc[15],l21(l17(lc[14],lc[13]),18));}l36(lo=0;lo<16;++lo)lc[lo]=
l17(lc[lo],l7[lo]);l36(lo=0;lo<16;++lo)l333(l146+4*lo,lc[lo]);}l15 lw
l33*l212="\x65\x78\x70\x61\x6e\x64\x20\x33\x32\x2d\x62\x79\x74\x65"
"\x20\x6b";lq l301(ld l97*lc,lw lb*l53){lc->l7[1]=l60(l53+0);lc->l7[2
]=l60(l53+4);lc->l7[3]=l60(l53+8);lc->l7[4]=l60(l53+12);lc->l7[11]=
l60(l53+16);lc->l7[12]=l60(l53+20);lc->l7[13]=l60(l53+24);lc->l7[14]=
l60(l53+28);lc->l7[0]=l60(l212+0);lc->l7[5]=l60(l212+4);lc->l7[10]=
l60(l212+8);lc->l7[15]=l60(l212+12);}lq l264(ld l97*lc,lw lb*l241){lc
->l7[6]=l60(l241+0);lc->l7[7]=l60(l241+4);lc->l7[8]=0;lc->l7[9]=0;}lq
l393(ld l97*lc,lw lb*l210,lb*lf,lm l80){lb l146[64];l226 l23 lo;le(!
l80)lk;l36(;;){l194(l146,lc->l7);lc->l7[8]=l187(lc->l7[8]);le(!lc->l7
[8]){lc->l7[9]=l187(lc->l7[9]);}le(l80<=64){l36(lo=0;lo<l80;++lo)lf[
lo]=l210[lo]^l146[lo];lk;}l36(lo=0;lo<64;++lo)lf[lo]=l210[lo]^l146[lo
];l80-=64;lf+=64;l210+=64;}}
#endif
#ifdef CRYPTO_ON
ld l58{lb l43[64];lm l46;lb l66;ld l97 l72;};lq l371(ld l58*l19,ld l97
 *l317);lq l196(ld l58*l19,lw lb*l110);lq l209(ld l58*l19,lw lb*l296);
lq l153(ld l58*l19,lw lb*l125,lb*l71,lm l20);
#else
ld l58{lm l46;};
#endif
lm l176(lb*l113,lm l321,lm l78);
#ifdef CRYPTO_ON
lq l371(ld l58*l19,ld l97*l317){l19->l72= *l317;l19->l66=0;l19->l46=0
;}lq l196(ld l58*l19,lw lb*l110){l301(&l19->l72,l110);}lq l209(ld l58
 *l19,lw lb*l296){l264(&l19->l72,l296);l19->l66=0;l19->l46=0;}lq l153
(ld l58*l19,lw lb*l125,lb*l71,lm l20){l226 l23 lo;le(l19->l66){lb*lr=
l19->l43+64-l19->l66;le(l20>=l19->l66){l20-=l19->l66;l36(lo=0;lo<l19
->l66;++lo)l71[lo]=l125[lo]^lr[lo];l125+=l19->l66;l71+=l19->l66;l19->
l66=0;}l2{l19->l66-=l20;l36(lo=0;lo<l20;++lo)l71[lo]=l125[lo]^lr[lo];
l20=0;}}le(!l20)lk;l36(;;){l194((lb* )l19->l43,l19->l72.l7);l19->l72.
l7[8]=l187(l19->l72.l7[8]);le(!l19->l72.l7[8])l19->l72.l7[9]=l187(l19
->l72.l7[9]);le(l20<=64){l36(lo=0;lo<l20;++lo)l71[lo]=l125[lo]^l19->
l43[lo];l19->l66=64-l20;lk;}l36(lo=0;lo<64;++lo)l71[lo]=l125[lo]^l19
->l43[lo];l20-=64;l125+=64;l71+=64;}}
#endif
l15
#ifdef ARDUINO
__flash
#endif
lw lm l258[256]={0x00000000,0x77073096,0xee0e612c,0x990951ba,
0x076dc419,0x706af48f,0xe963a535,0x9e6495a3,0x0edb8832,0x79dcb8a4,
0xe0d5e91e,0x97d2d988,0x09b64c2b,0x7eb17cbd,0xe7b82d07,0x90bf1d91,
0x1db71064,0x6ab020f2,0xf3b97148,0x84be41de,0x1adad47d,0x6ddde4eb,
0xf4d4b551,0x83d385c7,0x136c9856,0x646ba8c0,0xfd62f97a,0x8a65c9ec,
0x14015c4f,0x63066cd9,0xfa0f3d63,0x8d080df5,0x3b6e20c8,0x4c69105e,
0xd56041e4,0xa2677172,0x3c03e4d1,0x4b04d447,0xd20d85fd,0xa50ab56b,
0x35b5a8fa,0x42b2986c,0xdbbbc9d6,0xacbcf940,0x32d86ce3,0x45df5c75,
0xdcd60dcf,0xabd13d59,0x26d930ac,0x51de003a,0xc8d75180,0xbfd06116,
0x21b4f4b5,0x56b3c423,0xcfba9599,0xb8bda50f,0x2802b89e,0x5f058808,
0xc60cd9b2,0xb10be924,0x2f6f7c87,0x58684c11,0xc1611dab,0xb6662d3d,
0x76dc4190,0x01db7106,0x98d220bc,0xefd5102a,0x71b18589,0x06b6b51f,
0x9fbfe4a5,0xe8b8d433,0x7807c9a2,0x0f00f934,0x9609a88e,0xe10e9818,
0x7f6a0dbb,0x086d3d2d,0x91646c97,0xe6635c01,0x6b6b51f4,0x1c6c6162,
0x856530d8,0xf262004e,0x6c0695ed,0x1b01a57b,0x8208f4c1,0xf50fc457,
0x65b0d9c6,0x12b7e950,0x8bbeb8ea,0xfcb9887c,0x62dd1ddf,0x15da2d49,
0x8cd37cf3,0xfbd44c65,0x4db26158,0x3ab551ce,0xa3bc0074,0xd4bb30e2,
0x4adfa541,0x3dd895d7,0xa4d1c46d,0xd3d6f4fb,0x4369e96a,0x346ed9fc,
0xad678846,0xda60b8d0,0x44042d73,0x33031de5,0xaa0a4c5f,0xdd0d7cc9,
0x5005713c,0x270241aa,0xbe0b1010,0xc90c2086,0x5768b525,0x206f85b3,
0xb966d409,0xce61e49f,0x5edef90e,0x29d9c998,0xb0d09822,0xc7d7a8b4,
0x59b33d17,0x2eb40d81,0xb7bd5c3b,0xc0ba6cad,0xedb88320,0x9abfb3b6,
0x03b6e20c,0x74b1d29a,0xead54739,0x9dd277af,0x04db2615,0x73dc1683,
0xe3630b12,0x94643b84,0x0d6d6a3e,0x7a6a5aa8,0xe40ecf0b,0x9309ff9d,
0x0a00ae27,0x7d079eb1,0xf00f9344,0x8708a3d2,0x1e01f268,0x6906c2fe,
0xf762575d,0x806567cb,0x196c3671,0x6e6b06e7,0xfed41b76,0x89d32be0,
0x10da7a5a,0x67dd4acc,0xf9b9df6f,0x8ebeeff9,0x17b7be43,0x60b08ed5,
0xd6d6a3e8,0xa1d1937e,0x38d8c2c4,0x4fdff252,0xd1bb67f1,0xa6bc5767,
0x3fb506dd,0x48b2364b,0xd80d2bda,0xaf0a1b4c,0x36034af6,0x41047a60,
0xdf60efc3,0xa867df55,0x316e8eef,0x4669be79,0xcb61b38c,0xbc66831a,
0x256fd2a0,0x5268e236,0xcc0c7795,0xbb0b4703,0x220216b9,0x5505262f,
0xc5ba3bbe,0xb2bd0b28,0x2bb45a92,0x5cb36a04,0xc2d7ffa7,0xb5d0cf31,
0x2cd99e8b,0x5bdeae1d,0x9b64c2b0,0xec63f226,0x756aa39c,0x026d930a,
0x9c0906a9,0xeb0e363f,0x72076785,0x05005713,0x95bf4a82,0xe2b87a14,
0x7bb12bae,0x0cb61b38,0x92d28e9b,0xe5d5be0d,0x7cdcefb7,0x0bdbdf21,
0x86d3d2d4,0xf1d4e242,0x68ddb3f8,0x1fda836e,0x81be16cd,0xf6b9265b,
0x6fb077e1,0x18b74777,0x88085ae6,0xff0f6a70,0x66063bca,0x11010b5c,
0x8f659eff,0xf862ae69,0x616bffd3,0x166ccf45,0xa00ae278,0xd70dd2ee,
0x4e048354,0x3903b3c2,0xa7672661,0xd06016f7,0x4969474d,0x3e6e77db,
0xaed16a4a,0xd9d65adc,0x40df0b66,0x37d83bf0,0xa9bcae53,0xdebb9ec5,
0x47b2cf7f,0x30b5ffe9,0xbdbdf21c,0xcabac28a,0x53b39330,0x24b4a3a6,
0xbad03605,0xcdd70693,0x54de5729,0x23d967bf,0xb3667a2e,0xc4614ab8,
0x5d681b02,0x2a6f2b94,0xb40bbe37,0xc30c8ea1,0x5a05df1b,0x2d02ef8d};lm
l176(lb*l113,lm l321,lm l78){l77(l321--)
#ifdef ARDUINO
#ifdef pgm_read_dword_far
l78=pgm_read_dword_far(l258+((l78^ *l113++)&0xff))^(l78>>8);
#else
l78=pgm_read_dword(l258+((l78^ *l113++)&0xff))^(l78>>8);
#endif
#else
l78=l258[(l78^ *l113++)&0xff]^(l78>>8);
#endif
lk l78^0xffffffff;}
lb*l326(lw l79*l95,lw l79*l286);l61 l308(lq);lm l257(lq);
#pragma pack(push, 1)
ld l219{l111{ld{lb l140;lb l43[15];}ly;l61 lp[2];}ln;};ld l319{lb l43
[16];};ld l370{l111{ld{ld l219 l48;ld l319 l185;lb l243[8];lb l349[16
];lb l348[8];lb l364[4];}ly;l61 l311[8];lm l330[17];}ln;};l27 l503{
l457=0,l451=1,l444=2,l468};ld l472{l18 l437:3;l18 l456:1;l18 l500:1;
l18 l442:10;l18 l477:1;};ld l120{l18 l378;lm l367;lm l347;lm l46;};ld
l216{lb l510;lb l148[32];lm l127[4];lb l46;};
#pragma pack(pop)
ld l92{ld l58 l93;ld l370 l29;};lq l298(ld l92*l13,lw l33*l105,lw l33
 *l269);l12 l261(ld l92*l13,lm l294,lw lb*l110);l12 l313(ld l92*l13,
lw lb*l147,lb*l71);lq l295(ld l92*l13,ld l120*l229);l61 l308(lq){l61
l31;l31=l320(); * ((lm* )(&l31)+1)=l320();lk l31;}lm l257(lq){lm l31;
l31=l320();lk l31;}l12 l420(lw lb*l105,lb l375,ld l319*l110){le(l375
!=6)lk lu;le(l416(l105,"\x76\x61\x6c\x65\x72\x61",6))lk lu;l32(l110->
l43,"\x50\x61\x73\x73\x77\x6f\x72\x64\x46\x6f\x72\x56\x61\x6c\x65\x72"
,16);lk lz;}lq l354(ld l219*l247,lw l33*l105){lb l137[15]={0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0};l23 l52=l207(l105);le(l52>15)l52=15;l247->ln.ly.
l140=l52;l32(l247->ln.ly.l43,l105,l52);l32(l247->ln.ly.l43+l52,l137,
15-l52);}lq l298(ld l92*l13,lw l33*l105,lw l33*l269){l354(&l13->l29.
ln.ly.l48,l105);l32(l13->l29.ln.ly.l185.l43,l326(l269,l105),16);
#ifndef CRYPTO_ON
l13->l29.ln.ly.l48.ln.ly.l140|=0x80;
#endif
}l12 l261(ld l92*l13,lm l294,lw lb*l110){l33*l307="\x79\x62\x6e\x64"
"\x72\x66\x67\x38\x65\x6a\x6b\x6d\x63\x70\x71\x78\x6f\x74\x31\x75\x77"
"\x69\x73\x7a\x61\x33\x34\x35\x68\x37\x36\x39";lb*l80=l13->l29.ln.ly.
l185.l43;l23 l25=0;l23 l173=3;l23 lo;l383(l80,0,16);l36(lo=0;lo<26;lo
++){l33*l123;lb lg;le(!l110[lo])lk lu;l123=l497(l307,l110[lo]);le(!
l123)lk lu;lg=l123-l307;le(l173<0){l80[l25++]|=(lb)(lg>>(-l173));le(
l25==16)l14;l173+=8;}l80[l25]|=(lb)((lg<<l173)&0xff);l173-=5;}l13->
l29.ln.ly.l48.ln.ly.l140=15;l13->l29.ln.ly.l48.ln.ly.l43[0]=0;l13->
l29.ln.ly.l48.ln.ly.l43[1]=l80[0];l13->l29.ln.ly.l48.ln.ly.l43[2]=l80
[1];l32(l13->l29.ln.ly.l48.ln.ly.l43+3,&l294,4);l13->l29.ln.ly.l48.ln
.lp[1]=0;
#ifndef CRYPTO_ON
l13->l29.ln.ly.l48.ln.ly.l140|=0x80;
#endif
lk lz;}lb l357(lm l8){lb l100= * ((lb* )&l8+0)%8;lb l49= * ((lb* )&l8
+1)%7;lb l45= * ((lb* )&l8+2)%6;lb l40= * ((lb* )&l8+3)%5;le(l49==
l100)l49++;le(l49>=8)l49-=8;l77(1){le(l45==l100)l45++;l2{le(l45==l49)l45
++;l2 l14;}le(l45>=8)l45-=8;}l77(1){le(l40==l100)l40++;l2{le(l40==l49
)l40++;l2{le(l40==l45)l40++;l2 l14;}}le(l40>=8)l40-=8;}lk(1<<l100)+(1
<<l49)+(1<<l45)+(1<<l40);}l18 l380(lm l8){lb l100= * ((lb* )&l8+0)%16
;lb l49= * ((lb* )&l8+1)%15;lb l45= * ((lb* )&l8+2)%14;lb l40= * ((lb
 * )&l8+3)%13;le(l49==l100)l49++;le(l49>=16)l49-=16;l77(1){le(l45==
l100)l45++;l2{le(l45==l49)l45++;l2 l14;}le(l45>=16)l45-=16;}l77(1){le
(l40==l100)l40++;l2{le(l40==l49)l40++;l2{le(l40==l45)l40++;l2 l14;}}
le(l40>=16)l40-=16;}lk(1<<l100)+(1<<l49)+(1<<l45)+(1<<l40);}l12 l313(
ld l92*l13,lw lb*l147,lb*l71){l61 l282;ld l103 l87;l61 l217[2];l111{
l61 l310[2];lm l389[17];}ln;l12 l287=lu;l23 lo;l18 l240;lb*l204;l23
l53;
#ifndef CRYPTO_ON
l13->l29.ln.ly.l48.ln.ly.l140&=0x7f;
#endif
l32(&l282,l147,8);l32(l13->l29.ln.ly.l243,l147+16,8);l36(lo=0;lo<256;
lo++){l12 l126;lb l246;lb*l188;lb*l211;lb*l191;lw lb*l203;l23 l250; *
((lb* )&l13->l29.ln.ly.l243)=lo;l118(&l87);l37(&l87,l13->l29.ln.ly.
l48.ln.ly.l43,l13->l29.ln.ly.l48.ln.ly.l140);l37(&l87,l13->l29.ln.ly.
l185.l43,16+8);l119((lb* )l217,&l87);l13->l29.ln.l311[5]=l282^l217[0]
;l118(&l87);l37(&l87,l13->l29.ln.ly.l243,8+8);l119((lb* )ln.l310,&l87
);l126=lu;l246=l357(ln.l389[0]);l188=(lb* )(l217+1);l211=l13->l29.ln.
ly.l349+8;l191=(lb* )(ln.l310+1);l203=l147+8;l36(l250=0;l250<8;l250++
){le(l246&0x01) *l211= *l188^ *l203;l2{le(( *l191^ *l188)== *l203) *
l211= *l191;l2{l126=lz;l14;}}l188++;l211++;l191++;l203++;l246>>=1;}le
(!l126){l287=lz;l14;}}le(!l287)lk lu;l13->l29.ln.l311[7]=l308();l32(
l71+16,l13->l29.ln.ly.l348,8);l118(&l87);l37(&l87,l13->l29.ln.ly.l185
.l43,16+8+16+8);l119(l71,&l87);l240=l380(l257());l13->l29.ln.l330[16]
=l257();l204=l13->l29.ln.ly.l364;l36(l53=0;l53<16;l53++){le(l240&0x01
){le( *l204==0) *l204=0xff;l71[l53]^= *l204++;}l240>>=1;}lk lz;}
#ifdef CRYPTO_ON
lq l295(ld l92*l13,ld l120*l229){l194((lb* )l13->l93.l72.l7,(lm* )&
l13->l29);l13->l93.l72.l7[8]=0;l13->l93.l72.l7[9]=0;l13->l93.l66=0;
l153(&l13->l93,(lb* )l229,(lb* )l229,l69(ld l120));}
#endif
#if ( COUNT_SIGNALS > 255)
#error COUNT_SIGNALS should not be more than 255
#endif
#if ( RX_BUF_SIZE > 4096)
#error RX buffer size should not be more than 4096 bytes
#endif
#if ( TX_BUF_SIZE > 4096)
#error TX buffer size should not be more than 4096 bytes
#endif
#if ( RX_BUF_SIZE < 128)
#error RX buffer size must not be less than 128 bytes
#endif
#if ( TX_BUF_SIZE < 128)
#error TX buffer size must not be less than 128 bytes
#endif
#define l208 TX_BUF_SIZE - 22
l27 l475{l471=0,l443=1,l488=2,l512=3,l441=4,l485=5,l498=6,l434=7,l439
=100};l27 l181{l90=0,l479=1,l404=2,l467=3,l355=4,l464=5,l470=6,l448=
11,l469=12,l494=13,l425=21,l508=22,l396=23,l483=24,l458=25,l436=31,
l459=41,l419=42,l507=43,l428=44,l478=51,l433=52,l423=61,l505=71,l446=
100,l492=101,l499=102,l426=111,l410=112};l27 l435{l493=0,l408=1,l323=
2,l366=3,l356=4,l223=5,l268=6,l430=7,l484=8,l314=9,l417=10,l368=11,
l460=12,l334=13,l360=14,l482=15,l322=20,l403=21,l285=100,l413=101,
l462=103,l332=104,l390=105,l352=106,l338=200,l353=250};l27 l293{l277=
0,l302=1,l278=2,l262=3,l329=4,l312=5,l315=6,l183=7,l184=8,l192=9,l189
=10,l491=11,l331=12};ld l397{l111{ld{lb l453:2;lb l447:1;lb l465:1;lb
l473:1;lb l336:1;lb l292:1;lb l455:1;}ly;lb lp;}ln;};l237 l193 l59;
l27 l415{l487=0x00,l169=0x10,l138=0x20,l248=0x30,l324=0x40};ld l239{
lq*l114;l132( *l281)(lq*l304);l132( *l221)(lq*l304,lb*l113,l18 l20,
l12*l432);lq( *l274)(lq*l304);};ld l200{l111{l193 l24:56;ld{l61 l424:
56;l61 l112:8;}ly;}l11;l111{l12 l263;l79 l373;lb l156;l132 l402;l18
l342;l222 l399;lm l265;l303 l300;l178 l253;l33*l252;lb*l81;ld l239*
l50;ld{lb l179;lb l96;lb l201;}l42;}lt;};ld l231{l18 l161:10;l18 l365
:3;l18 l361:3;};ld l288{l59 l228;lm l182;ld l231 l290;};ld l9{ld l200
lp;lw l33*l230;l111{ld{lb l74:5;lb l175:1;lb l249:1;lb l141:1;}l30;ld
{lb l506:6;lb l121:2;}l115;}ln;ld l397 l180;};l15 l12 l327(ld l9*lj){
lk(lj->ln.l30.l74==l192)||(lj->ln.l30.l74==l189);}l15 l18 l214(ld l9*
lj){l133(lj->ln.l30.l74){l3 l277:l3 l302:l3 l278:lk 1;l3 l262:l3 l329
:lk 2;l3 l312:l3 l315:l3 l183:lk 4;l3 l184:lk l69(l178);l3 l192:le(!
lj->lp.lt.l252)lk 0;lk l207(lj->lp.lt.l252);l3 l189:le(!lj->lp.lt.l81
)lk 0;lk lj->lp.lt.l81[0]+(lj->lp.lt.l81[1]<<8);l206:lk 0;}}l15 l12
l267(ld l9*lj,l193 l8,l59 l4){le(!l4)l4=l65();l133(lj->ln.l30.l74){l3
l277:le(l8)lj->lp.lt.l263=lz;l2 lj->lp.lt.l263=lu;lj->lp.l11.l24=l4;
lk lz;l3 l302:le((-0x80<=l8)&&(l8<=0x7f)){lj->lp.lt.l373=(l79)l8;lj->
lp.l11.l24=l4;lk lz;}l14;l3 l278:le((0<=l8)&&(l8<=0xff)){lj->lp.lt.
l156=(lb)l8;lj->lp.l11.l24=l4;lk lz;}l14;l3 l262:le((-0x8000<=l8)&&(
l8<=0x7fff)){lj->lp.lt.l402=(l132)l8;lj->lp.l11.l24=l4;lk lz;}l14;l3
l329:le((0<=l8)&&(l8<=0xffff)){lj->lp.lt.l342=(l18)l8;lj->lp.l11.l24=
l4;lk lz;}l14;l3 l312:le((-0x80000000LL<=l8)&&(l8<=0x7fffffff)){lj->
lp.lt.l399=(l222)l8;lj->lp.l11.l24=l4;lk lz;}l14;l3 l315:le((0<=l8)&&
(l8<=0xffffffff)){lj->lp.lt.l265=(lm)l8;lj->lp.l11.l24=l4;lk lz;}l14;
l3 l183:lj->lp.lt.l300=(l303)l8;lj->lp.l11.l24=l4;lk lz;l3 l184:lj->
lp.lt.l253=(l178)l8;lj->lp.l11.l24=l4;lk lz;l206:lk lu;}lk lu;}l15 l12
l401(ld l9*lj,l178 l8,l59 l4){le(!l4)l4=l65();l133(lj->ln.l30.l74){l3
l183:lj->lp.lt.l300=(l303)l8;lj->lp.l11.l24=l4;lk lz;l3 l184:lj->lp.
lt.l253=l8;lj->lp.l11.l24=l4;lk lz;}lk l267(lj,(l193)l8,l4);}l15 l12
l339(ld l9*lj,l79*l8,l59 l4){le(!l4)l4=l65();lj->lp.l11.l24=l4;lj->lp
.lt.l252=l8;lk lu;}l15 l12 l351(ld l9*lj,l59 l4){le(!l4)l4=l65();lj->
lp.l11.l24=l4;lk lz;}l27 l376{l379=0,l218=1,l220=2};l237 lq( *l394)(
l27 l376 l418,ld l9*lj,ld l200*l495);
#ifdef ARDUINO
l237 lq( *l279)(lw __FlashStringHelper*l411,...);
#else
l237 lq( *l279)(lw l33*l411,...);
#endif
ld l256{l12( *l227)(lw l33*l431,l18 l486);l23( *l369)(lq*l113,l18 l20
);l12( *l170)(lw lq*l113,l18 l20);lq( *l358)(lq);lq( *l284)(lq);l12( *
l174)(lq);l12( *l384)(lq);};ld l149{lm l289;lw l33*l48;lw l33*l280;lw
l33*l318;l394 l128;l279 l34;ld l288*l152;l23 l385;};ld l1{l111{ld l92
l91;ld{ld l58 l167;lb l107[TX_BUF_SIZE];}ly;}ln;lb l26[RX_BUF_SIZE];
l18 l57;l18 l75;ld l58 l117;lb l148[32];lm l127;ld l149 l5;ld l256 l41
;lb l16;l59 l213;l59 l171;l59 l55;lb l85;lb l130;lb l135;l12 l144;l12
l154;l12 l202;ld l9 l6[1];};l27 l412{l86=0,l82=1,l346=2,l62=3,l234=4,
l160=5,l276,l299,l291,l259,};l15 lq l409(lb*l377,l33*l84){lw l79*l232
="\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39";l23 l25=0;l23 lo;l12 l233
;l36(lo=0;lo<4;lo++){lb l165=l377[lo];lb l131=l165%100;l84[l25]=l232[
l165/100];l233=lu;le(l84[l25]=='0')l233=lz;l2 l25++;l165=l131;l131=
l165%10;l84[l25]=l232[l165/10];le((!l233||l84[l25]!='0'))l25++;l84[
l25++]=l232[l131];l84[l25++]='.';}l84[--l25]=0;}l15 lq l273(ld l1*la,
l33*l84,lw l33* *l328){le(la->l127==0) *l328=la->l5.l318;l2{l409((lb*
)&la->l127,l84); *l328=l84;}}l15 lq l283(ld l1*la){
#ifdef CRYPTO_ON
l61 l73[8];ld l58*l162=&la->ln.l91.l93;lw l61 l137[8]={0,0,0,0,0,0,0,
0};l196(l162,(lb* )la->l148);l209(l162,(lb* )l137);l153(l162,(lb* )l137
,(lb* )l73,64);l32(la->l148+2,l73+4,30);l196(l162,(lb* )l73);l209(
l162,(lb* )l137);l73[4]=l73[1];l73[5]=l73[3];l73[6]=l73[0];l73[7]=l73
[2];l196(&la->l117,(lb* )(l73+4));l209(&la->l117,(lb* )l137);
#endif
la->ln.l91.l93.l46=0;la->l117.l46=0;}l15 lq l47(ld l1*la,l18 l20,l12
l335){le(!la->l202&&l335){la->l202=lz;la->l55=l65()+100;}la->l75+=l20
;}l15 lq l236(ld l1*la,l12 l344){le(!l344){le(la->l41.l174())lk;}le(
la->l75>2){l18 l67;l67=la->l75-2;la->ln.ly.l107[0]= * ((lb* )&l67+0);
la->ln.ly.l107[1]= * ((lb* )&l67+1);la->l117.l46=l176(la->ln.ly.l107+
2,l67,la->l117.l46);l32(la->ln.ly.l107+la->l75,&(la->l117.l46),4);la
->l75=l67+6;
#ifdef CRYPTO_ON
l153(&la->l117,la->ln.ly.l107,la->ln.ly.l107,la->l75);
#endif
le(!la->l41.l170(la->ln.ly.l107,la->l75))la->l5.l34(F("\x45\x72\x72"
"\x6f\x72\x20\x73\x65\x6e\x64\x69\x6e\x67\x20\x64\x61\x74\x61\x21\n"));
la->l75=2;la->l202=lu;}}l15 lb*l39(ld l1*la,l18 l20){le(l20>((
TX_BUF_SIZE-4)-la->l75))l236(la,lz);lk la->ln.ly.l107+la->l75;}l15 l12
l166(ld l1*la,l59 l255){lk((l255&0xffffffffffff0000LL)!=la->l171);}
l15 lq l163(ld l1*la,l59 l255){lb*ll;la->l171=l255&
0xffffffffffff0000LL;ll=l39(la,8);ll[0]=0x86;ll[1]=l323;l32(ll+2,(lb*
)&la->l171+2,6);l47(la,8,lu);}l15 l12 l362(ld l1*la,lb l205){lb*ll;
l222 ls;ld l9*l0=la->l6+l205;le(l0->ln.l30.l74==l331)l0->lp.lt.l265=0
;ls=l207(l0->l230);le(ls>64)lk lu;ll=l39(la,5+ls);ll[0]=(lb)(0x83+ls);
ll[1]=l314;ll[2]=l205;ll[3]=l0->ln.l30.l74;ll[4]=l0->l180.ln.lp;l32(
ll+5,l0->l230,ls);l47(la,ls+5,lu);lk lz;}l15 lq l363(ld l1*la,ld l231
l271,lb l205){lb*ll=l39(la,5);ll[0]=(lb)0x83;ll[1]=l360;ll[2]= * ((lb
 * )&l271+0);ll[3]= * ((lb* )&l271+1);ll[4]=l205;l47(la,5,lu);}l15 lq
l224(ld l1*la,ld l9*lj,l27 l181 l54,l18 l20,l12 l102){lb*ll;le(l54==
l90){l23 l25;l132 l52=4+l20;le((l52<127)&&(!l102)){ll=l39(la,6+l20);
ll[0]=l52|0x80;l25=1;}l2{ll=l39(la,8+l20);ll[0]=0xff;ll[1]=(lb)l52;ll
[2]=(lb)(l52>>8);le(l102)ll[2]|=l169;l25=3;}ll[l25++]=l223;ll[l25++]=
l90;ll[l25++]=lj-la->l6;ll[l25++]=(lb)lj->lp.l11.l24;ll[l25++]= * ((
lb* )&lj->lp+1);le(!l102){lb*lr=l327(lj)?lj->lp.lt.l81:&lj->lp.lt.
l156;l32(ll+l25,lr,l20);}l47(la,l25+l20,l102?lu:lz);}l2{ll=l39(la,4);
ll[0]=0x82;ll[1]=l223;ll[2]=l54;ll[3]=lj-la->l6;l47(la,4,lz);}}l15 lq
l270(ld l1*la,ld l9*lj,l18 l20,l12 l102){lb*ll;l23 l25;l132 l52=3+l20
;le((l52<127)&&(!l102)){ll=l39(la,4+l20);ll[0]=(lb)(0x03+l20);l25=1;}
l2{ll=l39(la,6+l20);ll[0]=0x7f;ll[1]=(lb)l52;ll[2]=(lb)(l52>>8);le(
l102)ll[2]|=l169;l25=3;}ll[l25++]=lj-la->l6;ll[l25++]=(lb)lj->lp.l11.
l24;ll[l25++]= * ((lb* )&lj->lp+1);le(!l102){lb*lr=l327(lj)?lj->lp.lt
.l81:&lj->lp.lt.l156;l32(ll+l25,lr,l20);}l47(la,l25+l20,l102?lu:lz);}
l15 l12 l198(ld l1*la,ld l9*lj,l27 l415 l83){l132 ls;lb*ll;l12 l136;
l23 l38;l133(l83){l3 l138:{ls=lj->lp.lt.l50->l281(lj->lp.lt.l50->l114
);le(ls==0){lj->lp.lt.l50->l221(lj->lp.lt.l50->l114,0,0,&l136);lk lz;
}le(ls>0){le(ls>l208)ls=l208;l38=(lj->ln.l30.l141)?5:4;ll=l39(la,l38+
ls);ls=lj->lp.lt.l50->l221(lj->lp.lt.l50->l114,ll+l38,ls,&l136);le((
ls==0)&&(!l136))lk lz;}l2 ll=l39(la,5);le(ls<0){ls=0;l83=l248;l14;}le
(l136)l83=l324;l2 l83=l138;l14;}l3 l169:{ls=lj->lp.lt.l50->l281(lj->
lp.lt.l50->l114);le(ls>=0){le(l166(la,lj->lp.l11.l24))l163(la,lj->lp.
l11.l24);le(ls>l208)ls=l208;l38=(lj->ln.l30.l141)?8:6;ll=l39(la,l38+
ls);ls=lj->lp.lt.l50->l221(lj->lp.lt.l50->l114,ll+l38,ls,&l136);}le(
ls<0){le(lj->ln.l30.l141)l224(la,lj,l404,0,lu);lj->ln.l115.l121=0;lk
lu;}l2{le(lj->ln.l30.l141)l224(la,lj,l90,ls,lz);l2 l270(la,lj,ls,lz);
le(!l136)lk lz;ll=l39(la,5);ls=0;l83=l324;}l14;}l3 l248:ll=l39(la,5);
ls=0;l14;l206:lk lu;}ls++;le(lj->ln.l30.l249){ll[0]=0x7f;ll[1]=(lb)ls
;ll[2]=l83+ * ((lb* )&ls+1);ll[3]=lj-la->l6;l47(la,3+ls,(l83==l138)?
lu:lz);}l2{ll[0]=0xff;ll[1]=(lb)ls;ll[2]=l83+ * ((lb* )&ls+1);ll[3]=
l223;ll[4]=lj-la->l6;l47(la,4+ls,(l83==l138)?lu:lz);}le(l83!=l138)lj
->ln.l115.l121=0;lk lz;}l15 lq l266(ld l1*la,ld l9*lj){lb l225;ld l288
 *l150;le((!lj->ln.l30.l175)&&(!la->l135)){l225=(lb)lj->lp.l11.ly.
l112;le(l225==255)lk;l150=la->l5.l152+l225;le(l150->l182){le(lj->lp.
l11.l24>=l150->l228){l61 l391=lj->lp.l11.l24%l150->l182;l150->l228=lj
->lp.l11.l24+l150->l182-l391;}l2 lk;}}le(lj->l180.ln.ly.l292){le(lj->
ln.l115.l121){lj->lp.lt.l50->l274(lj->lp.lt.l50->l114);l198(la,lj,
l248);}lj->ln.l30.l249=1;l198(la,lj,l169);lk;}le(l166(la,lj->lp.l11.
l24))l163(la,lj->lp.l11.l24);l270(la,lj,l214(lj),lu);}l15 lq l275(ld
l1*la,ld l9*l88,lw l33*l129,l59 l4){lb l10;l222 ls;lb*ll;l10=l88-la->
l6;le(la->l6[l10].lp.lt.l42.l201)lk;le(la->l6[l10].lp.l11.ly.l112!=
255){lb l143=la->l135;le(l143){l77(la->l6[l143].lp.lt.l42.l96)l143=la
->l6[l143].lp.lt.l42.l96;la->l6[l143].lp.lt.l42.l96=l10;}l2 la->l135=
l10;la->l6[l10].lp.lt.l42.l179=l143;la->l6[l10].lp.lt.l42.l96=0;}la->
l6[l10].lp.lt.l42.l201=1;le(l166(la,l4))l163(la,l4);ls=l207(l129)+3;
le(ls>127){ll=(lb* )l39(la,4+ls);ll[0]=0xff;ll[1]= * ((lb* )(&ls)+0);
ll[2]= * ((lb* )(&ls)+1);ll[3]=l322;ll[4]=l10;ll[5]=(lb)l4;ll[6]= * (
(lb* )&l4+1);l32(ll+7,l129,ls-3);l47(la,4+ls,lu);}l2{ll=(lb* )l39(la,
2+ls);ll[0]=0x80+ls;ll[1]=l322;ll[2]=l10;ll[3]=(lb)l4;ll[4]= * ((lb* )&
l4+1);l32(ll+5,l129,ls-3);l47(la,2+ls,lu);}}l15 lq l316(ld l1*la,ld l9
 *l88){lb l10;lb*ll;l10=l88-la->l6;le(!la->l6[l10].lp.lt.l42.l201)lk;
le(la->l6[l10].lp.l11.ly.l112!=255){le(la->l6[l10].lp.lt.l42.l179)la
->l6[la->l6[l10].lp.lt.l42.l179].lp.lt.l42.l96=la->l6[l10].lp.lt.l42.
l96;l2 la->l135=la->l6[l10].lp.lt.l42.l96;le(la->l6[l10].lp.lt.l42.
l96)la->l6[la->l6[l10].lp.lt.l42.l96].lp.lt.l42.l179=la->l6[l10].lp.
lt.l42.l179;}la->l6[l10].lp.lt.l42.l201=0;ll=(lb* )l39(la,3);ll[0]=
0x81;ll[1]=l403;ll[2]=l10;l47(la,3,lz);}l15 lq l414(ld l1*la,ld l9*lj
,l27 l181 l54){l18 ls;le((lj->l180.ln.ly.l292)&&(l54==l90)){le(lj->ln
.l115.l121)l54=l355;l2{lj->ln.l30.l141=1;l198(la,lj,l169);lk;}}ls=0;
le(l54==l90){le(l166(la,lj->lp.l11.l24))l163(la,lj->lp.l11.l24);ls=
l214(lj);}l224(la,lj,l54,ls,lu);}l15 lq l341(ld l1*la,ld l9*lj,l27
l181 l54){lb*ll;le(l54==l90){le(l166(la,lj->lp.l11.l24))l163(la,lj->
lp.l11.l24);ll=l39(la,6);ll[0]=0x84;ll[1]=l268;ll[2]=l90;ll[3]=lj-la
->l6;ll[4]=(lb)lj->lp.l11.l24;ll[5]=(lb)(lj->lp.l11.l24>>8);l47(la,6,
lz);}l2{ll=l39(la,4);ll[0]=0x82;ll[1]=l268;ll[2]=l54;ll[3]=lj-la->l6;
l47(la,4,lz);}}l15 lq l337(ld l1*la,lb l400){lb*ll=l39(la,3);ll[0]=
0x81;ll[1]=l368;ll[2]=l400;l47(la,3,lz);}
#if ( RX_BUF_SIZE < 4096)
l15 lq l407(ld l1*la,l18 l20){lb*ll=l39(la,4);ll[0]=0x82;ll[1]=l334;
ll[2]=(lb)l20;ll[3]=(lb)(l20>>8);l47(la,4,lu);}
#endif
l15 lq l386(ld l1*la,ld l149*l145,ld l256*l245){la->l5= *l145;la->l41
= *l245;la->l75=2;la->l85=1;la->l130=0;la->l213=0;la->l16=l86;la->l57
=0;la->l144=lz;la->l154=lu;la->l135=0;la->l55=l65();}l15 ld l9*l350(
ld l1*la,lw l79*l254,l27 l293 l157,lb l242,l18 l235,ld l239*l186){lm
l124;ld l9*l0=la->l6+la->l85++;l111{ld l231 l104;l18 l395;}ln;ln.l395
=l235;le((lb* )l0>=(lb* )la->l5.l152){la->l5.l34(F("\x49\x6e\x63\x72"
"\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f"
"\x55\x4e\x54\x5f\x53\x49\x47\x4e\x41\x4c\x53\x20\x21\n"));l77(1);}l0
->l230=l254;le(l157==l184){le(l69(l178)==4)l157=l183;}l0->ln.l30.l74=
l157;l0->ln.l30.l175=0;l0->ln.l30.l249=0;l0->ln.l30.l141=0;l0->l180.
ln.lp=l242;l0->lp.lt.l253=0;le(l186)l0->lp.lt.l50=l186;le(ln.l104.
l361){le(la->l130>=la->l5.l385){la->l5.l34(F("\x49\x6e\x63\x72\x65"
"\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f\x55"
"\x4e\x54\x5f\x53\x54\x4f\x52\x45\x20\x21\n"));l77(1);}l0->lp.l11.ly.
l112=la->l130;la->l5.l152[la->l130].l290=ln.l104;la->l5.l152[la->l130
].l228=0;l133(ln.l104.l365){l3 0:l124=ln.l104.l161;l14;l3 1:l124=(lm)ln
.l104.l161*1000;l14;l3 2:l124=(lm)ln.l104.l161*1000*60;l14;l3 3:l124=
(lm)ln.l104.l161*1000*60*60;l14;l3 4:l124=(lm)ln.l104.l161*1000*60*60
 *24;l14;l206:l124=0;l14;}la->l5.l152[la->l130].l182=l124;la->l130++;
}l2 l0->lp.l11.ly.l112=255;lk l0;}l15 l12 l382(ld l1*la,l12*l345){l23
l122;le(la->l16==l82){le(la->l5.l48)l298(&la->ln.l91,la->l5.l48,la->
l5.l280);l2{le(!l261(&la->ln.l91,la->l5.l289,(lb* )la->l5.l280)){la->
l5.l34(F("\x50\x61\x73\x73\x77\x6f\x72\x64\x20\x69\x73\x20\x65\x72"
"\x72\x6f\x72\x21\n"));la->l16=l86;lk lz;}}la->l5.l34(F("\x57\x61\x69"
"\x74\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2e\x2e\x2e\n"));le
(!la->l41.l227(la->l5.l318,4502)){la->l5.l34(F("\x4e\x6f\x20\x63\x6f"
"\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x77\x69\x74\x68\x20\x74\x68\x65"
"\x20\x73\x65\x72\x76\x69\x63\x65\n"));la->l55=l65()+2000;lk lz;}la->
l16=l276;}l122=la->l41.l369(la->l26+la->l57,RX_BUF_SIZE-la->l57);le(
l122<0)lk lu;le(la->l16==l276){le(!la->l41.l384())lk lz;la->l5.l34(F(""
"\x57\x61\x69\x74\x20\x61\x75\x74\x68\x6f\x72\x69\x7a\x61\x74\x69\x6f"
"\x6e\x2e\x2e\x2e\n"));la->l41.l170(&la->ln.l91.l29.ln.ly.l48,l69(ld
l219));la->l16=l299;}le((l122==0)&&(la->l144)){lk lz;} *l345=lz;l133(
la->l16){l3 l299:{lb ll[24+l69(ld l120)];ld l120 l116;le(l122!=24)lk
lu;le(!l313(&la->ln.l91,la->l26,ll))lk lu;l116.l378=1;l116.l367=la->
l5.l289;l116.l347=0xffffffffL;l116.l46=l176((lb* )&l116,offsetof(ld
l120,l46),0xffffffff);
#ifdef CRYPTO_ON
l295(&la->ln.l91,&l116);
#endif
l32(ll+24,&l116,l69(ld l120));le(!la->l41.l170(ll,l69(ll)))lk lu;la->
l41.l358();la->l16=l291;lk lz;}l3 l291:{lb l126;lw l33*l158;l33 l260[
12+3+1];le(l122!=l69(ld l216))lk lu;
#ifdef CRYPTO_ON
l153(&la->ln.l91.l93,la->l26,la->l26,l69(ld l216));
#endif
le(la->l26[offsetof(ld l216,l46)]!=(lb)l176(la->l26,offsetof(ld l216,
l46),0xffffffff))lk lu;l126=la->l26[0];la->l41.l284();le(l126!=l90){
l133(l126){l3 l410:la->l5.l34(F("\x54\x68\x65\x20\x73\x65\x72\x76\x69"
"\x63\x65\x20\x69\x73\x20\x62\x72\x6f\x6b\x65\x6e\n"));l14;l3 l396:la
->l55=l65()+10000;la->l5.l34(F("\x54\x68\x65\x20\x64\x65\x76\x69\x63"
"\x65\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65"
"\x64\n"));l14;}lk lu;}la->l127=la->l26[33]; * ((lb* )&la->l127+1)=la
->l26[34]; * ((lb* )&la->l127+2)=la->l26[35]; * ((lb* )&la->l127+3)=
la->l26[36];l273(la,l260,&l158);le(!la->l41.l227(l158,4503)){la->l5.
l34(F("\x4c\x6f\x73\x73\x20\x6f\x66\x20\x63\x6f\x6e\x6e\x65\x63\x74"
"\x69\x6f\x6e\n"));la->l16=l82;lk lz;}l32(la->l148,la->l26+1,32);l283
(la);le(!la->l41.l170(la->l148,8))lk lu;la->l16=l259;la->l57=0;la->l5
.l34(F("\x53\x65\x74\x74\x69\x6e\x67\x2e\x2e\x2e\n"));lk lz;}l3 l259:
l3 l62:{l23 l38=0;ld l58*l167=&la->ln.l91.l93;
#ifdef CRYPTO_ON
l153(l167,la->l26+la->l57,la->l26+la->l57,l122);
#endif
la->l57+=l122;l77(1){l23 l68;l23 l63;lm l325;l18 l67;l23 l56=la->l57-
l38;le(l56<6)l14;l67=la->l26[l38]+(la->l26[l38+1]<<8);le((l67+6)>l56){
le(l56==RX_BUF_SIZE){la->l5.l34(F("\x52\x65\x63\x65\x69\x76\x69\x6e"
"\x67\x20\x74\x6f\x6f\x20\x6d\x75\x63\x68\x20\x64\x61\x74\x61\x2c\x20"
"\x52\x58\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65\x20\x6d\x75"
"\x73\x74\x20\x6e\x6f\x74\x20\x62\x65\x20\x6c\x65\x73\x73\x20\x74\x68"
"\x61\x6e\x20\x25\x69\x20\x62\x79\x74\x65\x73\x2e\n"),l67+6);lk lu;}
l14;}le(la->l144){l32(&l325,la->l26+l38+2+l67,4);l167->l46=l176(la->
l26+l38+2,l67,l167->l46);le(l167->l46!=l325)lk lu;}l2 la->l144=lz;l68
=l38+2;l63=l68+l67;l38+=l67+6;l77(l68!=l63){l23 l398=l68;l23 l51;lb
l197;lb*l35;le(la->l41.l174()){l18 l131;l38=l68-2;l340(la->l26,la->
l26+l38,la->l57-l38);la->l57-=l38;l131=l63-l68;la->l26[0]= * ((lb* )&
l131);la->l26[1]= * ((lb* )&l131+1);la->l144=lu;lk lz;}l51=la->l26[
l68++]&0x7f;le(l51==0x7f){lb l108; * ((lb* )&l51+0)=la->l26[l68++];
l108=la->l26[l68++]; * ((lb* )&l51+1)=l108&0x0f;}le(la->l26[l398]&
0x80)l197=la->l26[l68++];l2 l197=0;l35=la->l26+l68;l68+=l51;le(l68>
l63)lk lu;l133(l197){l3 l408:{lb l10;l61 l359=0xffffffffffffffffLL;ld
l9*l0;l132 ls;ld l200 l31;le(l51<3)lk lu;l10=l35[0];le(l10>=la->l85)lk
lu;l0=la->l6+l10;ls=l51-3;le(l0->l180.ln.ly.l336){ls-=8;le(ls<0)lk lu
;l32(&l359,l35+l51-8,8);}l31.l11.l24=la->l213;l31.l11.l24|=l35[1];l31
.l11.l24|=l35[2]<<8;le(l0->ln.l30.l74==l192){lb*l63;lb l108;l31.lt.
l81=l35+3;l63=l31.lt.l81+ls;l108= *l63; *l63=0;la->l5.l128(l220,l0,&
l31); *l63=l108;}l2 le(l0->ln.l30.l74==l189){l35[1]=(lb)ls;l35[2]=(lb
)(ls>>8);l31.lt.l81=l35+3-2;la->l5.l128(l220,l0,&l31);}l2{le(l214(l0)!=
ls)lk lu;l32(&l31.lt.l156,l35+3,ls);la->l5.l128(l220,l0,&l31);}l14;}
l3 l323:{le(l51!=6)lk lu;l32(((lb* )&(la->l213))+2,l35,6);l14;}l3 l366
:{lb l10;ld l9*l0;le(l51!=1)lk lu;l10=l35[0];le(l10>=la->l85)lk lu;l0
=la->l6+l10;la->l5.l128(l379,l0,0);l14;}l3 l356:{lb l10;l18 ls;ld l9*
l0;ld l200 l31;le(l51<1)lk lu;l10=l35[0];le(l10>=la->l85)lk lu;ls=l51
-1;l0=la->l6+l10;le(l0->ln.l30.l74==l192){lb*l63;lb l108;l31.lt.l81=
l35+1;l63=l31.lt.l81+ls;l108= *l63; *l63=0;la->l5.l128(l218,l0,&l31);
 *l63=l108;}l2 le(l0->ln.l30.l74==l189){ * (l35-1)=(lb)ls;l35[0]=(lb)(
ls>>8);l31.lt.l81=l35-1;la->l5.l128(l218,l0,&l31);}l2{le(l214(l0)!=ls
)lk lu;l32(&l31.lt.l156,l35+1,ls);la->l5.l128(l218,l0,&l31);}l14;}l3
l314:{le(l51!=2)lk lu;le(l35[0]!=l90)lk lu;l14;}l3 l285:l3 l413:{lb
l10;ld l9*l0;le(l51!=1)lk lu;l10=l35[0];le(l10>=la->l85)lk lu;l0=la->
l6+l10;le(l197==l285){l0->ln.l30.l175=1;le(l10==0)la->l5.l34(F("\x65"
"\x6e\x74\x65\x72\x65\x64\x20\x66\x69\x72\x73\x74\x20\x63\x6c\x69\x65"
"\x6e\x74\n"),l35[0]);}l2{l0->ln.l30.l175=0;le(l10==0)la->l5.l34(F(""
"\x65\x78\x69\x74\x20\x6c\x61\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"),
l35[0]);}l14;}l3 l352:{l59 l139;le(l51!=8)lk lu;l32(&l139,l35,8);l381
=l139-(l65()-l381);l14;}l3 l332:l3 l390:l14;l3 l338:{le(!la->l154){
l23 lo;
#if ( RX_BUF_SIZE < 4096)
l407(la,RX_BUF_SIZE);
#endif
l36(lo=1;lo<la->l85;lo++){l362(la,lo);le(la->l6[lo].lp.l11.ly.l112!=
255)l363(la,la->l5.l152[la->l6[lo].lp.l11.ly.l112].l290,lo);}l337(la,
0);}la->l5.l34(F("\x57\x6f\x72\x6b\x2e\x2e\x2e\n"));la->l16=l62;la->
l135=0;l14;}l206:lk lu;}}}le(l38){l340(la->l26,la->l26+l38,la->l57-
l38);la->l57-=l38;}}}lk lz;}l15 lq l195(ld l1*la){l23 lo;l36(lo=0;lo<
la->l85;lo++){ld l9*l0=la->l6+lo;le(l0->ln.l115.l121){l0->lp.lt.l50->
l274(l0->lp.lt.l50->l114);l0->ln.l115.l121=0;}l0->ln.l30.l175=0;}la->
l41.l284();la->l16=l82;la->l154=lu;la->l57=0;la->l144=lz;la->l75=2;la
->l171=la->l171-0x10000L;}l15 lq l374(ld l1*la,l18 l142){lb*ll=l39(la
,4);ll[0]=0x82;ll[1]=l353;ll[2]= * ((lb* )&l142);ll[3]= * ((lb* )&
l142+1);l47(la,4,lu);l236(la,lz);}l15 l27 l412 l392(ld l1*la){l59 l139
=l65();l59 l305=la->l55;l12 l387=lu;lb l272;le(la->l16==l82){le(la->
l55>l139)lk l82;}la->l55=0;l272=la->l16;le(!l382(la,&l387)){la->l5.
l34(F("\x44\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n"));l195(la);
le(!la->l55)la->l55=l139+2000;lk l160;}le(la->l16==l62){l12 l405=lu;
le(l272!=l62)lk l346;la->l55=l305;le(lz){l23 lo;l36(lo=0;lo<la->l85;
lo++){ld l9*l0=la->l6+lo;le(l0->ln.l115.l121){le(la->l41.l174())lk
l234;le(l198(la,l0,l138))l405=lz;}}}le(la->l202&&(l305<l139))l236(la,
lu);le(la->l41.l174())lk l234;lk l62;}lk l82;}l12 l440(ld l106*lj,
l193 l8,l155 l4){lk l267((ld l9* )lj,l8,l4);}l12 l427(ld l106*lj,l178
l8,l155 l4){lk l401((ld l9* )lj,l8,l4);}l12 l504(ld l106*lj,l79*l147,
l155 l4){lk l339((ld l9* )lj,l147,l4);}l12 l463(ld l106*lj,l155 l4){
lk l351((ld l9* )lj,l4);}l12 l511(ld l70*la,ld l452*l145,ld l476*l245
){((ld l149* )l145)->l34(F("\x4d\x67\x74\x43\x6c\x69\x65\x6e\x74\x20"
"\x76\x31\x2e\x33\x2c\x20\x32\x30\x31\x38\x2f\x49\x49\x2f\x31\x39\n"));
le(offsetof(ld l70,l6)!=offsetof(ld l1,l6)){l23 l343=offsetof(ld l1,
l6);((ld l149* )l145)->l34(F("\x49\x6e\x20\x74\x68\x65\x20\x66\x69"
"\x6c\x65\x20\"\x4d\x67\x74\x43\x6c\x69\x65\x6e\x74\x2e\x68\"\x20\x69"
"\x6e\x20\x6c\x69\x6e\x65\x20\"\x23\x64\x65\x66\x69\x6e\x65\x20\x4d"
"\x47\x54\x5f\x43\x4f\x4e\x53\x54\x41\x4e\x54\x20\x25\x69\"\n\x79\x6f"
"\x75\x20\x6e\x65\x65\x64\x20\x74\x6f\x20\x73\x65\x74\x20\x74\x68\x65"
"\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x69\x20\x21\n"),(l23)(l69(la->
l474)),(l23)l343);lk lu;}((ld l149* )l145)->l34(F("\x49\x6e\x69\x74"
"\n"));l386((ld l1* )la,(ld l149* )l145,(ld l256* )l245);lk lz;}lq
l496(ld l70*la){ld l1*lv=(ld l1* )la;le(lv->l16==l86){le(lv->l154){lw
l33*l158;l33 l260[12+3+1];lv->l5.l34(F("\x52\x65\x73\x74\x61\x72\x74"
"\x20\x73\x65\x73\x73\x69\x6f\x6e\n"));l273(lv,l260,&l158);le(!lv->
l41.l227(l158,4503)){lv->l5.l34(F("\x4e\x6f\x20\x63\x6f\x6e\x6e\x65"
"\x63\x74\x69\x6f\x6e\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x73\x65"
"\x72\x76\x69\x63\x65\n"));lv->l16=l82;lv->l154=lu;lv->l55=l65()+2000
;}l283(lv);le(!lv->l41.l170(lv->l148,8)){lv->l5.l34(F("\x44\x69\x73"
"\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n"));l195(lv);lv->l55=l65()+
2000;lk;}l2{lv->l16=l259;lv->l57=0;}}l2{lv->l16=l82;lv->l5.l34(F(""
"\x53\x74\x61\x72\x74\n"));}}}lq l445(ld l70*la,l18 l142){ld l1*lv=(
ld l1* )la;le((lv->l16!=l86)||(lv->l16!=l160)){le(lv->l16!=l82){le((
l142)&&(lv->l16==l62)){l155 l244;l374(lv,l142);l244=l65();lv->l55=
l244+1000;lv->l213=l244+(l142*1000);lv->l16=l160;}l2{l195(lv);lv->l16
=l86;}}lv->l5.l34(F("\x53\x74\x6f\x70\n"));}}l27 l109 l450(ld l70*la){
ld l1*lv=(ld l1* )la;le(lv->l16==l160){le(lv->l55<l65()){l195(lv);lv
->l16=l86;lv->l154=lz;}l2 lk(l27 l109)l160;}le(lv->l16==l86)lk(l27
l109)l86;lk(l27 l109)l392((ld l1* )la);}l27 l109 l422(ld l70*la){ld l1
 *lv=(ld l1* )la;le(lv->l16==l62){le(lv->l41.l174())lk(l27 l109)l234;
l2 lk(l27 l109)l62;}le(lv->l16==l86)lk(l27 l109)l86;lk(l27 l109)l82;}
lq l466(ld l70*la,ld l106*lj){ld l1*lv=(ld l1* )la;le(lv->l16!=l62)lk
;l266(lv,(ld l9* )lj);}lq l449(ld l70*la,ld l297*l88,lw l33*l129,l155
l4,...){l461 l215;ld l9*l172;ld l1*lv=(ld l1* )la;le(lv->l16!=l62)lk;
l275(lv,(ld l9* )l88,l129,l4);l421(l215,l4);l172=l372(l215,ld l9* );
l77(l172){l61 lo=(lb* )l172-(lb* )la->l6;le(lo%l69(ld l9))l14;le((lo<
0)||(lo>=(lv->l85*l69(ld l9))))l14;l266(lv,l172);l172=l372(l215,ld l9
 * );}l454(l215);l316(lv,(ld l9* )l88);}lq l438(ld l70*la,ld l297*l88
,lw l33*l129,l155 l4){ld l1*lv=(ld l1* )la;le(lv->l16!=l62)lk;l275(lv
,(ld l9* )l88,l129,l4);}lq l509(ld l70*la,ld l297*l88){ld l1*lv=(ld l1
 * )la;le(lv->l16!=l62)lk;l316(lv,(ld l9* )l88);}lq l429(ld l70*la,ld
l106*lj,l27 l406 l54){ld l1*lv=(ld l1* )la;le(lv->l16!=l62)lk;l414(lv
,(ld l9* )lj,(l27 l181)l54);}lq l490(ld l70*la,ld l106*lj,l27 l406 l54
){ld l1*lv=(ld l1* )la;le(lv->l16!=l62)lk;l341(lv,(ld l9* )lj,(l27
l181)l54);}ld l106*l480(ld l70*la,lw l79*l254,l27 l489 l157,lb l242,
l18 l235,ld l502*l186){lk(ld l106* )l350((ld l1* )la,l254,(l27 l293)l157
,l242,l235,(ld l239* )l186);}
