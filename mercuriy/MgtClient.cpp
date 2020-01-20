/*
  Copyright © 2015, BVAgile. All rights reserved.
  Contacts: <bvagile@gmail.com>
*/

#include"MgtClient.h"
#define ld struct
#define lo __uint32
#define lb __uint8
#define lq void
#define lw const
#define l14 static
#define le if
#define lh return
#define l34 memcpy
#define l82 while
#define l9 char
#define l237 unsigned
#define l25 int
#define l216 strlen
#define l518 strncmp
#define l33 for
#define l497 continue
#define l393 memset
#define l76 sizeof
#define l2 else
#define l194 crc32
#define l59 __uint64
#define l114 union
#define l31 enum
#define l20 __uint16
#define l15 bool
#define l327 rand
#define lr false
#define l530 memcmp
#define lz true
#define l516 strchr
#define l11 break
#define l250 typedef
#define l203 __int64
#define l117 __int16
#define l230 read
#define l283 abort
#define l410 __int8
#define l175 __int32
#define l312 float
#define l193 double
#define l137 switch
#define l5 case
#define l222 default
#define l69 getUTCTime
#define l355 updateTime
#define l233 open
#define l296 close
#define l3 m_signals
#define l119 rem
#define ls signal
#define l361 strrchr
#define l378 atoi
#define l341 memmove
#define l150 time
#define l389 shiftTime
#define l462 signal_update_int
#define l85 Signal
#define l158 TimeStamp
#define l445 signal_update_double
#define l506 signal_update_ptr
#define l482 signal_updateTime
#define l536 mgt_init
#define l67 MgtClient
#define l470 DeviceConfig
#define l494 PortableSocket
#define l492 m_reserv
#define l517 mgt_start
#define l457 mgt_stop
#define l113 MgtState
#define l468 mgt_run
#define l439 mgt_getState
#define l480 mgt_send
#define l464 mgt_eventSend
#define l305 Event
#define l473 va_list
#define l532 va_start
#define l381 va_arg
#define l475 va_end
#define l458 mgt_eventBegin
#define l534 mgt_eventEnd
#define l448 mgt_readAns
#define l418 ErrorCode
#define l512 mgt_writeAns
#define l495 mgt_createSignal
#define l509 SignalType
#define l522 ChunkedTransfer
#define l529 mgt_attachSignal
#define l485 mgt_detachAll


ld l107{lo l78[2]; lo l32[4]; lb l261[64];}; lq l127(ld l107*ly); lq l38(
  ld l107*ly, lw lb*l10, lo l64); lq l140(lb l49[16], ld l107*ly); lq l127(
    ld l107*ly) {
  ly->l78[0] = 0; ly->l78[1] = 0; ly->l32[0] = 0x67452301; ly->l32[1
                                                                  ] = 0xEFCDAB89; ly->l32[2] = 0x98BADCFE; ly->l32[3] = 0x10325476;
} l14 lq l314
(ld l107*ly, lw lb lt[64]) {
  lo lc[16], li, lg, lf, lj; {
    (lc[0]) = ((lo)(lt)[(0
                        )]) | ((lo)(lt)[(0) + 1] << 8) | ((lo)(lt)[(0) + 2] << 16) | ((lo)(lt)[(0) + 3] << 24);
  }; {
    (lc[1]) = ((lo)(lt)[(4)]) | ((lo)(lt)[(4) + 1] << 8) | ((lo)(lt)[(4) + 2] << 16) |
              ((lo)(lt)[(4) + 3] << 24);
  }; {
    (lc[2]) = ((lo)(lt)[(8)]) | ((lo)(lt)[(8) + 1] << 8) |
              ((lo)(lt)[(8) + 2] << 16) | ((lo)(lt)[(8) + 3] << 24);
  }; {
    (lc[3]) = ((lo)(lt)[(12)]
              ) | ((lo)(lt)[(12) + 1] << 8) | ((lo)(lt)[(12) + 2] << 16) | ((lo)(lt)[(12) + 3] << 24);
  }; {
    (lc[4]) = ((lo)(lt)[(16)]) | ((lo)(lt)[(16) + 1] << 8) | ((lo)(lt)[(16) + 2] <<
              16) | ((lo)(lt)[(16) + 3] << 24);
  }; {
    (lc[5]) = ((lo)(lt)[(20)]) | ((lo)(lt)[(20) +
                                           1] << 8) | ((lo)(lt)[(20) + 2] << 16) | ((lo)(lt)[(20) + 3] << 24);
  }; {
    (lc[6]) = ((lo)(
                 lt)[(24)]) | ((lo)(lt)[(24) + 1] << 8) | ((lo)(lt)[(24) + 2] << 16) | ((lo)(lt)[(24
                                                                                                 ) + 3] << 24);
  }; {
    (lc[7]) = ((lo)(lt)[(28)]) | ((lo)(lt)[(28) + 1] << 8) | ((lo)(lt)[
                (28) + 2] << 16) | ((lo)(lt)[(28) + 3] << 24);
  }; {
    (lc[8]) = ((lo)(lt)[(32)]) | ((lo)(
                                    lt)[(32) + 1] << 8) | ((lo)(lt)[(32) + 2] << 16) | ((lo)(lt)[(32) + 3] << 24);
  }; {
    (lc[
       9]) = ((lo)(lt)[(36)]) | ((lo)(lt)[(36) + 1] << 8) | ((lo)(lt)[(36) + 2] << 16) | ((
               lo)(lt)[(36) + 3] << 24);
  }; {
    (lc[10]) = ((lo)(lt)[(40)]) | ((lo)(lt)[(40) + 1] <<
                                   8) | ((lo)(lt)[(40) + 2] << 16) | ((lo)(lt)[(40) + 3] << 24);
  }; {
    (lc[11]) = ((lo)(lt
                    )[(44)]) | ((lo)(lt)[(44) + 1] << 8) | ((lo)(lt)[(44) + 2] << 16) | ((lo)(lt)[(44) +
                        3] << 24);
  }; {
    (lc[12]) = ((lo)(lt)[(48)]) | ((lo)(lt)[(48) + 1] << 8) | ((lo)(lt)[
                 (48) + 2] << 16) | ((lo)(lt)[(48) + 3] << 24);
  }; {
    (lc[13]) = ((lo)(lt)[(52)]) | ((lo
                                   )(lt)[(52) + 1] << 8) | ((lo)(lt)[(52) + 2] << 16) | ((lo)(lt)[(52) + 3] << 24);
  }; {
    (
      lc[14]) = ((lo)(lt)[(56)]) | ((lo)(lt)[(56) + 1] << 8) | ((lo)(lt)[(56) + 2] << 16) |
                ((lo)(lt)[(56) + 3] << 24);
  }; {
    (lc[15]) = ((lo)(lt)[(60)]) | ((lo)(lt)[(60) + 1]
                                   << 8) | ((lo)(lt)[(60) + 2] << 16) | ((lo)(lt)[(60) + 3] << 24);
  }; li = ly->l32[0]; lg
    = ly->l32[1]; lf = ly->l32[2]; lj = ly->l32[3]; {
    li += (lj ^ (lg & (lf ^ lj))) + lc[0] +
          0xD76AA478; li = ((li << 7) | ((li & 0xFFFFFFFF) >> (32 - 7))) + lg;
  }; {
    lj += (lf ^ (li & (
                   lg ^ lf))) + lc[1] + 0xE8C7B756; lj = ((lj << 12) | ((lj & 0xFFFFFFFF) >> (32 - 12))) + li
                       ;
  }; {
    lf += (lg ^ (lj & (li ^ lg))) + lc[2] + 0x242070DB; lf = ((lf << 17) | ((lf &
        0xFFFFFFFF) >> (32 - 17))) + lj;
  }; {
    lg += (li ^ (lf & (lj ^ li))) + lc[3] + 0xC1BDCEEE;
    lg = ((lg << 22) | ((lg & 0xFFFFFFFF) >> (32 - 22))) + lf;
  }; {
    li += (lj ^ (lg & (lf ^ lj))) +
          lc[4] + 0xF57C0FAF; li = ((li << 7) | ((li & 0xFFFFFFFF) >> (32 - 7))) + lg;
  }; {
    lj += (lf
           ^ (li & (lg ^ lf))) + lc[5] + 0x4787C62A; lj = ((lj << 12) | ((lj & 0xFFFFFFFF) >> (32 - 12
                                                                                              ))) + li;
  }; {
    lf += (lg ^ (lj & (li ^ lg))) + lc[6] + 0xA8304613; lf = ((lf << 17) | ((lf &
        0xFFFFFFFF) >> (32 - 17))) + lj;
  }; {
    lg += (li ^ (lf & (lj ^ li))) + lc[7] + 0xFD469501;
    lg = ((lg << 22) | ((lg & 0xFFFFFFFF) >> (32 - 22))) + lf;
  }; {
    li += (lj ^ (lg & (lf ^ lj))) +
          lc[8] + 0x698098D8; li = ((li << 7) | ((li & 0xFFFFFFFF) >> (32 - 7))) + lg;
  }; {
    lj += (lf
           ^ (li & (lg ^ lf))) + lc[9] + 0x8B44F7AF; lj = ((lj << 12) | ((lj & 0xFFFFFFFF) >> (32 - 12
                                                                                              ))) + li;
  }; {
    lf += (lg ^ (lj & (li ^ lg))) + lc[10] + 0xFFFF5BB1; lf = ((lf << 17) | ((lf &
        0xFFFFFFFF) >> (32 - 17))) + lj;
  }; {
    lg += (li ^ (lf & (lj ^ li))) + lc[11] + 0x895CD7BE;
    lg = ((lg << 22) | ((lg & 0xFFFFFFFF) >> (32 - 22))) + lf;
  }; {
    li += (lj ^ (lg & (lf ^ lj))) +
          lc[12] + 0x6B901122; li = ((li << 7) | ((li & 0xFFFFFFFF) >> (32 - 7))) + lg;
  }; {
    lj += (
            lf ^ (li & (lg ^ lf))) + lc[13] + 0xFD987193; lj = ((lj << 12) | ((lj & 0xFFFFFFFF) >> (32
                - 12))) + li;
  }; {
    lf += (lg ^ (lj & (li ^ lg))) + lc[14] + 0xA679438E; lf = ((lf << 17) | ((
          lf & 0xFFFFFFFF) >> (32 - 17))) + lj;
  }; {
    lg += (li ^ (lf & (lj ^ li))) + lc[15] +
          0x49B40821; lg = ((lg << 22) | ((lg & 0xFFFFFFFF) >> (32 - 22))) + lf;
  }; {
    li += (lf ^ (lj
                 & (lg ^ lf))) + lc[1] + 0xF61E2562; li = ((li << 5) | ((li & 0xFFFFFFFF) >> (32 - 5))) + lg
                     ;
  }; {
    lj += (lg ^ (lf & (li ^ lg))) + lc[6] + 0xC040B340; lj = ((lj << 9) | ((lj &
        0xFFFFFFFF) >> (32 - 9))) + li;
  }; {
    lf += (li ^ (lg & (lj ^ li))) + lc[11] + 0x265E5A51;
    lf = ((lf << 14) | ((lf & 0xFFFFFFFF) >> (32 - 14))) + lj;
  }; {
    lg += (lj ^ (li & (lf ^ lj))) +
          lc[0] + 0xE9B6C7AA; lg = ((lg << 20) | ((lg & 0xFFFFFFFF) >> (32 - 20))) + lf;
  }; {
    li += (
            lf ^ (lj & (lg ^ lf))) + lc[5] + 0xD62F105D; li = ((li << 5) | ((li & 0xFFFFFFFF) >> (32 - 5
                                                                                                 ))) + lg;
  }; {
    lj += (lg ^ (lf & (li ^ lg))) + lc[10] + 0x02441453; lj = ((lj << 9) | ((lj &
        0xFFFFFFFF) >> (32 - 9))) + li;
  }; {
    lf += (li ^ (lg & (lj ^ li))) + lc[15] + 0xD8A1E681;
    lf = ((lf << 14) | ((lf & 0xFFFFFFFF) >> (32 - 14))) + lj;
  }; {
    lg += (lj ^ (li & (lf ^ lj))) +
          lc[4] + 0xE7D3FBC8; lg = ((lg << 20) | ((lg & 0xFFFFFFFF) >> (32 - 20))) + lf;
  }; {
    li += (
            lf ^ (lj & (lg ^ lf))) + lc[9] + 0x21E1CDE6; li = ((li << 5) | ((li & 0xFFFFFFFF) >> (32 - 5
                                                                                                 ))) + lg;
  }; {
    lj += (lg ^ (lf & (li ^ lg))) + lc[14] + 0xC33707D6; lj = ((lj << 9) | ((lj &
        0xFFFFFFFF) >> (32 - 9))) + li;
  }; {
    lf += (li ^ (lg & (lj ^ li))) + lc[3] + 0xF4D50D87; lf
      = ((lf << 14) | ((lf & 0xFFFFFFFF) >> (32 - 14))) + lj;
  }; {
    lg += (lj ^ (li & (lf ^ lj))) + lc
          [8] + 0x455A14ED; lg = ((lg << 20) | ((lg & 0xFFFFFFFF) >> (32 - 20))) + lf;
  }; {
    li += (lf
           ^ (lj & (lg ^ lf))) + lc[13] + 0xA9E3E905; li = ((li << 5) | ((li & 0xFFFFFFFF) >> (32 - 5))) +
               lg;
  }; {
    lj += (lg ^ (lf & (li ^ lg))) + lc[2] + 0xFCEFA3F8; lj = ((lj << 9) | ((lj &
        0xFFFFFFFF) >> (32 - 9))) + li;
  }; {
    lf += (li ^ (lg & (lj ^ li))) + lc[7] + 0x676F02D9; lf
      = ((lf << 14) | ((lf & 0xFFFFFFFF) >> (32 - 14))) + lj;
  }; {
    lg += (lj ^ (li & (lf ^ lj))) + lc
          [12] + 0x8D2A4C8A; lg = ((lg << 20) | ((lg & 0xFFFFFFFF) >> (32 - 20))) + lf;
  }; {
    li += (
            lg ^ lf ^ lj) + lc[5] + 0xFFFA3942; li = ((li << 4) | ((li & 0xFFFFFFFF) >> (32 - 4))) + lg;
  }; {
    lj += (li ^ lg ^ lf) + lc[8] + 0x8771F681; lj = ((lj << 11) | ((lj & 0xFFFFFFFF) >> (32
        - 11))) + li;
  }; {
    lf += (lj ^ li ^ lg) + lc[11] + 0x6D9D6122; lf = ((lf << 16) | ((lf &
        0xFFFFFFFF) >> (32 - 16))) + lj;
  }; {
    lg += (lf ^ lj ^ li) + lc[14] + 0xFDE5380C; lg = ((lg
        << 23) | ((lg & 0xFFFFFFFF) >> (32 - 23))) + lf;
  }; {
    li += (lg ^ lf ^ lj) + lc[1] +
          0xA4BEEA44; li = ((li << 4) | ((li & 0xFFFFFFFF) >> (32 - 4))) + lg;
  }; {
    lj += (li ^ lg ^ lf
          ) + lc[4] + 0x4BDECFA9; lj = ((lj << 11) | ((lj & 0xFFFFFFFF) >> (32 - 11))) + li;
  }; {
    lf
    += (lj ^ li ^ lg) + lc[7] + 0xF6BB4B60; lf = ((lf << 16) | ((lf & 0xFFFFFFFF) >> (32 - 16))) +
        lj;
  }; {
    lg += (lf ^ lj ^ li) + lc[10] + 0xBEBFBC70; lg = ((lg << 23) | ((lg & 0xFFFFFFFF) >>
        (32 - 23))) + lf;
  }; {
    li += (lg ^ lf ^ lj) + lc[13] + 0x289B7EC6; li = ((li << 4) | ((li &
        0xFFFFFFFF) >> (32 - 4))) + lg;
  }; {
    lj += (li ^ lg ^ lf) + lc[0] + 0xEAA127FA; lj = ((lj <<
        11) | ((lj & 0xFFFFFFFF) >> (32 - 11))) + li;
  }; {
    lf += (lj ^ li ^ lg) + lc[3] + 0xD4EF3085
          ; lf = ((lf << 16) | ((lf & 0xFFFFFFFF) >> (32 - 16))) + lj;
  }; {
    lg += (lf ^ lj ^ li) + lc[6] +
          0x04881D05; lg = ((lg << 23) | ((lg & 0xFFFFFFFF) >> (32 - 23))) + lf;
  }; {
    li += (lg ^ lf ^
           lj) + lc[9] + 0xD9D4D039; li = ((li << 4) | ((li & 0xFFFFFFFF) >> (32 - 4))) + lg;
  }; {
    lj
    += (li ^ lg ^ lf) + lc[12] + 0xE6DB99E5; lj = ((lj << 11) | ((lj & 0xFFFFFFFF) >> (32 - 11))) +
        li;
  }; {
    lf += (lj ^ li ^ lg) + lc[15] + 0x1FA27CF8; lf = ((lf << 16) | ((lf & 0xFFFFFFFF) >>
        (32 - 16))) + lj;
  }; {
    lg += (lf ^ lj ^ li) + lc[2] + 0xC4AC5665; lg = ((lg << 23) | ((lg &
        0xFFFFFFFF) >> (32 - 23))) + lf;
  }; {
    li += (lf ^ (lg | ~lj)) + lc[0] + 0xF4292244; li = ((
          li << 6) | ((li & 0xFFFFFFFF) >> (32 - 6))) + lg;
  }; {
    lj += (lg ^ (li | ~lf)) + lc[7] +
          0x432AFF97; lj = ((lj << 10) | ((lj & 0xFFFFFFFF) >> (32 - 10))) + li;
  }; {
    lf += (li ^ (lj
                 | ~lg)) + lc[14] + 0xAB9423A7; lf = ((lf << 15) | ((lf & 0xFFFFFFFF) >> (32 - 15))) + lj;
  }; {
    lg += (lj ^ (lf | ~li)) + lc[5] + 0xFC93A039; lg = ((lg << 21) | ((lg & 0xFFFFFFFF) >>
        (32 - 21))) + lf;
  }; {
    li += (lf ^ (lg | ~lj)) + lc[12] + 0x655B59C3; li = ((li << 6) | ((li &
        0xFFFFFFFF) >> (32 - 6))) + lg;
  }; {
    lj += (lg ^ (li | ~lf)) + lc[3] + 0x8F0CCC92; lj = ((
          lj << 10) | ((lj & 0xFFFFFFFF) >> (32 - 10))) + li;
  }; {
    lf += (li ^ (lj | ~lg)) + lc[10] +
          0xFFEFF47D; lf = ((lf << 15) | ((lf & 0xFFFFFFFF) >> (32 - 15))) + lj;
  }; {
    lg += (lj ^ (lf
                 | ~li)) + lc[1] + 0x85845DD1; lg = ((lg << 21) | ((lg & 0xFFFFFFFF) >> (32 - 21))) + lf;
  }
  ; {
    li += (lf ^ (lg | ~lj)) + lc[8] + 0x6FA87E4F; li = ((li << 6) | ((li & 0xFFFFFFFF) >> (
          32 - 6))) + lg;
  }; {
    lj += (lg ^ (li | ~lf)) + lc[15] + 0xFE2CE6E0; lj = ((lj << 10) | ((lj &
        0xFFFFFFFF) >> (32 - 10))) + li;
  }; {
    lf += (li ^ (lj | ~lg)) + lc[6] + 0xA3014314; lf = ((
          lf << 15) | ((lf & 0xFFFFFFFF) >> (32 - 15))) + lj;
  }; {
    lg += (lj ^ (lf | ~li)) + lc[13] +
          0x4E0811A1; lg = ((lg << 21) | ((lg & 0xFFFFFFFF) >> (32 - 21))) + lf;
  }; {
    li += (lf ^ (lg
                 | ~lj)) + lc[4] + 0xF7537E82; li = ((li << 6) | ((li & 0xFFFFFFFF) >> (32 - 6))) + lg;
  }; {
    lj += (lg ^ (li | ~lf)) + lc[11] + 0xBD3AF235; lj = ((lj << 10) | ((lj & 0xFFFFFFFF) >> (
          32 - 10))) + li;
  }; {
    lf += (li ^ (lj | ~lg)) + lc[2] + 0x2AD7D2BB; lf = ((lf << 15) | ((lf &
        0xFFFFFFFF) >> (32 - 15))) + lj;
  }; {
    lg += (lj ^ (lf | ~li)) + lc[9] + 0xEB86D391; lg = ((
          lg << 21) | ((lg & 0xFFFFFFFF) >> (32 - 21))) + lf;
  }; ly->l32[0] += li; ly->l32[1] +=
    lg; ly->l32[2] += lf; ly->l32[3] += lj;
} lq l38(ld l107*ly, lw lb*l10, lo l64) {
  lo l148, l173; le(!l64)lh; l148 = ly->l78[0] & 0x3F; l173 = 64 - l148; ly->l78[0]
  += l64; ly->l78[0] &= 0xFFFFFFFF; le(ly->l78[0] < l64)ly->l78[1]++; le(l148 &&
      l64 >= l173) {
    l34((lq* )(ly->l261 + l148), (lq* )l10, l173); l314(ly, ly->l261
                                                       ); l64 -= l173; l10 += l173; l148 = 0;
  } l82(l64 >= 64) {
    l314(ly, l10); l64 -= 64; l10 +=
      64;
  } le(l64)l34((lq* )(ly->l261 + l148), (lq* )l10, l64);
} l14 lb l397[64] =
{ 0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
}; lq
l140(lb l49[16], ld l107*ly) {
  lo l208, l320; lo l184, l174; lb l93[8]; l184 =
    (ly->l78[0] >> 29) | (ly->l78[1] << 3); l174 = (ly->l78[0] << 3); {
    (l93)[(0)] = (lb
                 )((l174)); (l93)[(0) + 1] = (lb)((l174) >> 8); (l93)[(0) + 2] = (lb)((l174) >> 16);
    (l93)[(0) + 3] = (lb)((l174) >> 24);
  }; {
    (l93)[(4)] = (lb)((l184)); (l93)[(4) + 1]
      = (lb)((l184) >> 8); (l93)[(4) + 2] = (lb)((l184) >> 16); (l93)[(4) + 3] = (lb)((
            l184) >> 24);
  }; l208 = ly->l78[0] & 0x3F; l320 = (l208 < 56) ? (56 - l208) : (120 - l208);
  l38(ly, l397, l320); l38(ly, l93, 8); {
    (l49)[(0)] = (lb)((ly->l32[0])); (l49)[
      (0) + 1] = (lb)((ly->l32[0]) >> 8); (l49)[(0) + 2] = (lb)((ly->l32[0]) >> 16); (l49
                                                                                     )[(0) + 3] = (lb)((ly->l32[0]) >> 24);
  }; {
    (l49)[(4)] = (lb)((ly->l32[1])); (l49
                                     )[(4) + 1] = (lb)((ly->l32[1]) >> 8); (l49)[(4) + 2] = (lb)((ly->l32[1]) >> 16); (
                                       l49)[(4) + 3] = (lb)((ly->l32[1]) >> 24);
  }; {
    (l49)[(8)] = (lb)((ly->l32[2])); (
      l49)[(8) + 1] = (lb)((ly->l32[2]) >> 8); (l49)[(8) + 2] = (lb)((ly->l32[2]) >> 16);
    (l49)[(8) + 3] = (lb)((ly->l32[2]) >> 24);
  }; {
    (l49)[(12)] = (lb)((ly->l32[3]));
    (l49)[(12) + 1] = (lb)((ly->l32[3]) >> 8); (l49)[(12) + 2] = (lb)((ly->l32[3]) >>
        16); (l49)[(12) + 3] = (lb)((ly->l32[3]) >> 24);
  };
} lb*l332(lw l9*l109, lw l9*
          l298) {
  lw l9*l105, *l156; l14 lb l90[16]; l237 l25 ln, l200, l92; ld l107 ly
  , l70; l25 l181; l92 = l216(l109); l105 = l298; le(l518(l105, "\x24\x31\x24", 3) ==
      0)l105 += 3; l33(l156 = l105; *l156 != '\0' && *l156 != '$' && l156 < (l105 + 8); l156
                       ++)l497; l200 = l156 - l105; l127(&ly); l38(&ly, (lw lb* )l109, l92); l38(&ly, (
                             lw lb* )"\x24\x31\x24", 3); l38(&ly, (lw lb* )l105, l200); l127(&l70); l38(
                               &l70, (lw lb* )l109, l92); l38(&l70, (lw lb* )l105, l200); l38(&l70, (lw lb*
                                                                                                    )l109, l92); l140(l90, &l70); l33(l181 = l92; l181 > 0; l181 -= 16)l38(&ly, l90, (
                                                                                                        l237 l25)(l181 > 16 ? 16 : l181)); l393(l90, 0, l76(l90)); l33(ln = l92; ln != 0; ln
                                                                                                            >>= 1)le((ln & 1) != 0)l38(&ly, l90, 1); l2 l38(&ly, (lw lb* )l109, 1); l140(l90
                                                                                                                , &ly); l33(ln = 0; ln < 1000; ln++) {
    l127(&l70); le((ln & 1) != 0)l38(&l70, (lw lb*
                                           )l109, l92); l2 l38(&l70, l90, 16); le((ln % 3) != 0)l38(&l70, (lw lb* )l105,
                                               l200); le((ln % 7) != 0)l38(&l70, (lw lb* )l109, l92); le((ln & 1) != 0)l38(&l70,
                                                   l90, 16); l2 l38(&l70, (lw lb* )l109, l92); l140(l90, &l70);
  } lh l90;
}



#ifdef CRYPTO_ON
#define l22( l102, l254) (( lo)(( l102) + ( l254)))
#define l223( l102) ( l22(( l102),1))
ld l98 {lo l10[16];}; lq l214(lb l157[64], lw lo l10[16]); lq l400(ld l98
    *lc, lw lb*l221, lb*lf, lo l80); lq l335(ld l98*lc, lw lb*l66); lq l339(ld
        l98*lc, lw lb*l252);
#endif
#ifdef CRYPTO_ON
#define l29( l102, lf) ( ROTL32( l102, lf))
#define l28( l102, l254) (( l102) ^ ( l254))
#define l436( l129, l102) ((( lo  *  )( l129))[0] = l102)
#define l61( l129) ((( lo  *  )( l129))[0])
lq l214(lb l157[64], lw lo l10[16]) {
  lo lc[16]; l25 ln; l33(ln = 0; ln < 16; ++
                         ln)lc[ln] = l10[ln]; l33(ln = 20; ln > 0; ln -= 2) {
    lc[4] = l28(lc[4], l29(l22(lc[0]
                               , lc[12]), 7)); lc[8] = l28(lc[8], l29(l22(lc[4], lc[0]), 9)); lc[12] = l28(lc[
                                     12], l29(l22(lc[8], lc[4]), 13)); lc[0] = l28(lc[0], l29(l22(lc[12], lc[8]),
                                         18)); lc[9] = l28(lc[9], l29(l22(lc[5], lc[1]), 7)); lc[13] = l28(lc[13], l29(
                                             l22(lc[9], lc[5]), 9)); lc[1] = l28(lc[1], l29(l22(lc[13], lc[9]), 13)); lc[5]
      = l28(lc[5], l29(l22(lc[1], lc[13]), 18)); lc[14] = l28(lc[14], l29(l22(lc[10
                                                                                ], lc[6]), 7)); lc[2] = l28(lc[2], l29(l22(lc[14], lc[10]), 9)); lc[6] = l28(lc[
                                                                                    6], l29(l22(lc[2], lc[14]), 13)); lc[10] = l28(lc[10], l29(l22(lc[6], lc[2]),
                                                                                        18)); lc[3] = l28(lc[3], l29(l22(lc[15], lc[11]), 7)); lc[7] = l28(lc[7], l29(
                                                                                            l22(lc[3], lc[15]), 9)); lc[11] = l28(lc[11], l29(l22(lc[7], lc[3]), 13)); lc[
                                                                                                15] = l28(lc[15], l29(l22(lc[11], lc[7]), 18)); lc[1] = l28(lc[1], l29(l22(lc[
                                                                                                    0], lc[3]), 7)); lc[2] = l28(lc[2], l29(l22(lc[1], lc[0]), 9)); lc[3] = l28(lc[3
                                                                                                                                                                                  ], l29(l22(lc[2], lc[1]), 13)); lc[0] = l28(lc[0], l29(l22(lc[3], lc[2]), 18));
    lc[6] = l28(lc[6], l29(l22(lc[5], lc[4]), 7)); lc[7] = l28(lc[7], l29(l22(lc[6
                                                                                ], lc[5]), 9)); lc[4] = l28(lc[4], l29(l22(lc[7], lc[6]), 13)); lc[5] = l28(lc[5
                                                                                                                                                              ], l29(l22(lc[4], lc[7]), 18)); lc[11] = l28(lc[11], l29(l22(lc[10], lc[9]), 7
                                                                                                                                                                                                                      )); lc[8] = l28(lc[8], l29(l22(lc[11], lc[10]), 9)); lc[9] = l28(lc[9], l29(l22
                                                                                                                                                                                                                          (lc[8], lc[11]), 13)); lc[10] = l28(lc[10], l29(l22(lc[9], lc[8]), 18)); lc[12
                                                                                                                                                                                                                                                                                                     ] = l28(lc[12], l29(l22(lc[15], lc[14]), 7)); lc[13] = l28(lc[13], l29(l22(lc[
                                                                                                                                                                                                                                                                                                         12], lc[15]), 9)); lc[14] = l28(lc[14], l29(l22(lc[13], lc[12]), 13)); lc[15] =
                                                                                                                                                                                                                                                                                                             l28(lc[15], l29(l22(lc[14], lc[13]), 18));
  } l33(ln = 0; ln < 16; ++ln)lc[ln] =
    l22(lc[ln], l10[ln]); l33(ln = 0; ln < 16; ++ln)l436(l157 + 4 * ln, lc[ln]);
} l14 lw
l9*l219 = "\x65\x78\x70\x61\x6e\x64\x20\x33\x32\x2d\x62\x79\x74\x65\x20"
          "\x6b"; lq l335(ld l98*lc, lw lb*l66) {
  lc->l10[1] = l61(l66 + 0); lc->l10[2] =
    l61(l66 + 4); lc->l10[3] = l61(l66 + 8); lc->l10[4] = l61(l66 + 12); lc->l10[11] =
      l61(l66 + 16); lc->l10[12] = l61(l66 + 20); lc->l10[13] = l61(l66 + 24); lc->l10[
        14] = l61(l66 + 28); lc->l10[0] = l61(l219 + 0); lc->l10[5] = l61(l219 + 4); lc->l10
  [10] = l61(l219 + 8); lc->l10[15] = l61(l219 + 12);
} lq l339(ld l98*lc, lw lb*
          l252) {
  lc->l10[6] = l61(l252 + 0); lc->l10[7] = l61(l252 + 4); lc->l10[8] = 0; lc->
  l10[9] = 0;
} lq l400(ld l98*lc, lw lb*l221, lb*lf, lo l80) {
  lb l157[64]; l237
  l25 ln; le(!l80)lh; l33(;;) {
    l214(l157, lc->l10); lc->l10[8] = l223(lc->l10[
        8]); le(!lc->l10[8]) {
      lc->l10[9] = l223(lc->l10[9]);
    } le(l80 <= 64) {
      l33(ln = 0
               ; ln < l80; ++ln)lf[ln] = l221[ln] ^ l157[ln]; lh;
    } l33(ln = 0; ln < 64; ++ln)lf[ln] =
      l221[ln] ^ l157[ln]; l80 -= 64; lf += 64; l221 += 64;
  }
}
#endif
#ifdef CRYPTO_ON
ld l62 {lb l45[64]; lo l48; lb l71; ld l98 l74;}; lq l377(ld l62*l24, ld l98
    *l326); lq l207(ld l62*l24, lw lb*l111); lq l227(ld l62*l24, lw lb*l303);
lq l160(ld l62*l24, lw lb*l118, lb*l77, lo l21);
#else
ld l62 {lo l48;};
#endif
lo l194(lb*l135, lo l328, lo l79);
#ifdef CRYPTO_ON
lq l377(ld l62*l24, ld l98*l326) {
  l24->l74 = *l326; l24->l71 = 0; l24->l48 = 0
      ;
} lq l207(ld l62*l24, lw lb*l111) {
  l335(&l24->l74, l111);
} lq l227(ld l62
          *l24, lw lb*l303) {
  l339(&l24->l74, l303);
  l24->l71 = 0;
  l24->l48 = 0;
} lq l160
(ld l62*l24, lw lb*l118, lb*l77, lo l21) {
  l237 l25 ln; le(l24->l71) {
    lb*lt =
      l24->l45 + 64 - l24->l71; le(l21 >= l24->l71) {
      l21 -= l24->l71; l33(ln = 0; ln < l24
                           ->l71; ++ln)l77[ln] = l118[ln] ^ lt[ln]; l118 += l24->l71; l77 += l24->l71; l24->
      l71 = 0;
    } l2{l24->l71 -= l21; l33(ln = 0; ln < l21; ++ln)l77[ln] = l118[ln] ^ lt[ln];
         l21 = 0;}
  } le(!l21)lh; l33(;;) {
    l214((lb* )l24->l45, l24->l74.l10); l24->l74
    .l10[8] = l223(l24->l74.l10[8]); le(!l24->l74.l10[8])l24->l74.l10[9] =
      l223(l24->l74.l10[9]); le(l21 <= 64) {
      l33(ln = 0; ln < l21; ++ln)l77[ln] = l118[
                                             ln] ^ l24->l45[ln]; l24->l71 = 64 - l21; lh;
    } l33(ln = 0; ln < 64; ++ln)l77[ln] = l118
                                          [ln] ^ l24->l45[ln]; l21 -= 64; l118 += 64; l77 += 64;
  }
}
#endif
l14
#ifdef ARDUINO
__flash
#endif
lw lo l266[256] = {0x00000000, 0x77073096, 0xee0e612c, 0x990951ba,
                   0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3, 0x0edb8832, 0x79dcb8a4,
                   0xe0d5e91e, 0x97d2d988, 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91,
                   0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de, 0x1adad47d, 0x6ddde4eb,
                   0xf4d4b551, 0x83d385c7, 0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec,
                   0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5, 0x3b6e20c8, 0x4c69105e,
                   0xd56041e4, 0xa2677172, 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
                   0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940, 0x32d86ce3, 0x45df5c75,
                   0xdcd60dcf, 0xabd13d59, 0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116,
                   0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f, 0x2802b89e, 0x5f058808,
                   0xc60cd9b2, 0xb10be924, 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,
                   0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f,
                   0x9fbfe4a5, 0xe8b8d433, 0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818,
                   0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01, 0x6b6b51f4, 0x1c6c6162,
                   0x856530d8, 0xf262004e, 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457,
                   0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49,
                   0x8cd37cf3, 0xfbd44c65, 0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2,
                   0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb, 0x4369e96a, 0x346ed9fc,
                   0xad678846, 0xda60b8d0, 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9,
                   0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3,
                   0xb966d409, 0xce61e49f, 0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4,
                   0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6,
                   0x03b6e20c, 0x74b1d29a, 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683,
                   0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d,
                   0x0a00ae27, 0x7d079eb1, 0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe,
                   0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7, 0xfed41b76, 0x89d32be0,
                   0x10da7a5a, 0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
                   0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767,
                   0x3fb506dd, 0x48b2364b, 0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60,
                   0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79, 0xcb61b38c, 0xbc66831a,
                   0x256fd2a0, 0x5268e236, 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f,
                   0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31,
                   0x2cd99e8b, 0x5bdeae1d, 0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a,
                   0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713, 0x95bf4a82, 0xe2b87a14,
                   0x7bb12bae, 0x0cb61b38, 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21,
                   0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b,
                   0x6fb077e1, 0x18b74777, 0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c,
                   0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45, 0xa00ae278, 0xd70dd2ee,
                   0x4e048354, 0x3903b3c2, 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db,
                   0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5,
                   0x47b2cf7f, 0x30b5ffe9, 0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6,
                   0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf, 0xb3667a2e, 0xc4614ab8,
                   0x5d681b02, 0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d
                  }; lo
l194(lb*l135, lo l328, lo l79) {
  l82(l328--)
#ifdef ARDUINO
#ifdef pgm_read_dword_far
  l79 = pgm_read_dword_far(l266 + ((l79^ *l135++) & 0xff)) ^ (l79 >> 8);
#else
  l79 = pgm_read_dword(l266 + ((l79^ *l135++) & 0xff)) ^ (l79 >> 8);
#endif
#else
  l79 = l266[(l79^ *l135++) & 0xff] ^ (l79 >> 8);
#endif
  lh l79 ^ 0xffffffff;
}
lb*l332(lw l9*l109, lw l9*l298); l59 l317(lq); lo l260(lq);
#pragma pack(push, 1)
ld l244 {l114{ld{lb l147; lb l45[15];} l0; l59 lp[2];} lm;}; ld l284 {lb l45
  [16];
}; ld l376{l114{ld{ld l244 l54; ld l284 l199; lb l253[8]; lb l350[16
                                                                   ]; lb l348[8]; lb l370[4];} l0; l59 l321[8]; lo l429[17];} lm;}; l31 l523{
  l478 = 0, l467 = 1, l459 = 2, l488}; ld l490{
  l20 l451: 3; l20 l477: 1; l20 l526: 1;
  l20 l466: 10; l20 l502: 1;}; ld l120{l20 l388; lo l375; lo l347; lo l48;}; ld
l217{lb l535; lb l166[32]; lo l121[4]; lb l48;};
#pragma pack(pop)
ld l95 {ld l62 l110; ld l376 l35;}; lq l308(ld l95*l19, lw l9*l116, lw l9*
    l281); l15 l337(ld l95*l19, lo l197, lw lb*l111); l15 l322(ld l95*l19, lw
        lb*l224, lb*l77); lq l301(ld l95*l19, ld l120*l238); l59 l317(lq) {
  l59 l23
  ; l23 = l327(); * ((lo* )(&l23) + 1) = l327(); lh l23;
} lo l260(lq) {
  lo l23; l23
    = l327(); lh l23;
} l15 l531(lw lb*l116, lb l385, ld l284*l111) {
  le(l385 != 6)lh
  lr; le(l530(l116, "\x76\x61\x6c\x65\x72\x61", 6))lh lr; l34(l111->l45, ""
      "\x50\x61\x73\x73\x77\x6f\x72\x64\x46\x6f\x72\x56\x61\x6c\x65\x72", 16
                                                             ); lh lz;
} lq l356(ld l244*l258, lw l9*l116) {
  lb l144[15] = {0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0
                }; l25 l55 = l216(l116); le(l55 > 15)l55 = 15; l258->lm.l0.l147
    = l55; l34(l258->lm.l0.l45, l116, l55); l34(l258->lm.l0.l45 + l55, l144, 15 -
        l55);
} lq l308(ld l95*l19, lw l9*l116, lw l9*l281) {
  l356(&l19->l35.lm.l0.
       l54, l116); l34(l19->l35.lm.l0.l199.l45, l332(l281, l116), 16);
#ifndef CRYPTO_ON
  l19->l35.lm.l0.l54.lm.l0.l147 |= 0x80;
#endif
} l15 l337(ld l95*l19, lo l197, lw lb*l111) {
  lw l9*l318 = "\x79\x62\x6e\x64"
               "\x72\x66\x67\x38\x65\x6a\x6b\x6d\x63\x70\x71\x78\x6f\x74\x31\x75\x77"
               "\x69\x73\x7a\x61\x33\x34\x35\x68\x37\x36\x39"; lb*l80 = l19->l35.lm.l0.
                   l199.l45; l25 l30 = 0; l25 l183 = 3; l25 ln; l393(l80, 0, 16); l33(ln = 0; ln < 26; ln
                       ++) {
    l9*l129; lb lg; le(!l111[ln])lh lr; l129 = l516((l9* )l318, l111[ln]);
    le(!l129)lh lr; lg = l129 - l318; le(l183 < 0) {
      l80[l30++] |= (lb)(lg >> (-l183));
      le(l30 == 16)l11; l183 += 8;
    } l80[l30] |= (lb)((lg << l183) & 0xff); l183 -= 5;
  } l19
  ->l35.lm.l0.l54.lm.l0.l147 = 15; l19->l35.lm.l0.l54.lm.l0.l45[0] = 0; l19->
  l35.lm.l0.l54.lm.l0.l45[1] = l80[0]; l19->l35.lm.l0.l54.lm.l0.l45[2] = l80
      [1]; l34(l19->l35.lm.l0.l54.lm.l0.l45 + 3, &l197, 4); l19->l35.lm.l0.l54.lm
  .lp[1] = 0;
#ifndef CRYPTO_ON
  l19->l35.lm.l0.l54.lm.l0.l147 |= 0x80;
#endif
  lh lz;
} lb l362(lo l12) {
  lb l97 = * ((lb* )&l12 + 0) % 8; lb l56 = * ((lb* )&
      l12 + 1) % 7; lb l50 = * ((lb* )&l12 + 2) % 6; lb l43 = * ((lb* )&l12 + 3) % 5; le(l56
          == l97)l56++; le(l56 >= 8)l56 -= 8; l82(1) {
    le(l50 == l97)l50++; l2{le(l50 == l56)l50
                            ++; l2 l11;} le(l50 >= 8)l50 -= 8;
  } l82(1) {
    le(l43 == l97)l43++; l2{le(l43 == l56)l43
                            ++; l2{le(l43 == l50)l43++; l2 l11;}} le(l43 >= 8)l43 -= 8;
  } lh(1 << l97) + (1 << l56
                   ) + (1 << l50) + (1 << l43);
} l20 l396(lo l12) {
  lb l97 = * ((lb* )&l12 + 0) % 16; lb
  l56 = * ((lb* )&l12 + 1) % 15; lb l50 = * ((lb* )&l12 + 2) % 14; lb l43 = * ((lb* )&
      l12 + 3) % 13; le(l56 == l97)l56++; le(l56 >= 16)l56 -= 16; l82(1) {
    le(l50 == l97)l50
    ++; l2{le(l50 == l56)l50++; l2 l11;} le(l50 >= 16)l50 -= 16;
  } l82(1) {
    le(l43 ==
       l97)l43++; l2{le(l43 == l56)l43++; l2{le(l43 == l50)l43++; l2 l11;}} le(l43 >=
           16)l43 -= 16;
  } lh(1 << l97) + (1 << l56) + (1 << l50) + (1 << l43);
} l15 l322(ld l95*
           l19, lw lb*l224, lb*l77) {
  l59 l290; ld l107 l89; l59 l271[2]; l114{l59 l316
      [2]; lo l401[17];} lm; l15 l294 = lr; l25 ln; l20 l251; lb*l212; l25 l66;
#ifndef CRYPTO_ON
  l19->l35.lm.l0.l54.lm.l0.l147 &= 0x7f;
#endif
  l34(&l290, l224, 8); l34(l19->l35.lm.l0.l253, l224 + 16, 8); l33(ln = 0; ln < 256;
      ln++) {
    l15 l134; lb l256; lb*l213; lb*l202; lb*l201; lw lb*l211; l25 l270; *
    ((lb* )&l19->l35.lm.l0.l253) = ln; l127(&l89); l38(&l89, l19->l35.lm.l0.
        l54.lm.l0.l45, l19->l35.lm.l0.l54.lm.l0.l147); l38(&l89, l19->l35.lm.l0.
            l199.l45, 16 + 8); l140((lb* )l271, &l89); l19->l35.lm.l321[5] = l290 ^ l271[0]
                ; l127(&l89); l38(&l89, l19->l35.lm.l0.l253, 8 + 8); l140((lb* )lm.l316, &l89
                                                                         ); l134 = lr; l256 = l362(lm.l401[0]); l213 = (lb* )(l271 + 1); l202 = l19->l35.lm.
                                                                             l0.l350 + 8; l201 = (lb* )(lm.l316 + 1); l211 = l224 + 8; l33(l270 = 0; l270 < 8; l270++
                                                                                                                                          ) {
      le(l256 & 0x01) *l202 = *l213^ *l211; l2{le(( *l201^ *l213) == *l211) *
          l202 = *l201; l2{l134 = lz; l11;}} l213++; l202++; l201++; l211++; l256 >>= 1;
    } le
    (!l134) {
      l294 = lz;
      l11;
    }
  } le(!l294)lh lr; l19->l35.lm.l321[7] = l317(); l34(
    l77 + 16, l19->l35.lm.l0.l348, 8); l127(&l89); l38(&l89, l19->l35.lm.l0.l199
        .l45, 16 + 8 + 16 + 8); l140(l77, &l89); l251 = l396(l260()); l19->l35.lm.l429[16]
    = l260(); l212 = l19->l35.lm.l0.l370; l33(l66 = 0; l66 < 16; l66++) {
    le(l251 & 0x01
      ) {
      le( *l212 == 0) *l212 = 0xff;
      l77[l66] ^= *l212++;
    } l251 >>= 1;
  } lh lz;
}
#ifdef CRYPTO_ON
lq l301(ld l95*l19, ld l120*l238) {
  l214((lb* )l19->l110.l74.l10, (lo* )&
       l19->l35); l19->l110.l74.l10[8] = 0; l19->l110.l74.l10[9] = 0; l19->l110.l71
    = 0; l160(&l19->l110, (lb* )l238, (lb* )l238, l76(ld l120));
}
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
#define l218 TX_BUF_SIZE - 22
l31 l493 {l486 = 0, l456 = 1, l510 = 2, l537 = 3, l465 = 4, l501 = 5, l520 = 6, l449 = 7, l454
                                       = 100
}; l31 l178{l104 = 0, l504 = 1, l422 = 2, l481 = 3, l357 = 4, l483 = 5, l484 = 6, l461 =
      11, l489 = 12, l513 = 13, l440 = 21, l533 = 22, l402 = 23, l499 = 24, l471 = 25, l450 = 31,
          l474 = 41, l438 = 42, l525 = 43, l446 = 44, l503 = 51, l447 = 52, l442 = 61, l524 = 71, l460 =
                                         100, l515 = 101, l521 = 102, l443 = 111, l424 = 112}; l31 l527{l496 = 0, l528 = 1, l289 =
                                             2, l352 = 3, l455 = 4, l507 = 5, l487 = 6}; l31 l452{l409 = 0, l420 = 1, l329 = 2, l372 = 3,
                                             l360 = 4, l232 = 5, l274 = 6, l280 = 7, l500 = 8, l323 = 9, l435 = 10, l374 = 11, l472 = 12,
                                             l343 = 13, l365 = 14, l498 = 15, l325 = 20, l414 = 21, l293 = 100, l426 = 101, l380 = 103,
                                             l430 = 104, l398 = 105, l359 = 106, l349 = 200, l354 = 250}; l31 l300{l276 = 0, l309 = 1,
                                                  l288 = 2, l336 = 3, l330 = 4, l319 = 5, l324 = 6, l210 = 7, l196 = 8, l163 = 9, l165 = 10, l511 =
                                                      11, l428 = 12}; ld l406{l114{ld{lb l469: 2; lb l463: 1; lb l479: 1; lb l491: 1;
                                                          lb l434: 1; lb l304: 1; lb l476: 1;} l0; lb lp;} lm;}; l250 l203 l60; l31 l427{
  l508 = 0x00, l176 = 0x10, l145 = 0x20, l259 = 0x30, l331 = 0x40}; ld l255{
  lq*l123;
  l117( *l292)(lq * l311); l117( *l230)(lq * l311, lb * l135, l20 l21, l15 * l453);
  lq( *l283)(lq * l311);}; ld l182{l114{l203 l27: 56; ld{l59 l441: 56; l59 l122
                                        : 8;} l0;} l16; l114{l15 l310; l410 l384; lb l167; l117 l413; l20 l344; l175
                                            l408; lo l340; l312 l315; l193 l262; l9*l338; lb*l52; ld l255*l57; ld{lb l191
                                                ; lb l108; lb l209;} l47;} lv;}; ld l239{l20 l190: 10; l20 l371: 3; l20 l403: 3
  ;}; ld l297{l60 l228; lo l215; ld l239 l302;}; ld l7{ld l182 lp; lw l9*
  l146; l114{ld{lb l51: 5; lb l100: 1; lb l161: 1; lb l149: 1;} l18; ld{lb l519: 6
             ; lb l128: 2;} l124;} lm; ld l406 l141;}; l14 l20 l177(ld l7*ll) {
  l137(ll->
       lm.l18.l51) {
l5 l276: l5 l309: l5 l288: lh 1; l5 l336: l5 l330: lh 2; l5 l319
: l5 l324: l5 l210: lh 4; l5 l196: lh l76(l193); l5 l163: le(!ll->lp.lv.l338
                                                            )lh 0; lh(l20)l216(ll->lp.lv.l338); l5 l165: le(!ll->lp.lv.l52)lh 0; lh ll
->lp.lv.l52[0] + (ll->lp.lv.l52[1] << 8); l222: lh 0;
  }
} l14 l15 l273(ld l7*
               ll, l203 l12, l60 l8) {
  le(!l8)l8 = l69(); l137(ll->lm.l18.l51) {
l5 l276: le(
      l12)ll->lp.lv.l310 = lz; l2 ll->lp.lv.l310 = lr; ll->lp.l16.l27 = l8; lh lz; l5
l309: le((-0x80 <= l12) && (l12 <= 0x7f)) {
      ll->lp.lv.l384 = (l410)l12; ll->lp.
      l16.l27 = l8; lh lz;
} l11; l5 l288: le((0 <= l12) && (l12 <= 0xff)) {
      ll->lp.lv.
      l167 = (lb)l12; ll->lp.l16.l27 = l8; lh lz;
} l11; l5 l336: le((-0x8000 <= l12) &&
                       (l12 <= 0x7fff)) {
      ll->lp.lv.l413 = (l117)l12;
      ll->lp.l16.l27 = l8;
      lh lz;
    } l11;
l5 l330: le((0 <= l12) && (l12 <= 0xffff)) {
      ll->lp.lv.l344 = (l20)l12; ll->lp.
      l16.l27 = l8; lh lz;
} l11; l5 l319: le((-0x80000000LL <= l12) && (l12 <=
                       0x7fffffff)) {
      ll->lp.lv.l408 = (l175)l12;
      ll->lp.l16.l27 = l8;
      lh lz;
    } l11; l5
l324: le((0 <= l12) && (l12 <= 0xffffffff)) {
      ll->lp.lv.l340 = (lo)l12; ll->lp.
      l16.l27 = l8; lh lz;
} l11; l5 l210: ll->lp.lv.l315 = (l312)l12; ll->lp.l16.l27
  = l8; lh lz; l5 l196: ll->lp.lv.l262 = (l193)l12; ll->lp.l16.l27 = l8; lh lz;
l222: lh lr;
  } lh lr;
} l14 l15 l412(ld l7*ll, l193 l12, l60 l8) {
  le(!l8)l8 =
    l69(); l137(ll->lm.l18.l51) {
l5 l210: ll->lp.lv.l315 = (l312)l12; ll->lp.
l16.l27 = l8; lh lz; l5 l196: ll->lp.lv.l262 = l12; ll->lp.l16.l27 = l8; lh lz;
  }
  lh l273(ll, (l203)l12, l8);
} l14 l15 l358(ld l7*ll, lq*l241, l60 l8) {
  le(!
     l8)l8 = l69(); ll->lp.l16.l27 = l8; ll->lp.lv.l52 = (lb* )l241; lh lz;
} l14 l15
l355(ld l7*ll, l60 l8) {
  le(!l8)l8 = l69();
  ll->lp.l16.l27 = l8;
  lh lz;
} l31
l383{l387 = 0, l235 = 1, l234 = 2, l246 = 3}; l250 lq( *l404)(l31 l383 l437, ld l7
    *ll, ld l182*l514);
#ifdef ARDUINO
l250 lq( *l286)(lw __FlashStringHelper*l425, ...);
#else
l250 lq( *l286)(lw l9*l425, ...);
#endif
ld l264 {l15( *l233)(lw l9 * l444, l20 l505); l25( *l373)(lq * l135, l20 l21);
  l15( *l195)(lw lq * l135, l20 l21); lq( *l363)(lq); lq( *l296)(lq); l15( *
      l188)(lq); l15( *l390)(lq);
}; ld l153{lo l295; lw l9*l54; lw l9*l287; l404
  l86; l286 l36; ld l297*l130; l25 l392;}; ld l1{l114{ld l95 l103; ld{ld l62
      l180; lb l112[TX_BUF_SIZE];} l0;} lm; lb l26[RX_BUF_SIZE]; l20 l65; l20 l73
  ; ld l62 l131; lb l166[32]; lo l121; l20 l154; lw l9*l265; ld l153 l6; ld
  l264 l41; lb l17; l60 l192; l60 l170; l60 l58; lb l44; lb l139; lb l168; l15
  l142; l15 l164; l15 l225;
#ifdef ATTACHED_MODE
  lb l132;
#endif
  ld l7 l3[1];}; l31 l417 {l87 = 0, l91 = 1, l367 = 2, l53 = 3, l242 = 4, l185 = 5, l275,
                           l307, l299, l231,
}; l14 lq l423(lb*l386, l9*l88) {
  lw l9*l240 = "\x30\x31\x32"
               "\x33\x34\x35\x36\x37\x38\x39"; l25 l30 = 0; l25 ln; l15 l243; l33(ln = 0; ln <
                   4; ln++) {
    lb l169 = l386[ln]; lb l119 = l169 % 100; l88[l30] = l240[l169 / 100];
    l243 = lr; le(l88[l30] == '0')l243 = lz; l2 l30++; l169 = l119; l119 = l169 % 10; l88[
      l30] = l240[l169 / 10]; le((!l243 || l88[l30] != '0'))l30++; l88[l30++] = l240[
            l119]; l88[l30++] = '.';
  } l88[--l30] = 0;
} l14 lq l282(ld l1*la, l9*l88, lw l9
              * *l220) {
  le(la->l121 == 0) *l220 = la->l265; l2{l423((lb* )&la->l121, l88);
                                         *l220 = l88;}
} l14 lq l291(ld l1*la) {
#ifdef CRYPTO_ON
  l59 l75[8]; ld l62*l186 = &la->lm.l103.l110; lw l59 l144[8] = {0, 0, 0, 0, 0, 0,
                                                                 0, 0
                                                                }; l207(l186, (lb* )la->l166); l227(l186, (lb* )l144); l160(l186, (lb* )l144
                                                                    , (lb* )l75, 64); l34(la->l166 + 2, l75 + 4, 30); l207(l186, (lb* )l75); l227(
                                                                        l186, (lb* )l144); l75[4] = l75[1]; l75[5] = l75[3]; l75[6] = l75[0]; l75[7] = l75
                                                                            [2]; l207(&la->l131, (lb* )(l75 + 4)); l227(&la->l131, (lb* )l144);
#endif
  la->lm.l103.l110.l48 = 0; la->l131.l48 = 0;
} l14 lq l46(ld l1*la, l20 l21,
             l15 l432) {
  le(!la->l225 && l432) {
    la->l225 = lz;
    la->l58 = l69() + 100;
  } la->l73
  += l21;
} l14 lq l245(ld l1*la, l15 l345) {
  le(!l345) {
    le(la->l41.l188())lh;
  } le(la->l73 > 2) {
    l20 l68; l68 = la->l73 - 2; la->lm.l0.l112[0] = * ((lb* )&l68
        + 0); la->lm.l0.l112[1] = * ((lb* )&l68 + 1); la->l131.l48 = l194(la->lm.l0.
            l112 + 2, l68, la->l131.l48); l34(la->lm.l0.l112 + la->l73, &(la->l131.l48), 4
                                             ); la->l73 = l68 + 6;
#ifdef CRYPTO_ON
    l160(&la->l131, la->lm.l0.l112, la->lm.l0.l112, la->l73);
#endif
    le(!la->l41.l195(la->lm.l0.l112, la->l73))la->l6.l36(F("\x45\x72\x72"
        "\x6f\x72\x20\x73\x65\x6e\x64\x69\x6e\x67\x20\x64\x61\x74\x61\x21\n"));
    la->l73 = 2; la->l225 = lr;
  }
} l14 lb*l37(ld l1*la, l20 l21) {
  le(l21 > ((
              TX_BUF_SIZE - 4) - la->l73))l245(la, lz); lh la->lm.l0.l112 + la->l73;
} l14 l15
l189(ld l1*la, l60 l263) {
  lh((l263 & 0xffffffffffff0000LL) != la->l170);
}
l14 lq l171(ld l1*la, l60 l263) {
  lb*lk; la->l170 = l263 &
                    0xffffffffffff0000LL; lk = l37(la, 8); lk[0] = 0x86; lk[1] = l329; l34(lk + 2, (lb*
                                                                                                   )&la->l170 + 2, 6); l46(la, 8, lr);
} l14 l15 l366(ld l1*la, lb l99) {
  lb*lk;
  l175 lu; ld l7*ls = la->l3 + l99; le(ls->lm.l18.l51 == l428)ls->lp.lv.l340 = 0;
  lu = l216(ls->l146); le(lu > 64)lh lr; lk = l37(la, 5 + lu); lk[0] = (lb)(0x83 + lu);
  lk[1] = l323; lk[2] = l99; lk[3] = ls->lm.l18.l51; lk[4] = ls->l141.lm.lp; l34(lk
      + 5, ls->l146, lu); l46(la, lu + 5, lr); lh lz;
}
#ifdef ATTACHED_MODE
l14 l15 l431(ld l1*la, lb l99, lo*l197) {
  l175 l101; lw l9*l162 = la->l3[l99
                                ].l146; l9*l94 = l361((l9* )l162, '@'); le(l94 == 0)lh lr; l101 = l94 - l162; le(
                                  l101 > 64)lh lr; l94 += 1; *l197 = l378(l94); lh lz;
} l14 l15 l249(ld l1*la, lb
               l99) {
  lb*lk; l175 l101; ld l7*ls = la->l3 + l99; ls->lm.l18.l161 = lz; lw l9*
  l162 = ls->l146; l9*l94 = l361((l9* )l162, '@'); le(l94 == 0)lh lr; l101 = l94 -
      l162; le(l101 > 64)lh lr; l94 += 1; lo l96 = l378(l94); lk = l37(la, 9 + l101); lk[0]
    = 0x87 + l101; lk[1] = l280; lk[2] = l96; lk[3] = l96 >> 8; lk[4] = l96 >> 16; lk[5] = l96
        >> 24; lk[6] = 0; lk[7] = 0; lk[8] = l99; l34(lk + 9, l162, l101); l46(la, 9 + l101, lz);
  lh lz;
} l14 lq l353(ld l1*la) {
  la->l44 = la->l132; le(la->l17 == l53) {
    lb*lk;
    lk = l37(la, 2); lk[0] = 0x80; lk[1] = l435; l46(la, 2, lz);
  }
}
#endif
l14 lq l368(ld l1*la, ld l239 l279, lb l99) {
  lb*lk = l37(la, 5); lk[0] = (lb)0x83
                              ; lk[1] = l365; lk[2] = * ((lb* )&l279 + 0); lk[3] = * ((lb* )&l279 + 1); lk[4] =
                                l99; l46(la, 5, lr);
} l14 lq l229(ld l1*la, ld l7*ll, l31 l178 l63, l20 l21,
              l15 l106) {
  lb*lk; le(l63 == l104) {
    l25 l30; l117 l55 = 4 + l21; le((l55 < 127) && (!
                                    l106)) {
      lk = l37(la, 6 + l21);
      lk[0] = l55 | 0x80;
      l30 = 1;
    } l2{lk = l37(la, 8 + l21); lk[
           0] = 0xff; lk[1] = (lb)l55; lk[2] = (lb)(l55 >> 8); le(l106)lk[2] |= l176; l30 = 3;}
    lk[l30++] = l232; lk[l30++] = l104; lk[l30++] = ll - la->l3; lk[l30++] = (lb)ll->
        lp.l16.l27; lk[l30++] = * ((lb* )&ll->lp + 1); le(!l106) {
      lb*lt; le(ll->lm.
                l18.l51 == l163)lt = ll->lp.lv.l52; l2 le(ll->lm.l18.l51 == l165)lt = ll->lp.
                    lv.l52 + 2; l2 lt = &ll->lp.lv.l167; l34(lk + l30, lt, l21);
    } l46(la, l30 + l21,
          l106 ? lr : lz);
  } l2{lk = l37(la, 4); lk[0] = 0x82; lk[1] = l232; lk[2] = l63; lk[3] = ll
       - la->l3; l46(la, 4, lz);}
} l14 lq l278(ld l1*la, ld l7*ll, l20 l21, l15 l106
             ) {
  lb*lk; l25 l30; l117 l55 = 3 + l21; le((l55 < 127) && (!l106)) {
    lk = l37(la, 4 + l21
            ); lk[0] = (lb)(0x03 + l21); l30 = 1;
  } l2{lk = l37(la, 6 + l21); lk[0] = 0x7f; lk[1] = (
         lb)l55; lk[2] = (lb)(l55 >> 8); le(l106)lk[2] |= l176; l30 = 3;} lk[l30++] = ll - la
             ->l3; lk[l30++] = (lb)ll->lp.l16.l27; lk[l30++] = * ((lb* )&ll->lp + 1); le(!
                 l106) {
    lb*lt; le(ll->lm.l18.l51 == l163)lt = ll->lp.lv.l52; l2 le(ll->lm.l18
        .l51 == l165)lt = ll->lp.lv.l52 + 2; l2 lt = &ll->lp.lv.l167; l34(lk + l30, lt, l21
                                                                         );
  } l46(la, l30 + l21, l106 ? lr : lz);
} l14 l15 l206(ld l1*la, ld l7*ll, l31 l427
               l84) {
  l117 lu; lb*lk; l15 l143; l25 l39; l137(l84) {
l5 l145: {
      lu = ll->lp.lv.
           l57->l292(ll->lp.lv.l57->l123); le(lu == 0) {
        ll->lp.lv.l57->l230(ll->lp.
                            lv.l57->l123, 0, 0, &l143); lh lz;
      } le(lu > 0) {
        le(lu > l218)lu = l218; l39 = (ll->
                                       lm.l18.l149) ? 5 : 4; lk = l37(la, l39 + lu); lu = ll->lp.lv.l57->l230(ll->lp.lv.
                                           l57->l123, lk + l39, lu, &l143); le((lu == 0) && (!l143))lh lz;
      } l2 lk = l37(la, 5);
      le(lu < 0) {
        lu = 0;
        l84 = l259;
        l11;
      } le(l143)l84 = l331; l2 l84 = l145; l11;
    } l5 l176
: {
      lu = ll->lp.lv.l57->l292(ll->lp.lv.l57->l123); le(lu >= 0) {
        le(l189(la, ll
                ->lp.l16.l27))l171(la, ll->lp.l16.l27); le(lu > l218)lu = l218; l39 = (ll->lm.
                    l18.l149) ? 8 : 6; lk = l37(la, l39 + lu); lu = ll->lp.lv.l57->l230(ll->lp.lv.l57
                        ->l123, lk + l39, lu, &l143);
      } le(lu < 0) {
        le(ll->lm.l18.l149)l229(la, ll, l422,
                                0, lr); ll->lm.l124.l128 = 0; lh lr;
      } l2{le(ll->lm.l18.l149)l229(la, ll, l104
                                   , lu, lz); l2 l278(la, ll, lu, lz); le(!l143)lh lz; lk = l37(la, 5); lu = 0; l84 =
             l331;} l11;
} l5 l259: lk = l37(la, 5); lu = 0; l11; l222: lh lr;
  } lu++; le(ll->lm.
             l18.l161) {
    lk[0] = 0x7f; lk[1] = (lb)lu; lk[2] = l84 + * ((lb* )&lu + 1); lk[3] = ll
        - la->l3; l46(la, 3 + lu, (l84 == l145) ? lr : lz);
  } l2{lk[0] = 0xff; lk[1] = (lb)lu; lk
       [2] = l84 + * ((lb* )&lu + 1); lk[3] = l232; lk[4] = ll - la->l3; l46(la, 4 + lu, (l84
           == l145) ? lr : lz);} le(l84 != l145)ll->lm.l124.l128 = 0; lh lz;
} l14 lq l272(ld
              l1*la, ld l7*ll) {
  lb l236; ld l297*l159; le((!ll->lm.l18.l100) && (!la->
                            l168)) {
    l236 = (lb)ll->lp.l16.l0.l122; le(l236 == 255)lh; l159 = la->l6.l130 +
        l236; le(l159->l215) {
      le(ll->lp.l16.l27 >= l159->l228) {
        l59 l399 = ll->lp.
                   l16.l27 % l159->l215; l159->l228 = ll->lp.l16.l27 + l159->l215 - l399;
      } l2 lh;
    }
  } le(ll->l141.lm.l0.l304) {
    le(ll->lm.l124.l128) {
      ll->lp.lv.l57->l283(ll
                          ->lp.lv.l57->l123); l206(la, ll, l259);
    } ll->lm.l18.l161 = 1; l206(la, ll,
                                l176); lh;
  } le(l189(la, ll->lp.l16.l27))l171(la, ll->lp.l16.l27); l278(la,
      ll, l177(ll), lr);
} l14 lq l285(ld l1*la, ld l7*l83, lw l9*l136, l60 l8) {
  lb
  l4; l175 lu; lb*lk; l4 = l83 - la->l3; le(la->l3[l4].lp.lv.l47.l209)lh; le(la
      ->l3[l4].lp.l16.l0.l122 != 255) {
    lb l151 = la->l168; le(l151) {
      l82(la->l3[
            l151].lp.lv.l47.l108)l151 = la->l3[l151].lp.lv.l47.l108; la->l3[l151].lp
      .lv.l47.l108 = l4;
    } l2 la->l168 = l4; la->l3[l4].lp.lv.l47.l191 = l151; la->l3
    [l4].lp.lv.l47.l108 = 0;
  } la->l3[l4].lp.lv.l47.l209 = 1; le(l189(la, l8))l171
  (la, l8); lu = l216(l136) + 3; le(lu > 127) {
    lk = (lb* )l37(la, 4 + lu); lk[0] = 0xff;
    lk[1] = * ((lb* )(&lu) + 0); lk[2] = * ((lb* )(&lu) + 1); lk[3] = l325; lk[4] = l4
        ; lk[5] = (lb)l8; lk[6] = * ((lb* )&l8 + 1); l34(lk + 7, l136, lu - 3); l46(la, 4 + lu,
            lr);
  } l2{lk = (lb* )l37(la, 2 + lu); lk[0] = 0x80 + lu; lk[1] = l325; lk[2] = l4; lk[3]
       = (lb)l8; lk[4] = * ((lb* )&l8 + 1); l34(lk + 5, l136, lu - 3); l46(la, 2 + lu, lr);}
}
l14 lq l334(ld l1*la, ld l7*l83) {
  lb l4; lb*lk; l4 = l83 - la->l3; le(!la->l3[
                                        l4].lp.lv.l47.l209)lh; le(la->l3[l4].lp.l16.l0.l122 != 255) {
    le(la->l3[l4
             ].lp.lv.l47.l191)la->l3[la->l3[l4].lp.lv.l47.l191].lp.lv.l47.l108 = la
                 ->l3[l4].lp.lv.l47.l108; l2 la->l168 = la->l3[l4].lp.lv.l47.l108; le(la->
                     l3[l4].lp.lv.l47.l108)la->l3[la->l3[l4].lp.lv.l47.l108].lp.lv.l47.
    l191 = la->l3[l4].lp.lv.l47.l191;
  } la->l3[l4].lp.lv.l47.l209 = 0; lk = (lb* )l37
                                        (la, 3); lk[0] = 0x81; lk[1] = l414; lk[2] = l4; l46(la, 3, lz);
} l14 lq l416(ld l1
              *la, ld l7*ll, l31 l178 l63) {
  l20 lu; le((ll->l141.lm.l0.l304) && (l63 ==
                                       l104)) {
    le(ll->lm.l124.l128)l63 = l357; l2{ll->lm.l18.l149 = 1; l206(la, ll,
                                       l176); lh;}
  } lu = 0; le(l63 == l104) {
    le(l189(la, ll->lp.l16.l27))l171(la, ll->
                                     lp.l16.l27); lu = l177(ll);
  } l229(la, ll, l63, lu, lr);
} l14 lq l342(ld l1*la,
              ld l7*ll, l31 l178 l63) {
  lb*lk; le(l63 == l104) {
    le(l189(la, ll->lp.l16.l27))l171
    (la, ll->lp.l16.l27); lk = l37(la, 6); lk[0] = 0x84; lk[1] = l274; lk[2] = l104; lk[
      3] = ll - la->l3; lk[4] = (lb)ll->lp.l16.l27; lk[5] = (lb)(ll->lp.l16.l27 >> 8);
    l46(la, 6, lz);
  } l2{lk = l37(la, 4); lk[0] = 0x82; lk[1] = l274; lk[2] = l63; lk[3] =
         ll - la->l3; l46(la, 4, lz);}
} l14 lq l433(ld l1*la, lb l415) {
  lb*lk = l37(la, 3
             ); lk[0] = 0x81; lk[1] = l374; lk[2] = l415; l46(la, 3, lz);
}
#if ( RX_BUF_SIZE < 4096)
l14 lq l421(ld l1*la, l20 l21) {
  lb*lk = l37(la, 4); lk[0] = 0x82; lk[1] = l343;
  lk[2] = (lb)l21; lk[3] = (lb)(l21 >> 8); l46(la, 4, lr);
}
#endif
l14 lq l394(ld l1*la, ld l153*l155, ld l264*l248) {
  la->l6 = *l155; la->l41
    = *l248; la->l73 = 2; la->l44 = 1; la->l139 = 0; la->l192 = 0; la->l17 = l87; la->l65
    = 0; la->l142 = lz; la->l164 = lr; la->l168 = 0; la->l58 = l69();
} l14 ld l7*l351(
  ld l1*la, lw l9*l126, l31 l300 l172, lb l267, l20 l247, ld l255*l198) {
  lo
  l125; ld l7*ls = la->l3 + la->l44++; l114{ld l239 l115; l20 l407;} lm; lm.l407
    = l247; le((lb* )ls >= (lb* )la->l6.l130) {
    la->l6.l36(F("\x49\x6e\x63\x72"
                 "\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f"
                 "\x55\x4e\x54\x5f\x53\x49\x47\x4e\x41\x4c\x53\x20\x21\n")); l82(1);
  }
#ifdef ATTACHED_MODE
  la->l132 = la->l44;
#endif
  ls->l146 = l126; le(l172 == l196) {
    le(l76(l193) == 4)l172 = l210;
  } ls->lm.l18.
  l51 = l172; ls->lm.l18.l100 = 0; ls->lm.l18.l161 = 0; ls->lm.l18.l149 = 0; ls->
  l141.lm.lp = l267; ls->lp.lv.l262 = 0; le(l198)ls->lp.lv.l57 = l198; le(lm.
      l115.l403) {
    le(la->l139 >= la->l6.l392) {
      la->l6.l36(F("\x49\x6e\x63\x72"
                   "\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f"
                   "\x55\x4e\x54\x5f\x53\x54\x4f\x52\x45\x20\x21\n")); l82(1);
    } ls->lp.l16
    .l0.l122 = la->l139; la->l6.l130[la->l139].l302 = lm.l115; la->l6.l130[la->
        l139].l228 = 0; l137(lm.l115.l371) {
l5 0: l125 = lm.l115.l190; l11; l5 1: l125 =
  (lo)lm.l115.l190 * 1000; l11; l5 2: l125 = (lo)lm.l115.l190 * 1000 * 60; l11; l5 3
: l125 = (lo)lm.l115.l190 * 1000 * 60 * 60; l11; l5 4: l125 = (lo)lm.l115.l190 * 1000
    * 60 * 60 * 24; l11; l222: l125 = 0; l11;
    } la->l6.l130[la->l139].l215 = l125; la->
    l139++;
  } l2 ls->lp.l16.l0.l122 = 255; lh ls;
}
#ifdef ATTACHED_MODE
l14 ld l7*l379(ld l1*la, lw l9*l126) {
  ld l7*ls = la->l3 + la->l44++; le((lb*
                                    )ls >= (lb* )la->l6.l130) {
    la->l44--; la->l6.l36(F("\x49\x6e\x63\x72\x65"
                            "\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f\x55"
                            "\x4e\x54\x5f\x53\x49\x47\x4e\x41\x4c\x53\x20\x21\n")); lh 0;
  } ls->l146
    = l126; le(la->l17 == l53)l249(la, la->l44 - 1); lh ls;
}
#endif
l14 l15 l391(ld l1*la, l15*l369) {
  l25 l133; le(la->l17 == l91) {
    le(la->l6.
       l54)l308(&la->lm.l103, la->l6.l54, la->l6.l287); l2{le(!l337(&la->lm.
    l103, la->l6.l295, (lb* )la->l6.l287)) {
      la->l6.l36(F("\x50\x61\x73\x73"
                   "\x77\x6f\x72\x64\x20\x69\x73\x20\x65\x72\x72\x6f\x72\x21\n")); la->
      l17 = l87; lh lz;
    }} la->l6.l36(F("\x57\x61\x69\x74\x20\x63\x6f\x6e\x6e"
                    "\x65\x63\x74\x69\x6f\x6e\x2e\x2e\x2e\n")); le(!la->l41.l233(la->l265,
                        4502)) {
      la->l6.l36(F("\x4e\x6f\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f"
                   "\x6e\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x73\x65\x72\x76\x69\x63"
                   "\x65\n")); la->l58 = l69() + 2000; lh lr;
    } la->l17 = l275;
  } l133 = la->l41.l373(
             la->l26 + la->l65, RX_BUF_SIZE - la->l65); le(l133 < 0)lh lr; le(la->l17 == l275
                                                                             ) {
    le(!la->l41.l390())lh lz; la->l6.l36(F("\x57\x61\x69\x74\x20\x61\x75"
                                           "\x74\x68\x6f\x72\x69\x7a\x61\x74\x69\x6f\x6e\x2e\x2e\x2e\n")); la->
    l41.l195(&la->lm.l103.l35.lm.l0.l54, l76(ld l244)); la->l17 = l307;
  } le((
         l133 == 0) && (la->l142)) {
    lh lz;
  } *l369 = lz; l137(la->l17) {
l5 l307: {
      lb lk[
        24 + l76(ld l120)]; ld l120 l138; le(l133 != 24)lh lr; le(!l322(&la->lm.l103
            , la->l26, lk))lh lr; l138.l388 = 1; l138.l375 = la->l6.l295; l138.l347 =
              0xffffffffL; l138.l48 = l194((lb* )&l138, offsetof(ld l120, l48),
                                           0xffffffff);
#ifdef CRYPTO_ON
      l301(&la->lm.l103, &l138);
#endif
      l34(lk + 24, &l138, l76(ld l120)); le(!la->l41.l195(lk, l76(lk)))lh lr; la->
      l41.l363(); la->l17 = l299; lh lz;
} l5 l299: {
      lb l134; lw l9*l179; l9 l268[12
                                   + 3 + 1]; le(l133 != l76(ld l217))lh lr;
#ifdef CRYPTO_ON
      l160(&la->lm.l103.l110, la->l26, la->l26, l76(ld l217));
#endif
      le(la->l26[offsetof(ld l217, l48)] != (lb)l194(la->l26, offsetof(ld l217,
          l48), 0xffffffff))lh lr; l134 = la->l26[0]; la->l41.l296(); le(l134 != l104) {
        l137(l134) {
l5 l424: la->l6.l36(F("\x54\x68\x65\x20\x73\x65\x72\x76\x69"
                      "\x63\x65\x20\x69\x73\x20\x62\x72\x6f\x6b\x65\x6e\n")); l11; l5 l402: la
          ->l58 = l69() + 10000; la->l6.l36(F("\x54\x68\x65\x20\x64\x65\x76\x69\x63"
                                              "\x65\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65"
                                              "\x64\n")); l11;
        } lh lr;
      } la->l121 = la->l26[33]; * ((lb* )&la->l121 + 1) = la
          ->l26[34]; * ((lb* )&la->l121 + 2) = la->l26[35]; * ((lb* )&la->l121 + 3) =
            la->l26[36]; * ((lb* )&la->l154 + 0) = la->l26[37]; * ((lb* )&la->l154 + 1) =
              la->l26[38]; le(!la->l154)la->l154 = 4503; l282(la, l268, &l179); le(!la->
                  l41.l233(l179, la->l154)) {
        la->l6.l36(F("\x4c\x6f\x73\x73\x20\x6f\x66"
                     "\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\n")); la->l17 = l91; lh lz;
      } l34(la->l166, la->l26 + 1, 32); l291(la); le(!la->l41.l195(la->l166, 8))lh
      lr; la->l17 = l231; la->l65 = 0; la->l6.l36(F("\x53\x65\x74\x74\x69\x6e\x67"
          "\x2e\x2e\x2e\n")); lh lz;
} l5 l231: l5 l53: {
      l25 l39 = 0; ld l62*l180 = &la->
                                 lm.l103.l110;
#ifdef CRYPTO_ON
      l160(l180, la->l26 + la->l65, la->l26 + la->l65, l133);
#endif
      la->l65 += l133; l82(1) {
        l25 l72; l25 l42; lo l333; l20 l68; l25 l64 = la->l65 -
            l39; le(l64 < 6)l11; l68 = la->l26[l39] + (la->l26[l39 + 1] << 8); le((l68 + 6) > l64) {
          le(l64 == RX_BUF_SIZE) {
            la->l6.l36(F("\x52\x65\x63\x65\x69\x76\x69\x6e"
                         "\x67\x20\x74\x6f\x6f\x20\x6d\x75\x63\x68\x20\x64\x61\x74\x61\x2c\x20"
                         "\x52\x58\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65\x20\x6d\x75"
                         "\x73\x74\x20\x6e\x6f\x74\x20\x62\x65\x20\x6c\x65\x73\x73\x20\x74\x68"
                         "\x61\x6e\x20\x25\x69\x20\x62\x79\x74\x65\x73\x2e\n"), l68 + 6); lh lr;
          }
          l11;
        } le(la->l142) {
          l34(&l333, la->l26 + l39 + 2 + l68, 4); l180->l48 = l194(la->
              l26 + l39 + 2, l68, l180->l48); le(l180->l48 != l333)lh lr;
        } l2 la->l142 = lz; l72
          = l39 + 2; l42 = l72 + l68; l39 += l68 + 6; l82(l72 != l42) {
          l25 l405 = l72; l25 l40; lb
          l204; lb*l13; le(la->l41.l188()) {
            l20 l119; l39 = l72 - 2; l341(la->l26, la->
                                          l26 + l39, la->l65 - l39); la->l65 -= l39; l119 = l42 - l72; la->l26[0] = * ((lb* )&
                                              l119); la->l26[1] = * ((lb* )&l119 + 1); la->l142 = lr; lh lz;
          } l40 = la->l26[
                    l72++] & 0x7f; le(l40 == 0x7f) {
            lb l81; * ((lb* )&l40 + 0) = la->l26[l72++]; l81
              = la->l26[l72++]; * ((lb* )&l40 + 1) = l81 & 0x0f;
          } le(la->l26[l405] & 0x80)l204
            = la->l26[l72++]; l2 l204 = 0; l13 = la->l26 + l72; l72 += l40; le(l72 > l42)lh lr;
          l137(l204) {
l5 l420: {
              lb l4; l59 l364 = 0xffffffffffffffffLL; ld l7*ls; l117
              lu; ld l182 l23; le(l40 < 3)lh lr; l4 = l13[0]; le(l4 >= la->l44)lh lr; ls = la->
                  l3 + l4; lu = l40 - 3; le(ls->l141.lm.l0.l434) {
                lu -= 8; le(lu < 0)lh lr; l34(&l364,
                                              l13 + l40 - 8, 8);
              } l23.l16.l27 = la->l192; l23.l16.l27 |= l13[1]; l23.l16.l27 |=
                l13[2] << 8; le(ls->lm.l18.l51 == l163) {
                lb*l42; lb l81; l23.lv.l52 = l13 + 3; l42
                  = l23.lv.l52 + lu; l81 = *l42; *l42 = 0; la->l6.l86(l234, ls, &l23); *l42 = l81;
              }
              l2 le(ls->lm.l18.l51 == l165) {
                l13[1] = (lb)lu; l13[2] = (lb)(lu >> 8); l23.lv.
                l52 = l13 + 3 - 2; la->l6.l86(l234, ls, &l23);
              } l2{le(l177(ls) != lu)lh lr; l34(&
                                                l23.lv.l167, l13 + 3, lu); la->l6.l86(l234, ls, &l23);} l11;
} l5 l329: {
              le(l40
                 != 6)lh lr; l34(((lb* ) & (la->l192)) + 2, l13, 6); l11;
} l5 l372: {
              lb l4; ld l7*
              ls; le(l40 != 1)lh lr; l4 = l13[0]; le(l4 >= la->l44)lh lr; ls = la->l3 + l4; la->l6
              .l86(l387, ls, 0); l11;
} l5 l360: {
              lb l4; l20 lu; ld l7*ls; ld l182 l23; le(
                l40 < 1)lh lr; l4 = l13[0]; le(l4 >= la->l44)lh lr; lu = l40 - 1; ls = la->l3 + l4; le(
                  ls->lm.l18.l51 == l163) {
                lb*l42; lb l81; l23.lv.l52 = l13 + 1; l42 = l23.lv.l52 +
                    lu; l81 = *l42; *l42 = 0; la->l6.l86(l235, ls, &l23); *l42 = l81;
              } l2 le(ls->lm
                      .l18.l51 == l165) {
                * (l13 - 1) = (lb)lu; l13[0] = (lb)(lu >> 8); l23.lv.l52 = l13 - 1
                    ; la->l6.l86(l235, ls, &l23);
              } l2{le(l177(ls) != lu)lh lr; l34(&l23.lv.l167,
                                                l13 + 1, lu); la->l6.l86(l235, ls, &l23);} l11;
} l5 l323: {
              le(l40 != 2)lh lr; le(
                l13[0] != l104)lh lr; l11;
} l5 l293: l5 l426: {
              lb l4; ld l7*ls; le(l40 != 1)lh
              lr; l4 = l13[0]; le(l4 >= la->l44)lh lr; ls = la->l3 + l4; le(l204 == l293) {
                ls->lm.
                l18.l100 = 1; le(l4 == 0)la->l6.l36(F("\x65\x6e\x74\x65\x72\x65\x64\x20"
                                                      "\x66\x69\x72\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"), l13[0]);
              } l2{ls
                   ->lm.l18.l100 = 0; le(l4 == 0)la->l6.l36(F("\x65\x78\x69\x74\x20\x6c\x61"
                       "\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"), l13[0]);} l11;
} l5 l359: {
              l60
              l150; le(l40 != 8)lh lr; l34(&l150, l13, 8); l389 = l150 - (l69() - l389); l11;
            } l5
l430: l5 l398: l11; l5 l349: {
              le(!la->l164) {
                l25 ln;
#if ( RX_BUF_SIZE < 4096)
                l421(la, RX_BUF_SIZE);
#endif
#ifdef ATTACHED_MODE
                l33(ln = 1; ln < la->l132; ln++) {
#else
                l33(ln = 1; ln < la->l44; ln++) {
#endif
                  l366(la, ln); le(la->l3[ln].lp.l16.l0.l122 != 255)l368(la, la->l6.l130[la
                      ->l3[ln].lp.l16.l0.l122].l302, ln);
                }
#ifdef ATTACHED_MODE
                l33(ln = la->l132; ln < la->l44; ln++)l249(la, ln);
#endif
                l433(la, 0);
              } la->l6.l36(F("\x57\x6f\x72\x6b\x2e\x2e\x2e\n")); la->l17 =
                l53; la->l168 = 0; l11;
            }
#ifdef ATTACHED_MODE
l5 l409: {
              lb l4; l20 lu; ld l7*ls; ld l182 l23; le(l40 < 3)lh lr; l4 = l13[0];
              le(l4 >= la->l44)lh lr; lu = l40 - 3; ls = la->l3 + l4; l23.l16.l27 = la->l192 | (l13[
                    1] + (l13[2] << 8)); le(ls->lm.l18.l51 == l163) {
                lb*l42; lb l81; l23.lv.l52 = l13
                                             + 3; l42 = l23.lv.l52 + lu; l81 = *l42; *l42 = 0; la->l6.l86(l246, ls, &l23); *l42
                  = l81;
              } l2 le(ls->lm.l18.l51 == l165) {
                * (l13 + 1) = (lb)lu; * (l13 + 2) = (lb)(
                                                      lu >> 8); l23.lv.l52 = l13 + 1; la->l6.l86(l246, ls, &l23);
              } l2{le(l177(ls) != lu)lh
                   lr; l34(&l23.lv.l167, l13 + 3, lu); la->l6.l86(l246, ls, &l23);} l11;
} l5 l280:
            { lb l4; ld l7*ls; le((l40 != 4) && (l40 != 2))lh lr; l4 = l13[1]; le(l4 >= la->l44)lh
              lr; ls = la->l3 + l4; ls->lm.l18.l161 = lr; le(l40 == 4) {
                ls->lm.l18.l51 = l13[2];
                ls->l141.lm.lp = l13[3]; ls->lm.l18.l100 = lz;
              } l2 ls->lm.l18.l100 = lr; l11;
            }
l5 l380: {
              le(l40 != 5)lh lr; lo l96 = l13[0]; * ((lb* )&l96 + 1) = l13[1]; * ((
                    lb* )&l96 + 2) = l13[2]; * ((lb* )&l96 + 3) = l13[3]; lb l269 = l13[4]; l33(l25 ln
                        = la->l132; ln < la->l44; ln++) {
                lo l306; le(l431(la, ln, &l306)) {
                  le(l306 == l96
                    ) {
                    ld l7*ls = la->l3 + ln; le((l269 == l289) && (ls->lm.l18.l100 == lr) && (ls->lm.
                                               l18.l161 == lr))l249(la, ln); l2 le((l269 != l289) || (l269 != l352))ls->lm.l18
                    .l100 = lr;
                  }
                }
              } l11;
            }
#endif
l222: lh lr;
          }
        }
      } le(l39) {
        l341(la->l26, la->l26 + l39, la->l65 - l39); la->l65 -=
          l39;
      }
    }
  } lh lz;
} l14 lq l205(ld l1*la) {
  l25 ln;
#ifdef ATTACHED_MODE
  l33(ln = 0; ln < la->l132; ln++) {
#else
  l33(ln = 0; ln < la->l44; ln++) {
#endif
    ld l7*ls = la->l3 + ln; le(ls->lm.l124.l128) {
      ls->lp.lv.l57->l283(ls->lp.lv
                          .l57->l123); ls->lm.l124.l128 = 0;
    } ls->lm.l18.l100 = 0;
  } la->l41.l296(); la
  ->l17 = l91; la->l164 = lr; la->l65 = 0; la->l142 = lz; la->l73 = 2; la->l170 = la->
      l170 - 0x10000L;
} l14 lq l382(ld l1*la, l20 l152) {
  lb*lk = l37(la, 4); lk[0] =
    0x82; lk[1] = l354; lk[2] = * ((lb* )&l152); lk[3] = * ((lb* )&l152 + 1); l46(
      la, 4, lr); l245(la, lz);
} l14 l31 l417 l411(ld l1*la) {
  l60 l150 = l69(); l60
  l313 = la->l58; l15 l395 = lr; lb l277; le(la->l17 == l91) {
    le(la->l58 > l150)lh
    l91;
  } la->l58 = 0; l277 = la->l17; le(!l391(la, &l395)) {
    la->l6.l36(F("\x44"
                 "\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n")); l205(la); le(!la->
                     l58)la->l58 = l150 + 2000; lh l185;
  } le(la->l17 == l53) {
    l15 l419 = lr; le(l277 !=
                      l53)lh l367; la->l58 = l313; le(lz) {
      l25 ln;
#ifdef ATTACHED_MODE
      l33(ln = 0; ln < la->l132; ln++) {
#else
      l33(ln = 0; ln < la->l44; ln++) {
#endif
        ld l7*ls = la->l3 + ln; le(ls->lm.l124.l128) {
          le(la->l41.l188())lh l242; le(
            l206(la, ls, l145))l419 = lz;
        }
      }
    } le(la->l225 && (l313 < l150))l245(la, lr); le(
      la->l41.l188())lh l242; lh l53;
  } lh l91;
} l15 l462(ld l85*ll, l203 l12,
           l158 l8) {
  lh l273((ld l7* )ll, l12, l8);
} l15 l445(ld l85*ll, l193 l12,
           l158 l8) {
  lh l412((ld l7* )ll, l12, l8);
} l15 l506(ld l85*ll, lq*l241, l158
           l8) {
  lh l358((ld l7* )ll, l241, l8);
} l15 l482(ld l85*ll, l158 l8) {
  lh l355
  ((ld l7* )ll, l8);
} l15 l536(ld l67*la, ld l470*l155, ld l494*l248) {
  ((ld
    l153* )l155)->l36(F("\x4d\x67\x74\x43\x6c\x69\x65\x6e\x74\x20\x76\x31"
                        "\x2e\x36\x2c\x20\x31\x35\x2f\x58\x49\x49\x2f\x32\x30\x31\x39\n")); le
  (offsetof(ld l67, l3) != offsetof(ld l1, l3)) {
    l25 l346 = offsetof(ld l1, l3);
    ((ld l153* )l155)->l36(F("\x49\x6e\x20\x74\x68\x65\x20\x66\x69\x6c"
                             "\x65\x20\"\x4d\x67\x74\x43\x6c\x69\x65\x6e\x74\x2e\x68\"\x20\x69\x6e"
                             "\x20\x6c\x69\x6e\x65\x20\"\x23\x64\x65\x66\x69\x6e\x65\x20\x4d\x47"
                             "\x54\x5f\x43\x4f\x4e\x53\x54\x41\x4e\x54\x20\x25\x69\"\n\x79\x6f\x75"
                             "\x20\x6e\x65\x65\x64\x20\x74\x6f\x20\x73\x65\x74\x20\x74\x68\x65\x20"
                             "\x6e\x75\x6d\x62\x65\x72\x20\x25\x69\x20\x21\n"), (l25)(l76(la->l492)),
                           (l25)l346); lh lr;
  }((ld l153* )l155)->l36(F("\x49\x6e\x69\x74\n"));
  l394((ld l1* )la, (ld l153* )l155, (ld l264* )l248); lh lz;
} lq l517(ld
          l67*la, lw l9*l220) {
  ld l1*lx = (ld l1* )la; lx->l265 = l220; le(lx->l17 == l87
                                             ) {
    le(lx->l164) {
      lw l9*l179; l9 l268[12 + 3 + 1]; lx->l6.l36(F("\x52\x65\x73"
          "\x74\x61\x72\x74\x20\x73\x65\x73\x73\x69\x6f\x6e\n")); l282(lx, l268, &
              l179); le(!lx->l41.l233(l179, lx->l154)) {
        lx->l6.l36(F("\x4e\x6f\x20\x63"
                     "\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x77\x69\x74\x68\x20\x74\x68"
                     "\x65\x20\x73\x65\x72\x76\x69\x63\x65\n")); lx->l17 = l91; lx->l164 = lr; lx
        ->l58 = l69() + 2000;
      } l291(lx); le(!lx->l41.l195(lx->l166, 8)) {
        lx->l6.l36(F
                   ("\x44\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n")); l205(lx); lx->
        l58 = l69() + 2000; lh;
      } l2{lx->l17 = l231; lx->l65 = 0;}
    } l2{lx->l17 = l91; lx->l6.
         l36(F("\x53\x74\x61\x72\x74\n"));}
  }
} lq l457(ld l67*la, l20 l152) {
  ld l1
  *lx = (ld l1* )la; le((lx->l17 != l87) && (lx->l17 != l185)) {
    le(lx->l17 != l91) {
      le((l152) && (lx->l17 == l53)) {
        l158 l257; l382(lx, l152); l257 = l69(); lx->l58
          = l257 + 1000; lx->l192 = l257 + (l152 * 1000); lx->l17 = l185;
      } l2{l205(lx); lx->
           l17 = l87;}
    } lx->l6.l36(F("\x53\x74\x6f\x70\n"));
  }
} l31 l113 l468(ld l67*
                la) {
  ld l1*lx = (ld l1* )la; le(lx->l17 == l185) {
    le(lx->l58 < l69()) {
      l205(lx);
      lx->l17 = l87; lx->l164 = lz;
    } l2 lh(l31 l113)l185;
  } le(lx->l17 == l87)lh(l31
                         l113)l87; lh(l31 l113)l411((ld l1* )la);
} l31 l113 l439(ld l67*la) {
  ld l1
  *lx = (ld l1* )la; le(lx->l17 == l53) {
    le(lx->l41.l188())lh(l31 l113)l242;
    l2 lh(l31 l113)l53;
  } le(lx->l17 == l87)lh(l31 l113)l87; lh(l31 l113)l91;
}
lq l480(ld l67*la, ld l85*ll) {
  ld l1*lx = (ld l1* )la; le(lx->l17 != l53)lh;
  l272(lx, (ld l7* )ll);
} lq l464(ld l67*la, ld l305*l83, lw l9*l136, l158 l8
          , ...) {
  l473 l226; ld l7*l187; ld l1*lx = (ld l1* )la; le(lx->l17 != l53)lh;
  l285(lx, (ld l7* )l83, l136, l8); l532(l226, l8); l187 = l381(l226, ld l7* );
  l82(l187) {
    l59 ln = (lb* )l187 - (lb* )la->l3; le(ln % l76(ld l7))l11; le((ln <
        0) || (ln >= (lx->l44 * l76(ld l7))))l11; l272(lx, l187); l187 = l381(l226, ld l7
            * );
  } l475(l226); l334(lx, (ld l7* )l83);
} lq l458(ld l67*la, ld l305*l83
          , lw l9*l136, l158 l8) {
  ld l1*lx = (ld l1* )la; le(lx->l17 != l53)lh; l285(lx,
      (ld l7* )l83, l136, l8);
} lq l534(ld l67*la, ld l305*l83) {
  ld l1*lx = (ld l1
              * )la; le(lx->l17 != l53)lh; l334(lx, (ld l7* )l83);
} lq l448(ld l67*la, ld
          l85*ll, l31 l418 l63) {
  ld l1*lx = (ld l1* )la; le(lx->l17 != l53)lh; l416(lx,
      (ld l7* )ll, (l31 l178)l63);
} lq l512(ld l67*la, ld l85*ll, l31 l418 l63) {
  ld l1*lx = (ld l1* )la; le(lx->l17 != l53)lh; l342(lx, (ld l7* )ll, (l31 l178
                                                                      )l63);
} ld l85*l495(ld l67*la, lw l9*l126, l31 l509 l172, lb l267, l20 l247
              , ld l522*l198) {
  lh(ld l85* )l351((ld l1* )la, l126, (l31 l300)l172, l267,
                   l247, (ld l255* )l198);
}
#ifdef ATTACHED_MODE
ld l85*l529(ld l67*la, lw l9*l126) {
  lh(ld l85* )l379((ld l1* )la, l126);
} lq l485(ld l67*la) {
  l353((ld l1* )la);
}
#endif
