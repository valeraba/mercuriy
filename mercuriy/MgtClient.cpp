/*
Copyright © 2015, BVAgile. All rights reserved.
Contacts: <bvagile@gmail.com>
*/

#include"MgtClient.h"
#define lc struct
#define lo __uint32
#define lb __uint8
#define lq void
#define lw const
#define l14 static
#define le if
#define lh return
#define l34 memcpy
#define l80 while
#define l9 char
#define l255 unsigned
#define l25 int
#define l216 strlen
#define l517 strncmp
#define l33 for
#define l496 continue
#define l393 memset
#define l75 sizeof
#define l2 else
#define l174 crc32
#define l67 __uint64
#define l111 union
#define l31 enum
#define l20 __uint16
#define l17 bool
#define l323 rand
#define ls false
#define l529 memcmp
#define lz true
#define l515 strchr
#define l11 break
#define l248 typedef
#define l196 __int64
#define l119 __int16
#define l231 read
#define l281 abort
#define l409 __int8
#define l144 __int32
#define l307 float
#define l194 double
#define l117 switch
#define l3 case
#define l203 default
#define l70 getUTCTime
#define l356 updateTime
#define l234 open
#define l290 close
#define l5 m_signals
#define l135 rem
#define lr signal
#define l362 strrchr
#define l379 atoi
#define l341 memmove
#define l149 time
#define l390 shiftTime
#define l461 signal_update_int
#define l85 Signal
#define l168 TimeStamp
#define l444 signal_update_double
#define l505 signal_update_ptr
#define l481 signal_updateTime
#define l535 mgt_init
#define l60 MgtClient
#define l469 DeviceConfig
#define l493 PortableSocket
#define l491 m_reserv
#define l516 mgt_start
#define l456 mgt_stop
#define l113 MgtState
#define l467 mgt_run
#define l438 mgt_getState
#define l479 mgt_send
#define l463 mgt_eventSend
#define l302 Event
#define l472 va_list
#define l531 va_start
#define l382 va_arg
#define l474 va_end
#define l457 mgt_eventBegin
#define l533 mgt_eventEnd
#define l447 mgt_readAns
#define l433 ErrorCode
#define l511 mgt_writeAns
#define l494 mgt_createSignal
#define l507 SignalType
#define l521 ChunkedTransfer
#define l528 mgt_attachSignal
#define l485 mgt_detachAll


lc l98{lo l78[2];lo l32[4];lb l263[64];};lq l121(lc l98*ly);lq l38(lc
l98*ly,lw lb*l10,lo l64);lq l139(lb l48[16],lc l98*ly);lq l121(lc l98
 *ly){ly->l78[0]=0;ly->l78[1]=0;ly->l32[0]=0x67452301;ly->l32[1]=
0xEFCDAB89;ly->l32[2]=0x98BADCFE;ly->l32[3]=0x10325476;}l14 lq l310(
lc l98*ly,lw lb lt[64]){lo ld[16],li,lg,lf,lj;{(ld[0])=((lo)(lt)[(0)]
)|((lo)(lt)[(0)+1]<<8)|((lo)(lt)[(0)+2]<<16)|((lo)(lt)[(0)+3]<<24);};
{(ld[1])=((lo)(lt)[(4)])|((lo)(lt)[(4)+1]<<8)|((lo)(lt)[(4)+2]<<16)|(
(lo)(lt)[(4)+3]<<24);};{(ld[2])=((lo)(lt)[(8)])|((lo)(lt)[(8)+1]<<8)|
((lo)(lt)[(8)+2]<<16)|((lo)(lt)[(8)+3]<<24);};{(ld[3])=((lo)(lt)[(12)]
)|((lo)(lt)[(12)+1]<<8)|((lo)(lt)[(12)+2]<<16)|((lo)(lt)[(12)+3]<<24);
};{(ld[4])=((lo)(lt)[(16)])|((lo)(lt)[(16)+1]<<8)|((lo)(lt)[(16)+2]<<
16)|((lo)(lt)[(16)+3]<<24);};{(ld[5])=((lo)(lt)[(20)])|((lo)(lt)[(20)+
1]<<8)|((lo)(lt)[(20)+2]<<16)|((lo)(lt)[(20)+3]<<24);};{(ld[6])=((lo)(
lt)[(24)])|((lo)(lt)[(24)+1]<<8)|((lo)(lt)[(24)+2]<<16)|((lo)(lt)[(24
)+3]<<24);};{(ld[7])=((lo)(lt)[(28)])|((lo)(lt)[(28)+1]<<8)|((lo)(lt)[
(28)+2]<<16)|((lo)(lt)[(28)+3]<<24);};{(ld[8])=((lo)(lt)[(32)])|((lo)(
lt)[(32)+1]<<8)|((lo)(lt)[(32)+2]<<16)|((lo)(lt)[(32)+3]<<24);};{(ld[
9])=((lo)(lt)[(36)])|((lo)(lt)[(36)+1]<<8)|((lo)(lt)[(36)+2]<<16)|((
lo)(lt)[(36)+3]<<24);};{(ld[10])=((lo)(lt)[(40)])|((lo)(lt)[(40)+1]<<
8)|((lo)(lt)[(40)+2]<<16)|((lo)(lt)[(40)+3]<<24);};{(ld[11])=((lo)(lt
)[(44)])|((lo)(lt)[(44)+1]<<8)|((lo)(lt)[(44)+2]<<16)|((lo)(lt)[(44)+
3]<<24);};{(ld[12])=((lo)(lt)[(48)])|((lo)(lt)[(48)+1]<<8)|((lo)(lt)[
(48)+2]<<16)|((lo)(lt)[(48)+3]<<24);};{(ld[13])=((lo)(lt)[(52)])|((lo
)(lt)[(52)+1]<<8)|((lo)(lt)[(52)+2]<<16)|((lo)(lt)[(52)+3]<<24);};{(
ld[14])=((lo)(lt)[(56)])|((lo)(lt)[(56)+1]<<8)|((lo)(lt)[(56)+2]<<16)|
((lo)(lt)[(56)+3]<<24);};{(ld[15])=((lo)(lt)[(60)])|((lo)(lt)[(60)+1]
<<8)|((lo)(lt)[(60)+2]<<16)|((lo)(lt)[(60)+3]<<24);};li=ly->l32[0];lg
=ly->l32[1];lf=ly->l32[2];lj=ly->l32[3];{li+=(lj^(lg&(lf^lj)))+ld[0]+
0xD76AA478;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lj+=(lf^(li&(
lg^lf)))+ld[1]+0xE8C7B756;lj=((lj<<12)|((lj&0xFFFFFFFF)>>(32-12)))+li
;};{lf+=(lg^(lj&(li^lg)))+ld[2]+0x242070DB;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+lj;};{lg+=(li^(lf&(lj^li)))+ld[3]+0xC1BDCEEE;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lj^(lg&(lf^lj)))+
ld[4]+0xF57C0FAF;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lj+=(lf
^(li&(lg^lf)))+ld[5]+0x4787C62A;lj=((lj<<12)|((lj&0xFFFFFFFF)>>(32-12
)))+li;};{lf+=(lg^(lj&(li^lg)))+ld[6]+0xA8304613;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+lj;};{lg+=(li^(lf&(lj^li)))+ld[7]+0xFD469501;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lj^(lg&(lf^lj)))+
ld[8]+0x698098D8;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lj+=(lf
^(li&(lg^lf)))+ld[9]+0x8B44F7AF;lj=((lj<<12)|((lj&0xFFFFFFFF)>>(32-12
)))+li;};{lf+=(lg^(lj&(li^lg)))+ld[10]+0xFFFF5BB1;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+lj;};{lg+=(li^(lf&(lj^li)))+ld[11]+0x895CD7BE;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lj^(lg&(lf^lj)))+
ld[12]+0x6B901122;li=((li<<7)|((li&0xFFFFFFFF)>>(32-7)))+lg;};{lj+=(
lf^(li&(lg^lf)))+ld[13]+0xFD987193;lj=((lj<<12)|((lj&0xFFFFFFFF)>>(32
-12)))+li;};{lf+=(lg^(lj&(li^lg)))+ld[14]+0xA679438E;lf=((lf<<17)|((
lf&0xFFFFFFFF)>>(32-17)))+lj;};{lg+=(li^(lf&(lj^li)))+ld[15]+
0x49B40821;lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{li+=(lf^(lj
&(lg^lf)))+ld[1]+0xF61E2562;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5)))+lg
;};{lj+=(lg^(lf&(li^lg)))+ld[6]+0xC040B340;lj=((lj<<9)|((lj&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lj^li)))+ld[11]+0x265E5A51;
lf=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lj;};{lg+=(lj^(li&(lf^lj)))+
ld[0]+0xE9B6C7AA;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(
lf^(lj&(lg^lf)))+ld[5]+0xD62F105D;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5
)))+lg;};{lj+=(lg^(lf&(li^lg)))+ld[10]+0x02441453;lj=((lj<<9)|((lj&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lj^li)))+ld[15]+0xD8A1E681;
lf=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lj;};{lg+=(lj^(li&(lf^lj)))+
ld[4]+0xE7D3FBC8;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(
lf^(lj&(lg^lf)))+ld[9]+0x21E1CDE6;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5
)))+lg;};{lj+=(lg^(lf&(li^lg)))+ld[14]+0xC33707D6;lj=((lj<<9)|((lj&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lj^li)))+ld[3]+0xF4D50D87;lf
=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lj;};{lg+=(lj^(li&(lf^lj)))+ld
[8]+0x455A14ED;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(lf
^(lj&(lg^lf)))+ld[13]+0xA9E3E905;li=((li<<5)|((li&0xFFFFFFFF)>>(32-5)))+
lg;};{lj+=(lg^(lf&(li^lg)))+ld[2]+0xFCEFA3F8;lj=((lj<<9)|((lj&
0xFFFFFFFF)>>(32-9)))+li;};{lf+=(li^(lg&(lj^li)))+ld[7]+0x676F02D9;lf
=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+lj;};{lg+=(lj^(li&(lf^lj)))+ld
[12]+0x8D2A4C8A;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{li+=(
lg^lf^lj)+ld[5]+0xFFFA3942;li=((li<<4)|((li&0xFFFFFFFF)>>(32-4)))+lg;
};{lj+=(li^lg^lf)+ld[8]+0x8771F681;lj=((lj<<11)|((lj&0xFFFFFFFF)>>(32
-11)))+li;};{lf+=(lj^li^lg)+ld[11]+0x6D9D6122;lf=((lf<<16)|((lf&
0xFFFFFFFF)>>(32-16)))+lj;};{lg+=(lf^lj^li)+ld[14]+0xFDE5380C;lg=((lg
<<23)|((lg&0xFFFFFFFF)>>(32-23)))+lf;};{li+=(lg^lf^lj)+ld[1]+
0xA4BEEA44;li=((li<<4)|((li&0xFFFFFFFF)>>(32-4)))+lg;};{lj+=(li^lg^lf
)+ld[4]+0x4BDECFA9;lj=((lj<<11)|((lj&0xFFFFFFFF)>>(32-11)))+li;};{lf
+=(lj^li^lg)+ld[7]+0xF6BB4B60;lf=((lf<<16)|((lf&0xFFFFFFFF)>>(32-16)))+
lj;};{lg+=(lf^lj^li)+ld[10]+0xBEBFBC70;lg=((lg<<23)|((lg&0xFFFFFFFF)>>
(32-23)))+lf;};{li+=(lg^lf^lj)+ld[13]+0x289B7EC6;li=((li<<4)|((li&
0xFFFFFFFF)>>(32-4)))+lg;};{lj+=(li^lg^lf)+ld[0]+0xEAA127FA;lj=((lj<<
11)|((lj&0xFFFFFFFF)>>(32-11)))+li;};{lf+=(lj^li^lg)+ld[3]+0xD4EF3085
;lf=((lf<<16)|((lf&0xFFFFFFFF)>>(32-16)))+lj;};{lg+=(lf^lj^li)+ld[6]+
0x04881D05;lg=((lg<<23)|((lg&0xFFFFFFFF)>>(32-23)))+lf;};{li+=(lg^lf^
lj)+ld[9]+0xD9D4D039;li=((li<<4)|((li&0xFFFFFFFF)>>(32-4)))+lg;};{lj
+=(li^lg^lf)+ld[12]+0xE6DB99E5;lj=((lj<<11)|((lj&0xFFFFFFFF)>>(32-11)))+
li;};{lf+=(lj^li^lg)+ld[15]+0x1FA27CF8;lf=((lf<<16)|((lf&0xFFFFFFFF)>>
(32-16)))+lj;};{lg+=(lf^lj^li)+ld[2]+0xC4AC5665;lg=((lg<<23)|((lg&
0xFFFFFFFF)>>(32-23)))+lf;};{li+=(lf^(lg|~lj))+ld[0]+0xF4292244;li=((
li<<6)|((li&0xFFFFFFFF)>>(32-6)))+lg;};{lj+=(lg^(li|~lf))+ld[7]+
0x432AFF97;lj=((lj<<10)|((lj&0xFFFFFFFF)>>(32-10)))+li;};{lf+=(li^(lj
|~lg))+ld[14]+0xAB9423A7;lf=((lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+lj;
};{lg+=(lj^(lf|~li))+ld[5]+0xFC93A039;lg=((lg<<21)|((lg&0xFFFFFFFF)>>
(32-21)))+lf;};{li+=(lf^(lg|~lj))+ld[12]+0x655B59C3;li=((li<<6)|((li&
0xFFFFFFFF)>>(32-6)))+lg;};{lj+=(lg^(li|~lf))+ld[3]+0x8F0CCC92;lj=((
lj<<10)|((lj&0xFFFFFFFF)>>(32-10)))+li;};{lf+=(li^(lj|~lg))+ld[10]+
0xFFEFF47D;lf=((lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+lj;};{lg+=(lj^(lf
|~li))+ld[1]+0x85845DD1;lg=((lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;}
;{li+=(lf^(lg|~lj))+ld[8]+0x6FA87E4F;li=((li<<6)|((li&0xFFFFFFFF)>>(
32-6)))+lg;};{lj+=(lg^(li|~lf))+ld[15]+0xFE2CE6E0;lj=((lj<<10)|((lj&
0xFFFFFFFF)>>(32-10)))+li;};{lf+=(li^(lj|~lg))+ld[6]+0xA3014314;lf=((
lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+lj;};{lg+=(lj^(lf|~li))+ld[13]+
0x4E0811A1;lg=((lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;};{li+=(lf^(lg
|~lj))+ld[4]+0xF7537E82;li=((li<<6)|((li&0xFFFFFFFF)>>(32-6)))+lg;};{
lj+=(lg^(li|~lf))+ld[11]+0xBD3AF235;lj=((lj<<10)|((lj&0xFFFFFFFF)>>(
32-10)))+li;};{lf+=(li^(lj|~lg))+ld[2]+0x2AD7D2BB;lf=((lf<<15)|((lf&
0xFFFFFFFF)>>(32-15)))+lj;};{lg+=(lj^(lf|~li))+ld[9]+0xEB86D391;lg=((
lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;};ly->l32[0]+=li;ly->l32[1]+=
lg;ly->l32[2]+=lf;ly->l32[3]+=lj;}lq l38(lc l98*ly,lw lb*l10,lo l64){
lo l151,l170;le(!l64)lh;l151=ly->l78[0]&0x3F;l170=64-l151;ly->l78[0]
+=l64;ly->l78[0]&=0xFFFFFFFF;le(ly->l78[0]<l64)ly->l78[1]++;le(l151&&
l64>=l170){l34((lq* )(ly->l263+l151),(lq* )l10,l170);l310(ly,ly->l263
);l64-=l170;l10+=l170;l151=0;}l80(l64>=64){l310(ly,l10);l64-=64;l10+=
64;}le(l64)l34((lq* )(ly->l263+l151),(lq* )l10,l64);}l14 lb l398[64]=
{0x80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};lq
l139(lb l48[16],lc l98*ly){lo l209,l315;lo l183,l173;lb l110[8];l183=
(ly->l78[0]>>29)|(ly->l78[1]<<3);l173=(ly->l78[0]<<3);{(l110)[(0)]=(
lb)((l173));(l110)[(0)+1]=(lb)((l173)>>8);(l110)[(0)+2]=(lb)((l173)>>
16);(l110)[(0)+3]=(lb)((l173)>>24);};{(l110)[(4)]=(lb)((l183));(l110)[
(4)+1]=(lb)((l183)>>8);(l110)[(4)+2]=(lb)((l183)>>16);(l110)[(4)+3]=(
lb)((l183)>>24);};l209=ly->l78[0]&0x3F;l315=(l209<56)?(56-l209):(120-
l209);l38(ly,l398,l315);l38(ly,l110,8);{(l48)[(0)]=(lb)((ly->l32[0]));
(l48)[(0)+1]=(lb)((ly->l32[0])>>8);(l48)[(0)+2]=(lb)((ly->l32[0])>>16
);(l48)[(0)+3]=(lb)((ly->l32[0])>>24);};{(l48)[(4)]=(lb)((ly->l32[1]));
(l48)[(4)+1]=(lb)((ly->l32[1])>>8);(l48)[(4)+2]=(lb)((ly->l32[1])>>16
);(l48)[(4)+3]=(lb)((ly->l32[1])>>24);};{(l48)[(8)]=(lb)((ly->l32[2]));
(l48)[(8)+1]=(lb)((ly->l32[2])>>8);(l48)[(8)+2]=(lb)((ly->l32[2])>>16
);(l48)[(8)+3]=(lb)((ly->l32[2])>>24);};{(l48)[(12)]=(lb)((ly->l32[3]
));(l48)[(12)+1]=(lb)((ly->l32[3])>>8);(l48)[(12)+2]=(lb)((ly->l32[3]
)>>16);(l48)[(12)+3]=(lb)((ly->l32[3])>>24);};}lb*l330(lw l9*l94,lw l9
 *l295){lw l9*l106, *l158;l14 lb l91[16];l255 l25 ln,l200,l92;lc l98
ly,l69;l25 l181;l92=l216(l94);l106=l295;le(l517(l106,"\x24\x31\x24",3
)==0)l106+=3;l33(l158=l106; *l158!='\0'&& *l158!='$'&&l158<(l106+8);
l158++)l496;l200=l158-l106;l121(&ly);l38(&ly,(lw lb* )l94,l92);l38(&
ly,(lw lb* )"\x24\x31\x24",3);l38(&ly,(lw lb* )l106,l200);l121(&l69);
l38(&l69,(lw lb* )l94,l92);l38(&l69,(lw lb* )l106,l200);l38(&l69,(lw
lb* )l94,l92);l139(l91,&l69);l33(l181=l92;l181>0;l181-=16)l38(&ly,l91
,(l255 l25)(l181>16?16:l181));l393(l91,0,l75(l91));l33(ln=l92;ln!=0;
ln>>=1)le((ln&1)!=0)l38(&ly,l91,1);l2 l38(&ly,(lw lb* )l94,1);l139(
l91,&ly);l33(ln=0;ln<1000;ln++){l121(&l69);le((ln&1)!=0)l38(&l69,(lw
lb* )l94,l92);l2 l38(&l69,l91,16);le((ln%3)!=0)l38(&l69,(lw lb* )l106
,l200);le((ln%7)!=0)l38(&l69,(lw lb* )l94,l92);le((ln&1)!=0)l38(&l69,
l91,16);l2 l38(&l69,(lw lb* )l94,l92);l139(l91,&l69);}lh l91;}



#ifdef CRYPTO_ON
#define l22( l102, l253) (( lo)(( l102) + ( l253)))
#define l225( l102) ( l22(( l102),1))
lc l103{lo l10[16];};lq l214(lb l159[64],lw lo l10[16]);lq l401(lc
l103*ld,lw lb*l221,lb*lf,lo l82);lq l334(lc l103*ld,lw lb*l65);lq l338
(lc l103*ld,lw lb*l251);
#endif
#ifdef CRYPTO_ON
#define l28( l102, lf) ( ROTL32( l102, lf))
#define l27( l102, l253) (( l102) ^ ( l253))
#define l435( l129, l102) ((( lo  *  )( l129))[0] = l102)
#define l63( l129) ((( lo  *  )( l129))[0])
lq l214(lb l159[64],lw lo l10[16]){lo ld[16];l25 ln;l33(ln=0;ln<16;++
ln)ld[ln]=l10[ln];l33(ln=20;ln>0;ln-=2){ld[4]=l27(ld[4],l28(l22(ld[0]
,ld[12]),7));ld[8]=l27(ld[8],l28(l22(ld[4],ld[0]),9));ld[12]=l27(ld[
12],l28(l22(ld[8],ld[4]),13));ld[0]=l27(ld[0],l28(l22(ld[12],ld[8]),
18));ld[9]=l27(ld[9],l28(l22(ld[5],ld[1]),7));ld[13]=l27(ld[13],l28(
l22(ld[9],ld[5]),9));ld[1]=l27(ld[1],l28(l22(ld[13],ld[9]),13));ld[5]
=l27(ld[5],l28(l22(ld[1],ld[13]),18));ld[14]=l27(ld[14],l28(l22(ld[10
],ld[6]),7));ld[2]=l27(ld[2],l28(l22(ld[14],ld[10]),9));ld[6]=l27(ld[
6],l28(l22(ld[2],ld[14]),13));ld[10]=l27(ld[10],l28(l22(ld[6],ld[2]),
18));ld[3]=l27(ld[3],l28(l22(ld[15],ld[11]),7));ld[7]=l27(ld[7],l28(
l22(ld[3],ld[15]),9));ld[11]=l27(ld[11],l28(l22(ld[7],ld[3]),13));ld[
15]=l27(ld[15],l28(l22(ld[11],ld[7]),18));ld[1]=l27(ld[1],l28(l22(ld[
0],ld[3]),7));ld[2]=l27(ld[2],l28(l22(ld[1],ld[0]),9));ld[3]=l27(ld[3
],l28(l22(ld[2],ld[1]),13));ld[0]=l27(ld[0],l28(l22(ld[3],ld[2]),18));
ld[6]=l27(ld[6],l28(l22(ld[5],ld[4]),7));ld[7]=l27(ld[7],l28(l22(ld[6
],ld[5]),9));ld[4]=l27(ld[4],l28(l22(ld[7],ld[6]),13));ld[5]=l27(ld[5
],l28(l22(ld[4],ld[7]),18));ld[11]=l27(ld[11],l28(l22(ld[10],ld[9]),7
));ld[8]=l27(ld[8],l28(l22(ld[11],ld[10]),9));ld[9]=l27(ld[9],l28(l22
(ld[8],ld[11]),13));ld[10]=l27(ld[10],l28(l22(ld[9],ld[8]),18));ld[12
]=l27(ld[12],l28(l22(ld[15],ld[14]),7));ld[13]=l27(ld[13],l28(l22(ld[
12],ld[15]),9));ld[14]=l27(ld[14],l28(l22(ld[13],ld[12]),13));ld[15]=
l27(ld[15],l28(l22(ld[14],ld[13]),18));}l33(ln=0;ln<16;++ln)ld[ln]=
l22(ld[ln],l10[ln]);l33(ln=0;ln<16;++ln)l435(l159+4*ln,ld[ln]);}l14 lw
l9*l219="\x65\x78\x70\x61\x6e\x64\x20\x33\x32\x2d\x62\x79\x74\x65\x20"
"\x6b";lq l334(lc l103*ld,lw lb*l65){ld->l10[1]=l63(l65+0);ld->l10[2]
=l63(l65+4);ld->l10[3]=l63(l65+8);ld->l10[4]=l63(l65+12);ld->l10[11]=
l63(l65+16);ld->l10[12]=l63(l65+20);ld->l10[13]=l63(l65+24);ld->l10[
14]=l63(l65+28);ld->l10[0]=l63(l219+0);ld->l10[5]=l63(l219+4);ld->l10
[10]=l63(l219+8);ld->l10[15]=l63(l219+12);}lq l338(lc l103*ld,lw lb*
l251){ld->l10[6]=l63(l251+0);ld->l10[7]=l63(l251+4);ld->l10[8]=0;ld->
l10[9]=0;}lq l401(lc l103*ld,lw lb*l221,lb*lf,lo l82){lb l159[64];
l255 l25 ln;le(!l82)lh;l33(;;){l214(l159,ld->l10);ld->l10[8]=l225(ld
->l10[8]);le(!ld->l10[8]){ld->l10[9]=l225(ld->l10[9]);}le(l82<=64){
l33(ln=0;ln<l82;++ln)lf[ln]=l221[ln]^l159[ln];lh;}l33(ln=0;ln<64;++ln
)lf[ln]=l221[ln]^l159[ln];l82-=64;lf+=64;l221+=64;}}
#endif
#ifdef CRYPTO_ON
lc l66{lb l45[64];lo l49;lb l72;lc l103 l77;};lq l378(lc l66*l23,lc
l103*l322);lq l208(lc l66*l23,lw lb*l114);lq l227(lc l66*l23,lw lb*
l300);lq l163(lc l66*l23,lw lb*l126,lb*l76,lo l21);
#else
lc l66{lo l49;};
#endif
lo l174(lb*l120,lo l324,lo l79);
#ifdef CRYPTO_ON
lq l378(lc l66*l23,lc l103*l322){l23->l77= *l322;l23->l72=0;l23->l49=
0;}lq l208(lc l66*l23,lw lb*l114){l334(&l23->l77,l114);}lq l227(lc l66
 *l23,lw lb*l300){l338(&l23->l77,l300);l23->l72=0;l23->l49=0;}lq l163
(lc l66*l23,lw lb*l126,lb*l76,lo l21){l255 l25 ln;le(l23->l72){lb*lt=
l23->l45+64-l23->l72;le(l21>=l23->l72){l21-=l23->l72;l33(ln=0;ln<l23
->l72;++ln)l76[ln]=l126[ln]^lt[ln];l126+=l23->l72;l76+=l23->l72;l23->
l72=0;}l2{l23->l72-=l21;l33(ln=0;ln<l21;++ln)l76[ln]=l126[ln]^lt[ln];
l21=0;}}le(!l21)lh;l33(;;){l214((lb* )l23->l45,l23->l77.l10);l23->l77
.l10[8]=l225(l23->l77.l10[8]);le(!l23->l77.l10[8])l23->l77.l10[9]=
l225(l23->l77.l10[9]);le(l21<=64){l33(ln=0;ln<l21;++ln)l76[ln]=l126[
ln]^l23->l45[ln];l23->l72=64-l21;lh;}l33(ln=0;ln<64;++ln)l76[ln]=l126
[ln]^l23->l45[ln];l21-=64;l126+=64;l76+=64;}}
#endif
l14
#ifdef ARDUINO
__flash
#endif
lw lo l268[256]={0x00000000,0x77073096,0xee0e612c,0x990951ba,
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
0x5d681b02,0x2a6f2b94,0xb40bbe37,0xc30c8ea1,0x5a05df1b,0x2d02ef8d};lo
l174(lb*l120,lo l324,lo l79){l80(l324--)
#ifdef ARDUINO
#ifdef pgm_read_dword_far
l79=pgm_read_dword_far(l268+((l79^ *l120++)&0xff))^(l79>>8);
#else
l79=pgm_read_dword(l268+((l79^ *l120++)&0xff))^(l79>>8);
#endif
#else
l79=l268[(l79^ *l120++)&0xff]^(l79>>8);
#endif
lh l79^0xffffffff;}
lb*l330(lw l9*l94,lw l9*l295);l67 l314(lq);lo l261(lq);
#pragma pack(push, 1)
lc l243{l111{lc{lb l161;lb l45[15];}l0;l67 lp[2];}lm;};lc l326{lb l45
[16];};lc l377{l111{lc{lc l243 l53;lc l326 l198;lb l269[8];lb l351[16
];lb l349[8];lb l371[4];}l0;l67 l316[8];lo l427[17];}lm;};l31 l522{
l477=0,l466=1,l458=2,l487};lc l489{l20 l450:3;l20 l476:1;l20 l525:1;
l20 l465:10;l20 l501:1;};lc l140{l20 l389;lo l376;lo l348;lo l49;};lc
l222{lb l534;lb l160[32];lo l122[4];lb l49;};
#pragma pack(pop)
lc l107{lc l66 l95;lc l377 l35;};lq l305(lc l107*l19,lw l9*l115,lw l9
 *l279);l17 l332(lc l107*l19,lo l199,lw lb*l114);l17 l317(lc l107*l19
,lw lb*l215,lb*l76);lq l298(lc l107*l19,lc l140*l256);l67 l314(lq){
l67 l24;l24=l323(); * ((lo* )(&l24)+1)=l323();lh l24;}lo l261(lq){lo
l24;l24=l323();lh l24;}l17 l530(lw lb*l115,lb l386,lc l326*l114){le(
l386!=6)lh ls;le(l529(l115,"\x76\x61\x6c\x65\x72\x61",6))lh ls;l34(
l114->l45,"\x50\x61\x73\x73\x77\x6f\x72\x64\x46\x6f\x72\x56\x61\x6c"
"\x65\x72",16);lh lz;}lq l357(lc l243*l259,lw l9*l115){lb l147[15]={0
,0,0,0,0,0,0,0,0,0,0,0,0,0,0};l25 l58=l216(l115);le(l58>15)l58=15;
l259->lm.l0.l161=l58;l34(l259->lm.l0.l45,l115,l58);l34(l259->lm.l0.
l45+l58,l147,15-l58);}lq l305(lc l107*l19,lw l9*l115,lw l9*l279){l357
(&l19->l35.lm.l0.l53,l115);l34(l19->l35.lm.l0.l198.l45,l330(l279,l115
),16);
#ifndef CRYPTO_ON
l19->l35.lm.l0.l53.lm.l0.l161|=0x80;
#endif
}l17 l332(lc l107*l19,lo l199,lw lb*l114){lw l9*l313="\x79\x62\x6e"
"\x64\x72\x66\x67\x38\x65\x6a\x6b\x6d\x63\x70\x71\x78\x6f\x74\x31\x75"
"\x77\x69\x73\x7a\x61\x33\x34\x35\x68\x37\x36\x39";lb*l82=l19->l35.lm
.l0.l198.l45;l25 l30=0;l25 l187=3;l25 ln;l393(l82,0,16);l33(ln=0;ln<
26;ln++){l9*l129;lb lg;le(!l114[ln])lh ls;l129=l515((l9* )l313,l114[
ln]);le(!l129)lh ls;lg=l129-l313;le(l187<0){l82[l30++]|=(lb)(lg>>(-
l187));le(l30==16)l11;l187+=8;}l82[l30]|=(lb)((lg<<l187)&0xff);l187-=
5;}l19->l35.lm.l0.l53.lm.l0.l161=15;l19->l35.lm.l0.l53.lm.l0.l45[0]=0
;l19->l35.lm.l0.l53.lm.l0.l45[1]=l82[0];l19->l35.lm.l0.l53.lm.l0.l45[
2]=l82[1];l34(l19->l35.lm.l0.l53.lm.l0.l45+3,&l199,4);l19->l35.lm.l0.
l53.lm.lp[1]=0;
#ifndef CRYPTO_ON
l19->l35.lm.l0.l53.lm.l0.l161|=0x80;
#endif
lh lz;}lb l363(lo l13){lb l96= * ((lb* )&l13+0)%8;lb l55= * ((lb* )&
l13+1)%7;lb l51= * ((lb* )&l13+2)%6;lb l42= * ((lb* )&l13+3)%5;le(l55
==l96)l55++;le(l55>=8)l55-=8;l80(1){le(l51==l96)l51++;l2{le(l51==l55)l51
++;l2 l11;}le(l51>=8)l51-=8;}l80(1){le(l42==l96)l42++;l2{le(l42==l55)l42
++;l2{le(l42==l51)l42++;l2 l11;}}le(l42>=8)l42-=8;}lh(1<<l96)+(1<<l55
)+(1<<l51)+(1<<l42);}l20 l397(lo l13){lb l96= * ((lb* )&l13+0)%16;lb
l55= * ((lb* )&l13+1)%15;lb l51= * ((lb* )&l13+2)%14;lb l42= * ((lb* )&
l13+3)%13;le(l55==l96)l55++;le(l55>=16)l55-=16;l80(1){le(l51==l96)l51
++;l2{le(l51==l55)l51++;l2 l11;}le(l51>=16)l51-=16;}l80(1){le(l42==
l96)l42++;l2{le(l42==l55)l42++;l2{le(l42==l51)l42++;l2 l11;}}le(l42>=
16)l42-=16;}lh(1<<l96)+(1<<l55)+(1<<l51)+(1<<l42);}l17 l317(lc l107*
l19,lw lb*l215,lb*l76){l67 l340;lc l98 l84;l67 l247[2];l111{l67 l312[
2];lo l402[17];}lm;l17 l292=ls;l25 ln;l20 l250;lb*l213;l25 l65;
#ifndef CRYPTO_ON
l19->l35.lm.l0.l53.lm.l0.l161&=0x7f;
#endif
l34(&l340,l215,8);l34(l19->l35.lm.l0.l269,l215+16,8);l33(ln=0;ln<256;
ln++){l17 l133;lb l257;lb*l211;lb*l204;lb*l202;lw lb*l212;l25 l264; *
((lb* )&l19->l35.lm.l0.l269)=ln;l121(&l84);l38(&l84,l19->l35.lm.l0.
l53.lm.l0.l45,l19->l35.lm.l0.l53.lm.l0.l161);l38(&l84,l19->l35.lm.l0.
l198.l45,16+8);l139((lb* )l247,&l84);l19->l35.lm.l316[5]=l340^l247[0]
;l121(&l84);l38(&l84,l19->l35.lm.l0.l269,8+8);l139((lb* )lm.l312,&l84
);l133=ls;l257=l363(lm.l402[0]);l211=(lb* )(l247+1);l204=l19->l35.lm.
l0.l351+8;l202=(lb* )(lm.l312+1);l212=l215+8;l33(l264=0;l264<8;l264++
){le(l257&0x01) *l204= *l211^ *l212;l2{le(( *l202^ *l211)== *l212) *
l204= *l202;l2{l133=lz;l11;}}l211++;l204++;l202++;l212++;l257>>=1;}le
(!l133){l292=lz;l11;}}le(!l292)lh ls;l19->l35.lm.l316[7]=l314();l34(
l76+16,l19->l35.lm.l0.l349,8);l121(&l84);l38(&l84,l19->l35.lm.l0.l198
.l45,16+8+16+8);l139(l76,&l84);l250=l397(l261());l19->l35.lm.l427[16]
=l261();l213=l19->l35.lm.l0.l371;l33(l65=0;l65<16;l65++){le(l250&0x01
){le( *l213==0) *l213=0xff;l76[l65]^= *l213++;}l250>>=1;}lh lz;}
#ifdef CRYPTO_ON
lq l298(lc l107*l19,lc l140*l256){l214((lb* )l19->l95.l77.l10,(lo* )&
l19->l35);l19->l95.l77.l10[8]=0;l19->l95.l77.l10[9]=0;l19->l95.l72=0;
l163(&l19->l95,(lb* )l256,(lb* )l256,l75(lc l140));}
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
#define l217 TX_BUF_SIZE - 22
l31 l492{l484=0,l455=1,l509=2,l536=3,l464=4,l500=5,l519=6,l448=7,l453
=100};l31 l176{l104=0,l503=1,l420=2,l480=3,l359=4,l482=5,l483=6,l460=
11,l488=12,l512=13,l439=21,l532=22,l403=23,l498=24,l470=25,l449=31,
l473=41,l437=42,l524=43,l445=44,l502=51,l446=52,l440=61,l523=71,l459=
100,l514=101,l520=102,l442=111,l422=112};l31 l526{l495=0,l527=1,l287=
2,l352=3,l454=4,l506=5,l486=6};l31 l451{l410=0,l418=1,l327=2,l373=3,
l361=4,l233=5,l286=6,l277=7,l499=8,l319=9,l434=10,l375=11,l471=12,
l343=13,l366=14,l497=15,l325=20,l414=21,l291=100,l424=101,l381=103,
l428=104,l399=105,l360=106,l350=200,l355=250};l31 l297{l275=0,l306=1,
l285=2,l336=3,l328=4,l320=5,l318=6,l226=7,l201=8,l166=9,l148=10,l510=
11,l426=12};lc l406{l111{lc{lb l468:2;lb l462:1;lb l478:1;lb l490:1;
lb l432:1;lb l301:1;lb l475:1;}l0;lb lp;}lm;};l248 l196 l56;l31 l425{
l508=0x00,l171=0x10,l146=0x20,l260=0x30,l329=0x40};lc l254{lq*l123;
l119( *l289)(lq*l308);l119( *l231)(lq*l308,lb*l120,l20 l21,l17*l452);
lq( *l281)(lq*l308);};lc l184{l111{l196 l29:56;lc{l67 l441:56;l67 l118
:8;}l0;}l15;l111{l17 l335;l409 l384;lb l155;l119 l413;l20 l344;l144
l408;lo l339;l307 l311;l194 l271;l9*l337;lb*l50;lc l254*l57;lc{lb l189
;lb l93;lb l210;}l46;}lv;};lc l238{l20 l190:10;l20 l372:3;l20 l367:3;
};lc l294{l56 l229;lo l224;lc l238 l299;};lc l7{lc l184 lp;lw l9*l142
;l111{lc{lb l52:5;lb l109:1;lb l165:1;lb l150:1;}l16;lc{lb l518:6;lb
l128:2;}l124;}lm;lc l406 l153;};l14 l20 l175(lc l7*ll){l117(ll->lm.
l16.l52){l3 l275:l3 l306:l3 l285:lh 1;l3 l336:l3 l328:lh 2;l3 l320:l3
l318:l3 l226:lh 4;l3 l201:lh l75(l194);l3 l166:le(!ll->lp.lv.l337)lh 0
;lh(l20)l216(ll->lp.lv.l337);l3 l148:le(!ll->lp.lv.l50)lh 0;lh ll->lp
.lv.l50[0]+(ll->lp.lv.l50[1]<<8);l203:lh 0;}}l14 l17 l273(lc l7*ll,
l196 l13,l56 l8){le(!l8)l8=l70();l117(ll->lm.l16.l52){l3 l275:le(l13)ll
->lp.lv.l335=lz;l2 ll->lp.lv.l335=ls;ll->lp.l15.l29=l8;lh lz;l3 l306:
le((-0x80<=l13)&&(l13<=0x7f)){ll->lp.lv.l384=(l409)l13;ll->lp.l15.l29
=l8;lh lz;}l11;l3 l285:le((0<=l13)&&(l13<=0xff)){ll->lp.lv.l155=(lb)l13
;ll->lp.l15.l29=l8;lh lz;}l11;l3 l336:le((-0x8000<=l13)&&(l13<=0x7fff
)){ll->lp.lv.l413=(l119)l13;ll->lp.l15.l29=l8;lh lz;}l11;l3 l328:le((
0<=l13)&&(l13<=0xffff)){ll->lp.lv.l344=(l20)l13;ll->lp.l15.l29=l8;lh
lz;}l11;l3 l320:le((-0x80000000LL<=l13)&&(l13<=0x7fffffff)){ll->lp.lv
.l408=(l144)l13;ll->lp.l15.l29=l8;lh lz;}l11;l3 l318:le((0<=l13)&&(
l13<=0xffffffff)){ll->lp.lv.l339=(lo)l13;ll->lp.l15.l29=l8;lh lz;}l11
;l3 l226:ll->lp.lv.l311=(l307)l13;ll->lp.l15.l29=l8;lh lz;l3 l201:ll
->lp.lv.l271=(l194)l13;ll->lp.l15.l29=l8;lh lz;l203:lh ls;}lh ls;}l14
l17 l412(lc l7*ll,l194 l13,l56 l8){le(!l8)l8=l70();l117(ll->lm.l16.
l52){l3 l226:ll->lp.lv.l311=(l307)l13;ll->lp.l15.l29=l8;lh lz;l3 l201
:ll->lp.lv.l271=l13;ll->lp.l15.l29=l8;lh lz;}lh l273(ll,(l196)l13,l8);
}l14 l17 l358(lc l7*ll,lq*l240,l56 l8){le(!l8)l8=l70();ll->lp.l15.l29
=l8;ll->lp.lv.l50=(lb* )l240;lh lz;}l14 l17 l356(lc l7*ll,l56 l8){le(
!l8)l8=l70();ll->lp.l15.l29=l8;lh lz;}l31 l385{l388=0,l230=1,l236=2,
l246=3};l248 lq( *l404)(l31 l385 l436,lc l7*ll,lc l184*l513);
#ifdef ARDUINO
l248 lq( *l321)(lw __FlashStringHelper*l423,...);
#else
l248 lq( *l321)(lw l9*l423,...);
#endif
lc l266{l17( *l234)(lw l9*l443,l20 l504);l25( *l374)(lq*l120,l20 l21);
l17( *l195)(lw lq*l120,l20 l21);lq( *l364)(lq);lq( *l290)(lq);l17( *
l188)(lq);l17( *l391)(lq);};lc l156{lo l293;lw l9*l53;lw l9*l284;l404
l89;l321 l36;lc l294*l130;l25 l394;};lc l1{l111{lc l107 l105;lc{lc l66
l182;lb l112[TX_BUF_SIZE];}l0;}lm;lb l26[RX_BUF_SIZE];l20 l59;l20 l74
;lc l66 l127;lb l160[32];lo l122;l20 l164;lw l9*l267;lc l156 l6;lc
l266 l41;lb l18;l56 l192;l56 l179;l56 l61;lb l43;lb l137;lb l169;l17
l143;l17 l167;l17 l223;
#ifdef ATTACHED_MODE
lb l131;
#endif
lc l7 l5[1];};l31 l417{l90=0,l87=1,l347=2,l54=3,l241=4,l180=5,l274,
l303,l296,l232,};l14 lq l421(lb*l387,l9*l88){lw l9*l239="\x30\x31\x32"
"\x33\x34\x35\x36\x37\x38\x39";l25 l30=0;l25 ln;l17 l242;l33(ln=0;ln<
4;ln++){lb l177=l387[ln];lb l135=l177%100;l88[l30]=l239[l177/100];
l242=ls;le(l88[l30]=='0')l242=lz;l2 l30++;l177=l135;l135=l177%10;l88[
l30]=l239[l177/10];le((!l242||l88[l30]!='0'))l30++;l88[l30++]=l239[
l135];l88[l30++]='.';}l88[--l30]=0;}l14 lq l280(lc l1*la,l9*l88,lw l9
 * *l220){le(la->l122==0) *l220=la->l267;l2{l421((lb* )&la->l122,l88);
 *l220=l88;}}l14 lq l288(lc l1*la){
#ifdef CRYPTO_ON
l67 l73[8];lc l66*l185=&la->lm.l105.l95;lw l67 l147[8]={0,0,0,0,0,0,0
,0};l208(l185,(lb* )la->l160);l227(l185,(lb* )l147);l163(l185,(lb* )l147
,(lb* )l73,64);l34(la->l160+2,l73+4,30);l208(l185,(lb* )l73);l227(
l185,(lb* )l147);l73[4]=l73[1];l73[5]=l73[3];l73[6]=l73[0];l73[7]=l73
[2];l208(&la->l127,(lb* )(l73+4));l227(&la->l127,(lb* )l147);
#endif
la->lm.l105.l95.l49=0;la->l127.l49=0;}l14 lq l47(lc l1*la,l20 l21,l17
l431){le(!la->l223&&l431){la->l223=lz;la->l61=l70()+100;}la->l74+=l21
;}l14 lq l244(lc l1*la,l17 l345){le(!l345){le(la->l41.l188())lh;}le(
la->l74>2){l20 l68;l68=la->l74-2;la->lm.l0.l112[0]= * ((lb* )&l68+0);
la->lm.l0.l112[1]= * ((lb* )&l68+1);la->l127.l49=l174(la->lm.l0.l112+
2,l68,la->l127.l49);l34(la->lm.l0.l112+la->l74,&(la->l127.l49),4);la
->l74=l68+6;
#ifdef CRYPTO_ON
l163(&la->l127,la->lm.l0.l112,la->lm.l0.l112,la->l74);
#endif
le(!la->l41.l195(la->lm.l0.l112,la->l74))la->l6.l36(F("\x45\x72\x72"
"\x6f\x72\x20\x73\x65\x6e\x64\x69\x6e\x67\x20\x64\x61\x74\x61\x21\n"));
la->l74=2;la->l223=ls;}}l14 lb*l37(lc l1*la,l20 l21){le(l21>((
TX_BUF_SIZE-4)-la->l74))l244(la,lz);lh la->lm.l0.l112+la->l74;}l14 l17
l191(lc l1*la,l56 l262){lh((l56)(l262&0xffffffffffff0000LL)!=la->l179
);}l14 lq l193(lc l1*la,l56 l262){lb*lk;la->l179=l262&
0xffffffffffff0000LL;lk=l37(la,8);lk[0]=0x86;lk[1]=l327;l34(lk+2,(lb*
)&la->l179+2,6);l47(la,8,ls);}l14 l17 l368(lc l1*la,lb l101){lb*lk;
l144 lu;lc l7*lr=la->l5+l101;le(lr->lm.l16.l52==l426)lr->lp.lv.l339=0
;lu=l216(lr->l142);le(lu>64)lh ls;lk=l37(la,5+lu);lk[0]=(lb)(0x83+lu);
lk[1]=l319;lk[2]=l101;lk[3]=lr->lm.l16.l52;lk[4]=lr->l153.lm.lp;l34(
lk+5,lr->l142,lu);l47(la,lu+5,ls);lh lz;}
#ifdef ATTACHED_MODE
l14 l17 l429(lc l1*la,lb l101,lo*l199){l144 l99;lw l9*l141=la->l5[
l101].l142;l9*l100=l362((l9* )l141,'@');le(l100==0)lh ls;l99=l100-
l141;le(l99>64)lh ls;l100+=1; *l199=l379(l100);lh lz;}l14 l17 l249(lc
l1*la,lb l101){lb*lk;l144 l99;lc l7*lr=la->l5+l101;lr->lm.l16.l165=lz
;lw l9*l141=lr->l142;l9*l100=l362((l9* )l141,'@');le(l100==0)lh ls;
l99=l100-l141;le(l99>64)lh ls;l100+=1;lo l97=l379(l100);lk=l37(la,9+
l99);lk[0]=0x87+l99;lk[1]=l277;lk[2]=l97;lk[3]=l97>>8;lk[4]=l97>>16;
lk[5]=l97>>24;lk[6]=0;lk[7]=0;lk[8]=l101;l34(lk+9,l141,l99);l47(la,9+
l99,lz);lh lz;}l14 lq l354(lc l1*la){la->l43=la->l131;le(la->l18==l54
){lb*lk;lk=l37(la,2);lk[0]=0x80;lk[1]=l434;l47(la,2,lz);}}
#endif
l14 lq l369(lc l1*la,lc l238 l276,lb l101){lb*lk=l37(la,5);lk[0]=(lb)0x83
;lk[1]=l366;lk[2]= * ((lb* )&l276+0);lk[3]= * ((lb* )&l276+1);lk[4]=
l101;l47(la,5,ls);}l14 lq l237(lc l1*la,lc l7*ll,l31 l176 l62,l20 l21
,l17 l108){lb*lk;le(l62==l104){l25 l30;l119 l58=4+l21;le((l58<127)&&(
!l108)){lk=l37(la,6+l21);lk[0]=l58|0x80;l30=1;}l2{lk=l37(la,8+l21);lk
[0]=0xff;lk[1]=(lb)l58;lk[2]=(lb)(l58>>8);le(l108)lk[2]|=l171;l30=3;}
lk[l30++]=l233;lk[l30++]=l104;lk[l30++]=ll-la->l5;lk[l30++]=(lb)ll->
lp.l15.l29;lk[l30++]= * ((lb* )&ll->lp+1);le(!l108){lb*lt;le(ll->lm.
l16.l52==l166)lt=ll->lp.lv.l50;l2 le(ll->lm.l16.l52==l148)lt=ll->lp.
lv.l50+2;l2 lt=&ll->lp.lv.l155;l34(lk+l30,lt,l21);}l47(la,l30+l21,
l108?ls:lz);}l2{lk=l37(la,4);lk[0]=0x82;lk[1]=l233;lk[2]=l62;lk[3]=ll
-la->l5;l47(la,4,lz);}}l14 lq l283(lc l1*la,lc l7*ll,l20 l21,l17 l108
){lb*lk;l25 l30;l119 l58=3+l21;le((l58<127)&&(!l108)){lk=l37(la,4+l21
);lk[0]=(lb)(0x03+l21);l30=1;}l2{lk=l37(la,6+l21);lk[0]=0x7f;lk[1]=(
lb)l58;lk[2]=(lb)(l58>>8);le(l108)lk[2]|=l171;l30=3;}lk[l30++]=ll-la
->l5;lk[l30++]=(lb)ll->lp.l15.l29;lk[l30++]= * ((lb* )&ll->lp+1);le(!
l108){lb*lt;le(ll->lm.l16.l52==l166)lt=ll->lp.lv.l50;l2 le(ll->lm.l16
.l52==l148)lt=ll->lp.lv.l50+2;l2 lt=&ll->lp.lv.l155;l34(lk+l30,lt,l21
);}l47(la,l30+l21,l108?ls:lz);}l14 l17 l207(lc l1*la,lc l7*ll,l31 l425
l86){l119 lu;lb*lk;l17 l145;l25 l39;l117(l86){l3 l146:{lu=ll->lp.lv.
l57->l289(ll->lp.lv.l57->l123);le(lu==0){ll->lp.lv.l57->l231(ll->lp.
lv.l57->l123,0,0,&l145);lh lz;}le(lu>0){le(lu>l217)lu=l217;l39=(ll->
lm.l16.l150)?5:4;lk=l37(la,l39+lu);lu=ll->lp.lv.l57->l231(ll->lp.lv.
l57->l123,lk+l39,lu,&l145);le((lu==0)&&(!l145))lh lz;}l2 lk=l37(la,5);
le(lu<0){lu=0;l86=l260;l11;}le(l145)l86=l329;l2 l86=l146;l11;}l3 l171
:{lu=ll->lp.lv.l57->l289(ll->lp.lv.l57->l123);le(lu>=0){le(l191(la,ll
->lp.l15.l29))l193(la,ll->lp.l15.l29);le(lu>l217)lu=l217;l39=(ll->lm.
l16.l150)?8:6;lk=l37(la,l39+lu);lu=ll->lp.lv.l57->l231(ll->lp.lv.l57
->l123,lk+l39,lu,&l145);}le(lu<0){le(ll->lm.l16.l150)l237(la,ll,l420,
0,ls);ll->lm.l124.l128=0;lh ls;}l2{le(ll->lm.l16.l150)l237(la,ll,l104
,lu,lz);l2 l283(la,ll,lu,lz);le(!l145)lh lz;lk=l37(la,5);lu=0;l86=
l329;}l11;}l3 l260:lk=l37(la,5);lu=0;l11;l203:lh ls;}lu++;le(ll->lm.
l16.l165){lk[0]=0x7f;lk[1]=(lb)lu;lk[2]=l86+ * ((lb* )&lu+1);lk[3]=ll
-la->l5;l47(la,3+lu,(l86==l146)?ls:lz);}l2{lk[0]=0xff;lk[1]=(lb)lu;lk
[2]=l86+ * ((lb* )&lu+1);lk[3]=l233;lk[4]=ll-la->l5;l47(la,4+lu,(l86
==l146)?ls:lz);}le(l86!=l146)ll->lm.l124.l128=0;lh lz;}l14 lq l272(lc
l1*la,lc l7*ll){lb l235;lc l294*l162;le((!ll->lm.l16.l109)&&(!la->
l169)){l235=(lb)ll->lp.l15.l0.l118;le(l235==255)lh;l162=la->l6.l130+
l235;le(l162->l224){le(ll->lp.l15.l29>=l162->l229){l67 l400=ll->lp.
l15.l29%l162->l224;l162->l229=ll->lp.l15.l29+l162->l224-l400;}l2 lh;}
}le(ll->l153.lm.l0.l301){le(ll->lm.l124.l128){ll->lp.lv.l57->l281(ll
->lp.lv.l57->l123);l207(la,ll,l260);}ll->lm.l16.l165=1;l207(la,ll,
l171);lh;}le(l191(la,ll->lp.l15.l29))l193(la,ll->lp.l15.l29);l283(la,
ll,l175(ll),ls);}l14 lq l282(lc l1*la,lc l7*l83,lw l9*l134,l56 l8){lb
l4;l144 lu;lb*lk;l4=l83-la->l5;le(la->l5[l4].lp.lv.l46.l210)lh;le(la
->l5[l4].lp.l15.l0.l118!=255){lb l152=la->l169;le(l152){l80(la->l5[
l152].lp.lv.l46.l93)l152=la->l5[l152].lp.lv.l46.l93;la->l5[l152].lp.
lv.l46.l93=l4;}l2 la->l169=l4;la->l5[l4].lp.lv.l46.l189=l152;la->l5[
l4].lp.lv.l46.l93=0;}la->l5[l4].lp.lv.l46.l210=1;le(l191(la,l8))l193(
la,l8);lu=l216(l134)+3;le(lu>127){lk=(lb* )l37(la,4+lu);lk[0]=0xff;lk
[1]= * ((lb* )(&lu)+0);lk[2]= * ((lb* )(&lu)+1);lk[3]=l325;lk[4]=l4;
lk[5]=(lb)l8;lk[6]= * ((lb* )&l8+1);l34(lk+7,l134,lu-3);l47(la,4+lu,
ls);}l2{lk=(lb* )l37(la,2+lu);lk[0]=0x80+lu;lk[1]=l325;lk[2]=l4;lk[3]
=(lb)l8;lk[4]= * ((lb* )&l8+1);l34(lk+5,l134,lu-3);l47(la,2+lu,ls);}}
l14 lq l333(lc l1*la,lc l7*l83){lb l4;lb*lk;l4=l83-la->l5;le(!la->l5[
l4].lp.lv.l46.l210)lh;le(la->l5[l4].lp.l15.l0.l118!=255){le(la->l5[l4
].lp.lv.l46.l189)la->l5[la->l5[l4].lp.lv.l46.l189].lp.lv.l46.l93=la->
l5[l4].lp.lv.l46.l93;l2 la->l169=la->l5[l4].lp.lv.l46.l93;le(la->l5[
l4].lp.lv.l46.l93)la->l5[la->l5[l4].lp.lv.l46.l93].lp.lv.l46.l189=la
->l5[l4].lp.lv.l46.l189;}la->l5[l4].lp.lv.l46.l210=0;lk=(lb* )l37(la,
3);lk[0]=0x81;lk[1]=l414;lk[2]=l4;l47(la,3,lz);}l14 lq l416(lc l1*la,
lc l7*ll,l31 l176 l62){l20 lu;le((ll->l153.lm.l0.l301)&&(l62==l104)){
le(ll->lm.l124.l128)l62=l359;l2{ll->lm.l16.l150=1;l207(la,ll,l171);lh
;}}lu=0;le(l62==l104){le(l191(la,ll->lp.l15.l29))l193(la,ll->lp.l15.
l29);lu=l175(ll);}l237(la,ll,l62,lu,ls);}l14 lq l342(lc l1*la,lc l7*
ll,l31 l176 l62){lb*lk;le(l62==l104){le(l191(la,ll->lp.l15.l29))l193(
la,ll->lp.l15.l29);lk=l37(la,6);lk[0]=0x84;lk[1]=l286;lk[2]=l104;lk[3
]=ll-la->l5;lk[4]=(lb)ll->lp.l15.l29;lk[5]=(lb)(ll->lp.l15.l29>>8);
l47(la,6,lz);}l2{lk=l37(la,4);lk[0]=0x82;lk[1]=l286;lk[2]=l62;lk[3]=
ll-la->l5;l47(la,4,lz);}}l14 lq l430(lc l1*la,lb l415){lb*lk=l37(la,3
);lk[0]=0x81;lk[1]=l375;lk[2]=l415;l47(la,3,lz);}
#if ( RX_BUF_SIZE < 4096)
l14 lq l419(lc l1*la,l20 l21){lb*lk=l37(la,4);lk[0]=0x82;lk[1]=l343;
lk[2]=(lb)l21;lk[3]=(lb)(l21>>8);l47(la,4,ls);}
#endif
l14 lq l395(lc l1*la,lc l156*l157,lc l266*l228){la->l6= *l157;la->l41
= *l228;la->l74=2;la->l43=1;la->l137=0;la->l192=0;la->l18=l90;la->l59
=0;la->l143=lz;la->l167=ls;la->l169=0;la->l61=l70();}l14 lc l7*l353(
lc l1*la,lw l9*l138,l31 l297 l172,lb l252,l20 l245,lc l254*l197){lo
l125;lc l7*lr=la->l5+la->l43++;l111{lc l238 l116;l20 l407;}lm;lm.l407
=l245;le((lb* )lr>=(lb* )la->l6.l130){la->l6.l36(F("\x49\x6e\x63\x72"
"\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f"
"\x55\x4e\x54\x5f\x53\x49\x47\x4e\x41\x4c\x53\x20\x21\n"));l80(1);}
#ifdef ATTACHED_MODE
la->l131=la->l43;
#endif
lr->l142=l138;le(l172==l201){le(l75(l194)==4)l172=l226;}lr->lm.l16.
l52=l172;lr->lm.l16.l109=0;lr->lm.l16.l165=0;lr->lm.l16.l150=0;lr->
l153.lm.lp=l252;lr->lp.lv.l271=0;le(l197)lr->lp.lv.l57=l197;le(lm.
l116.l367){le(la->l137>=la->l6.l394){la->l6.l36(F("\x49\x6e\x63\x72"
"\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f"
"\x55\x4e\x54\x5f\x53\x54\x4f\x52\x45\x20\x21\n"));l80(1);}lr->lp.l15
.l0.l118=la->l137;la->l6.l130[la->l137].l299=lm.l116;la->l6.l130[la->
l137].l229=0;l117(lm.l116.l372){l3 0:l125=lm.l116.l190;l11;l3 1:l125=
(lo)lm.l116.l190*1000;l11;l3 2:l125=(lo)lm.l116.l190*1000*60;l11;l3 3
:l125=(lo)lm.l116.l190*1000*60*60;l11;l3 4:l125=(lo)lm.l116.l190*1000
 *60*60*24;l11;l203:l125=0;l11;}la->l6.l130[la->l137].l224=l125;la->
l137++;}l2 lr->lp.l15.l0.l118=255;lh lr;}
#ifdef ATTACHED_MODE
l14 lc l7*l380(lc l1*la,lw l9*l138){lc l7*lr=la->l5+la->l43++;le((lb*
)lr>=(lb* )la->l6.l130){la->l43--;la->l6.l36(F("\x49\x6e\x63\x72\x65"
"\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f\x55"
"\x4e\x54\x5f\x53\x49\x47\x4e\x41\x4c\x53\x20\x21\n"));lh 0;}lr->l142
=l138;le(la->l18==l54)l249(la,la->l43-1);lh lr;}
#endif
l14 l17 l392(lc l1*la,l17*l370){l25 l132;le(la->l18==l87){le(la->l6.
l53)l305(&la->lm.l105,la->l6.l53,la->l6.l284);l2{le(!l332(&la->lm.
l105,la->l6.l293,(lb* )la->l6.l284)){la->l6.l36(F("\x50\x61\x73\x73"
"\x77\x6f\x72\x64\x20\x69\x73\x20\x65\x72\x72\x6f\x72\x21\n"));la->
l18=l90;lh lz;}}la->l6.l36(F("\x57\x61\x69\x74\x20\x63\x6f\x6e\x6e"
"\x65\x63\x74\x69\x6f\x6e\x2e\x2e\x2e\n"));le(!la->l41.l234(la->l267,
4502)){la->l6.l36(F("\x4e\x6f\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f"
"\x6e\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x73\x65\x72\x76\x69\x63"
"\x65\n"));la->l61=l70()+2000;lh ls;}la->l18=l274;}l132=la->l41.l374(
la->l26+la->l59,RX_BUF_SIZE-la->l59);le(l132<0)lh ls;le(la->l18==l274
){le(!la->l41.l391())lh lz;la->l6.l36(F("\x57\x61\x69\x74\x20\x61\x75"
"\x74\x68\x6f\x72\x69\x7a\x61\x74\x69\x6f\x6e\x2e\x2e\x2e\n"));la->
l41.l195(&la->lm.l105.l35.lm.l0.l53,l75(lc l243));la->l18=l303;}le((
l132==0)&&(la->l143)){lh lz;} *l370=lz;l117(la->l18){l3 l303:{lb lk[
24+l75(lc l140)];lc l140 l136;le(l132!=24)lh ls;le(!l317(&la->lm.l105
,la->l26,lk))lh ls;l136.l389=1;l136.l376=la->l6.l293;l136.l348=
0xffffffffL;l136.l49=l174((lb* )&l136,offsetof(lc l140,l49),
0xffffffff);
#ifdef CRYPTO_ON
l298(&la->lm.l105,&l136);
#endif
l34(lk+24,&l136,l75(lc l140));le(!la->l41.l195(lk,l75(lk)))lh ls;la->
l41.l364();la->l18=l296;lh lz;}l3 l296:{lb l133;lw l9*l178;l9 l270[12
+3+1];le(l132!=l75(lc l222))lh ls;
#ifdef CRYPTO_ON
l163(&la->lm.l105.l95,la->l26,la->l26,l75(lc l222));
#endif
le(la->l26[offsetof(lc l222,l49)]!=(lb)l174(la->l26,offsetof(lc l222,
l49),0xffffffff))lh ls;l133=la->l26[0];la->l41.l290();le(l133!=l104){
l117(l133){l3 l422:la->l6.l36(F("\x54\x68\x65\x20\x73\x65\x72\x76\x69"
"\x63\x65\x20\x69\x73\x20\x62\x72\x6f\x6b\x65\x6e\n"));l11;l3 l403:la
->l61=l70()+10000;la->l6.l36(F("\x54\x68\x65\x20\x64\x65\x76\x69\x63"
"\x65\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65"
"\x64\n"));l11;}lh ls;}la->l122=la->l26[33]; * ((lb* )&la->l122+1)=la
->l26[34]; * ((lb* )&la->l122+2)=la->l26[35]; * ((lb* )&la->l122+3)=
la->l26[36]; * ((lb* )&la->l164+0)=la->l26[37]; * ((lb* )&la->l164+1)=
la->l26[38];le(!la->l164)la->l164=4503;l280(la,l270,&l178);le(!la->
l41.l234(l178,la->l164)){la->l6.l36(F("\x4c\x6f\x73\x73\x20\x6f\x66"
"\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\n"));la->l18=l87;lh lz;
}l34(la->l160,la->l26+1,32);l288(la);le(!la->l41.l195(la->l160,8))lh
ls;la->l18=l232;la->l59=0;la->l6.l36(F("\x53\x65\x74\x74\x69\x6e\x67"
"\x2e\x2e\x2e\n"));lh lz;}l3 l232:l3 l54:{l25 l39=0;lc l66*l182=&la->
lm.l105.l95;
#ifdef CRYPTO_ON
l163(l182,la->l26+la->l59,la->l26+la->l59,l132);
#endif
la->l59+=l132;l80(1){l25 l71;l25 l44;lo l331;l20 l68;l25 l64=la->l59-
l39;le(l64<6)l11;l68=la->l26[l39]+(la->l26[l39+1]<<8);le((l25)(l68+6)>
l64){le(l64==RX_BUF_SIZE){la->l6.l36(F("\x52\x65\x63\x65\x69\x76\x69"
"\x6e\x67\x20\x74\x6f\x6f\x20\x6d\x75\x63\x68\x20\x64\x61\x74\x61\x2c"
"\x20\x52\x58\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65\x20\x6d"
"\x75\x73\x74\x20\x6e\x6f\x74\x20\x62\x65\x20\x6c\x65\x73\x73\x20\x74"
"\x68\x61\x6e\x20\x25\x69\x20\x62\x79\x74\x65\x73\x2e\n"),l68+6);lh ls
;}l11;}le(la->l143){l34(&l331,la->l26+l39+2+l68,4);l182->l49=l174(la
->l26+l39+2,l68,l182->l49);le(l182->l49!=l331)lh ls;}l2 la->l143=lz;
l71=l39+2;l44=l71+l68;l39+=l68+6;l80(l71!=l44){l25 l405=l71;l25 l40;
lb l205;lb*l12;le(la->l41.l188()){l20 l135;l39=l71-2;l341(la->l26,la
->l26+l39,la->l59-l39);la->l59-=l39;l135=l44-l71;la->l26[0]= * ((lb* )&
l135);la->l26[1]= * ((lb* )&l135+1);la->l143=ls;lh lz;}l40=la->l26[
l71++]&0x7f;le(l40==0x7f){lb l81; * ((lb* )&l40+0)=la->l26[l71++];l81
=la->l26[l71++]; * ((lb* )&l40+1)=l81&0x0f;}le(la->l26[l405]&0x80)l205
=la->l26[l71++];l2 l205=0;l12=la->l26+l71;l71+=l40;le(l71>l44)lh ls;
l117(l205){l3 l418:{lb l4;l67 l365=0xffffffffffffffffLL;lc l7*lr;l119
lu;lc l184 l24;le(l40<3)lh ls;l4=l12[0];le(l4>=la->l43)lh ls;lr=la->
l5+l4;lu=l40-3;le(lr->l153.lm.l0.l432){lu-=8;le(lu<0)lh ls;l34(&l365,
l12+l40-8,8);}l24.l15.l29=la->l192;l24.l15.l29|=l12[1];l24.l15.l29|=
l12[2]<<8;le(lr->lm.l16.l52==l166){lb*l44;lb l81;l24.lv.l50=l12+3;l44
=l24.lv.l50+lu;l81= *l44; *l44=0;la->l6.l89(l236,lr,&l24); *l44=l81;}
l2 le(lr->lm.l16.l52==l148){l12[1]=(lb)lu;l12[2]=(lb)(lu>>8);l24.lv.
l50=l12+3-2;la->l6.l89(l236,lr,&l24);}l2{le(l175(lr)!=(l20)lu)lh ls;
l34(&l24.lv.l155,l12+3,lu);la->l6.l89(l236,lr,&l24);}l11;}l3 l327:{le
(l40!=6)lh ls;l34(((lb* )&(la->l192))+2,l12,6);l11;}l3 l373:{lb l4;lc
l7*lr;le(l40!=1)lh ls;l4=l12[0];le(l4>=la->l43)lh ls;lr=la->l5+l4;la
->l6.l89(l388,lr,0);l11;}l3 l361:{lb l4;l20 lu;lc l7*lr;lc l184 l24;
le(l40<1)lh ls;l4=l12[0];le(l4>=la->l43)lh ls;lu=l40-1;lr=la->l5+l4;
le(lr->lm.l16.l52==l166){lb*l44;lb l81;l24.lv.l50=l12+1;l44=l24.lv.
l50+lu;l81= *l44; *l44=0;la->l6.l89(l230,lr,&l24); *l44=l81;}l2 le(lr
->lm.l16.l52==l148){ * (l12-1)=(lb)lu;l12[0]=(lb)(lu>>8);l24.lv.l50=
l12-1;la->l6.l89(l230,lr,&l24);}l2{le(l175(lr)!=lu)lh ls;l34(&l24.lv.
l155,l12+1,lu);la->l6.l89(l230,lr,&l24);}l11;}l3 l319:{le(l40!=2)lh ls
;le(l12[0]!=l104)lh ls;l11;}l3 l291:l3 l424:{lb l4;lc l7*lr;le(l40!=1
)lh ls;l4=l12[0];le(l4>=la->l43)lh ls;lr=la->l5+l4;le(l205==l291){lr
->lm.l16.l109=1;le(l4==0)la->l6.l36(F("\x65\x6e\x74\x65\x72\x65\x64"
"\x20\x66\x69\x72\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"),l12[0]);}l2
{lr->lm.l16.l109=0;le(l4==0)la->l6.l36(F("\x65\x78\x69\x74\x20\x6c"
"\x61\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"),l12[0]);}l11;}l3 l360:{
l56 l149;le(l40!=8)lh ls;l34(&l149,l12,8);l390=l149-(l70()-l390);l11;
}l3 l428:l3 l399:l11;l3 l350:{le(!la->l167){l25 ln;
#if ( RX_BUF_SIZE < 4096)
l419(la,RX_BUF_SIZE);
#endif
#ifdef ATTACHED_MODE
l33(ln=1;ln<la->l131;ln++){
#else
l33(ln=1;ln<la->l43;ln++){
#endif
l368(la,ln);le(la->l5[ln].lp.l15.l0.l118!=255)l369(la,la->l6.l130[la
->l5[ln].lp.l15.l0.l118].l299,ln);}
#ifdef ATTACHED_MODE
l33(ln=la->l131;ln<la->l43;ln++)l249(la,ln);
#endif
l430(la,0);}la->l6.l36(F("\x57\x6f\x72\x6b\x2e\x2e\x2e\n"));la->l18=
l54;la->l169=0;l11;}
#ifdef ATTACHED_MODE
l3 l410:{lb l4;l20 lu;lc l7*lr;lc l184 l24;le(l40<3)lh ls;l4=l12[0];
le(l4>=la->l43)lh ls;lu=l40-3;lr=la->l5+l4;l24.l15.l29=la->l192|(l12[
1]+(l12[2]<<8));le(lr->lm.l16.l52==l166){lb*l44;lb l81;l24.lv.l50=l12
+3;l44=l24.lv.l50+lu;l81= *l44; *l44=0;la->l6.l89(l246,lr,&l24); *l44
=l81;}l2 le(lr->lm.l16.l52==l148){ * (l12+1)=(lb)lu; * (l12+2)=(lb)(
lu>>8);l24.lv.l50=l12+1;la->l6.l89(l246,lr,&l24);}l2{le(l175(lr)!=lu)lh
ls;l34(&l24.lv.l155,l12+3,lu);la->l6.l89(l246,lr,&l24);}l11;}l3 l277:
{lb l4;lc l7*lr;le((l40!=4)&&(l40!=2))lh ls;l4=l12[1];le(l4>=la->l43)lh
ls;lr=la->l5+l4;lr->lm.l16.l165=ls;le(l40==4){lr->lm.l16.l52=l12[2];
lr->l153.lm.lp=l12[3];lr->lm.l16.l109=lz;}l2 lr->lm.l16.l109=ls;l11;}
l3 l381:{le(l40!=5)lh ls;lo l97=l12[0]; * ((lb* )&l97+1)=l12[1]; * ((
lb* )&l97+2)=l12[2]; * ((lb* )&l97+3)=l12[3];lb l265=l12[4];l33(l25 ln
=la->l131;ln<la->l43;ln++){lo l304;le(l429(la,ln,&l304)){le(l304==l97
){lc l7*lr=la->l5+ln;le((l265==l287)&&(lr->lm.l16.l109==ls)&&(lr->lm.
l16.l165==ls))l249(la,ln);l2 le((l265!=l287)||(l265!=l352))lr->lm.l16
.l109=ls;}}}l11;}
#endif
l203:lh ls;}}}le(l39){l341(la->l26,la->l26+l39,la->l59-l39);la->l59-=
l39;}}}lh lz;}l14 lq l206(lc l1*la){l25 ln;
#ifdef ATTACHED_MODE
l33(ln=0;ln<la->l131;ln++){
#else
l33(ln=0;ln<la->l43;ln++){
#endif
lc l7*lr=la->l5+ln;le(lr->lm.l124.l128){lr->lp.lv.l57->l281(lr->lp.lv
.l57->l123);lr->lm.l124.l128=0;}lr->lm.l16.l109=0;}la->l41.l290();la
->l18=l87;la->l167=ls;la->l59=0;la->l143=lz;la->l74=2;la->l179=la->
l179-0x10000L;}l14 lq l383(lc l1*la,l20 l154){lb*lk=l37(la,4);lk[0]=
0x82;lk[1]=l355;lk[2]= * ((lb* )&l154);lk[3]= * ((lb* )&l154+1);l47(
la,4,ls);l244(la,lz);}l14 l31 l417 l411(lc l1*la){l56 l149=l70();l56
l309=la->l61;l17 l396=ls;lb l278;le(la->l18==l87){le(la->l61>l149)lh
l87;}la->l61=0;l278=la->l18;le(!l392(la,&l396)){la->l6.l36(F("\x44"
"\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n"));l206(la);le(!la->
l61)la->l61=l149+2000;lh l180;}le(la->l18==l54){le(l278!=l54)lh l347;
la->l61=l309;le(lz){l25 ln;
#ifdef ATTACHED_MODE
l33(ln=0;ln<la->l131;ln++){
#else
l33(ln=0;ln<la->l43;ln++){
#endif
lc l7*lr=la->l5+ln;le(lr->lm.l124.l128){le(la->l41.l188())lh l241;
l207(la,lr,l146);}}}le(la->l223&&(l309<l149))l244(la,ls);le(la->l41.
l188())lh l241;lh l54;}lh l87;}l17 l461(lc l85*ll,l196 l13,l168 l8){
lh l273((lc l7* )ll,l13,l8);}l17 l444(lc l85*ll,l194 l13,l168 l8){lh
l412((lc l7* )ll,l13,l8);}l17 l505(lc l85*ll,lq*l240,l168 l8){lh l358
((lc l7* )ll,l240,l8);}l17 l481(lc l85*ll,l168 l8){lh l356((lc l7* )ll
,l8);}l17 l535(lc l60*la,lc l469*l157,lc l493*l228){((lc l156* )l157)->
l36(F("\x4d\x67\x74\x43\x6c\x69\x65\x6e\x74\x20\x76\x31\x2e\x36\x2c"
"\x20\x31\x35\x2f\x58\x49\x49\x2f\x32\x30\x31\x39\n"));le(offsetof(lc
l60,l5)!=offsetof(lc l1,l5)){l25 l346=offsetof(lc l1,l5);((lc l156* )l157
)->l36(F("\x49\x6e\x20\x74\x68\x65\x20\x66\x69\x6c\x65\x20\"\x4d\x67"
"\x74\x43\x6c\x69\x65\x6e\x74\x2e\x68\"\x20\x69\x6e\x20\x6c\x69\x6e"
"\x65\x20\"\x23\x64\x65\x66\x69\x6e\x65\x20\x4d\x47\x54\x5f\x43\x4f"
"\x4e\x53\x54\x41\x4e\x54\x20\x25\x69\"\n\x79\x6f\x75\x20\x6e\x65\x65"
"\x64\x20\x74\x6f\x20\x73\x65\x74\x20\x74\x68\x65\x20\x6e\x75\x6d\x62"
"\x65\x72\x20\x25\x69\x20\x21\n"),(l25)(l75(la->l491)),(l25)l346);lh
ls;}((lc l156* )l157)->l36(F("\x49\x6e\x69\x74\n"));l395((lc l1* )la,
(lc l156* )l157,(lc l266* )l228);lh lz;}lq l516(lc l60*la,lw l9*l220){
lc l1*lx=(lc l1* )la;lx->l267=l220;le(lx->l18==l90){le(lx->l167){lw l9
 *l178;l9 l270[12+3+1];lx->l6.l36(F("\x52\x65\x73\x74\x61\x72\x74\x20"
"\x73\x65\x73\x73\x69\x6f\x6e\n"));l280(lx,l270,&l178);le(!lx->l41.
l234(l178,lx->l164)){lx->l6.l36(F("\x4e\x6f\x20\x63\x6f\x6e\x6e\x65"
"\x63\x74\x69\x6f\x6e\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x73\x65"
"\x72\x76\x69\x63\x65\n"));lx->l18=l87;lx->l167=ls;lx->l61=l70()+2000
;}l288(lx);le(!lx->l41.l195(lx->l160,8)){lx->l6.l36(F("\x44\x69\x73"
"\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n"));l206(lx);lx->l61=l70()+
2000;lh;}l2{lx->l18=l232;lx->l59=0;}}l2{lx->l18=l87;lx->l6.l36(F(""
"\x53\x74\x61\x72\x74\n"));}}}lq l456(lc l60*la,l20 l154){lc l1*lx=(
lc l1* )la;le((lx->l18!=l90)&&(lx->l18!=l180)){le(lx->l18!=l87){le((
l154)&&(lx->l18==l54)){l168 l258;l383(lx,l154);l258=l70();lx->l61=
l258+1000;lx->l192=l258+(l154*1000);lx->l18=l180;}l2{l206(lx);lx->l18
=l90;}}lx->l6.l36(F("\x53\x74\x6f\x70\n"));}}l31 l113 l467(lc l60*la){
lc l1*lx=(lc l1* )la;le(lx->l18==l180){le(lx->l61<l70()){l206(lx);lx
->l18=l90;lx->l167=lz;}l2 lh(l31 l113)l180;}le(lx->l18==l90)lh(l31
l113)l90;lh(l31 l113)l411((lc l1* )la);}l31 l113 l438(lc l60*la){lc l1
 *lx=(lc l1* )la;le(lx->l18==l54){le(lx->l41.l188())lh(l31 l113)l241;
l2 lh(l31 l113)l54;}le(lx->l18==l90)lh(l31 l113)l90;lh(l31 l113)l87;}
lq l479(lc l60*la,lc l85*ll){lc l1*lx=(lc l1* )la;le(lx->l18!=l54)lh;
l272(lx,(lc l7* )ll);}lq l463(lc l60*la,lc l302*l83,lw l9*l134,l168 l8
,...){l472 l218;lc l7*l186;lc l1*lx=(lc l1* )la;le(lx->l18!=l54)lh;
l282(lx,(lc l7* )l83,l134,l8);l531(l218,l8);l186=l382(l218,lc l7* );
l80(l186){l144 ln=(lb* )l186-(lb* )la->l5;le(ln%l75(lc l7))l11;le((ln
<0)||(ln>=(lx->l43*l75(lc l7))))l11;l272(lx,l186);l186=l382(l218,lc l7
 * );}l474(l218);l333(lx,(lc l7* )l83);}lq l457(lc l60*la,lc l302*l83
,lw l9*l134,l168 l8){lc l1*lx=(lc l1* )la;le(lx->l18!=l54)lh;l282(lx,
(lc l7* )l83,l134,l8);}lq l533(lc l60*la,lc l302*l83){lc l1*lx=(lc l1
 * )la;le(lx->l18!=l54)lh;l333(lx,(lc l7* )l83);}lq l447(lc l60*la,lc
l85*ll,l31 l433 l62){lc l1*lx=(lc l1* )la;le(lx->l18!=l54)lh;l416(lx,
(lc l7* )ll,(l31 l176)l62);}lq l511(lc l60*la,lc l85*ll,l31 l433 l62){
lc l1*lx=(lc l1* )la;le(lx->l18!=l54)lh;l342(lx,(lc l7* )ll,(l31 l176
)l62);}lc l85*l494(lc l60*la,lw l9*l138,l31 l507 l172,lb l252,l20 l245
,lc l521*l197){lh(lc l85* )l353((lc l1* )la,l138,(l31 l297)l172,l252,
l245,(lc l254* )l197);}
#ifdef ATTACHED_MODE
lc l85*l528(lc l60*la,lw l9*l138){lh(lc l85* )l380((lc l1* )la,l138);
}lq l485(lc l60*la){l354((lc l1* )la);}
#endif
