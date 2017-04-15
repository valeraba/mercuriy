/*
Copyright © 2015, BVAgile. All rights reserved.
Contacts: <bvagile@gmail.com>
*/

#include"MgtClient.h"
#define ld struct
#define lm __uint32
#define lb __uint8
#define lq void
#define lu const
#define l15 static
#define le if
#define lk return
#define l30 memcpy
#define l78 while
#define l77 __int8
#define l225 unsigned
#define l23 int
#define l204 strlen
#define l501 strncmp
#define l34 for
#define l481 continue
#define l383 memset
#define l69 sizeof
#define l4 else
#define l31 char
#define l53 __uint64
#define l107 union
#define l27 enum
#define l19 __uint16
#define l13 bool
#define l319 rand
#define lt false
#define l416 memcmp
#define lz true
#define l497 strchr
#define l14 break
#define l237 typedef
#define l190 __int64
#define l112 __int16
#define l219 read
#define l274 abort
#define l220 __int32
#define l303 float
#define l179 double
#define l130 switch
#define l2 case
#define l203 default
#define l64 getUTCTime
#define l351 updateTime
#define l226 open
#define l284 close
#define l5 m_signals
#define l131 rem
#define l0 signal
#define l340 memmove
#define l137 time
#define l381 shiftTime
#define l440 signal_update_int
#define l105 Signal
#define l153 TimeStamp
#define l427 signal_update_double
#define l504 signal_update_str
#define l463 signal_updateTime
#define l511 mgt_init
#define l68 MgtClient
#define l452 DeviceConfig
#define l476 PortableSocket
#define l474 m_reserv
#define l496 mgt_start
#define l445 mgt_stop
#define l108 MgtState
#define l450 mgt_run
#define l422 mgt_getState
#define l466 mgt_send
#define l449 mgt_eventSend
#define l297 Event
#define l461 va_list
#define l421 va_start
#define l372 va_arg
#define l454 va_end
#define l429 mgt_readAns
#define l406 ErrorCode
#define l490 mgt_writeAns
#define l480 mgt_createSignal
#define l489 SignalType
#define l502 ChunkedTransfer


ld l102{lm l74[2];lm l28[4];lb l251[64];};lq l117(ld l102*lx);lq l36(
ld l102*lx,lu lb*l7,lm l55);lq l118(lb l46[16],ld l102*lx);lq l117(ld
l102*lx){lx->l74[0]=0;lx->l74[1]=0;lx->l28[0]=0x67452301;lx->l28[1]=
0xEFCDAB89;lx->l28[2]=0x98BADCFE;lx->l28[3]=0x10325476;}l15 lq l306(
ld l102*lx,lu lb lr[64]){lm lc[16],lh,lg,lf,li;{(lc[0])=((lm)(lr)[(0)]
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
<<8)|((lm)(lr)[(60)+2]<<16)|((lm)(lr)[(60)+3]<<24);};lh=lx->l28[0];lg
=lx->l28[1];lf=lx->l28[2];li=lx->l28[3];{lh+=(li^(lg&(lf^li)))+lc[0]+
0xD76AA478;lh=((lh<<7)|((lh&0xFFFFFFFF)>>(32-7)))+lg;};{li+=(lf^(lh&(
lg^lf)))+lc[1]+0xE8C7B756;li=((li<<12)|((li&0xFFFFFFFF)>>(32-12)))+lh
;};{lf+=(lg^(li&(lh^lg)))+lc[2]+0x242070DB;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+li;};{lg+=(lh^(lf&(li^lh)))+lc[3]+0xC1BDCEEE;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{lh+=(li^(lg&(lf^li)))+
lc[4]+0xF57C0FAF;lh=((lh<<7)|((lh&0xFFFFFFFF)>>(32-7)))+lg;};{li+=(lf
^(lh&(lg^lf)))+lc[5]+0x4787C62A;li=((li<<12)|((li&0xFFFFFFFF)>>(32-12
)))+lh;};{lf+=(lg^(li&(lh^lg)))+lc[6]+0xA8304613;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+li;};{lg+=(lh^(lf&(li^lh)))+lc[7]+0xFD469501;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{lh+=(li^(lg&(lf^li)))+
lc[8]+0x698098D8;lh=((lh<<7)|((lh&0xFFFFFFFF)>>(32-7)))+lg;};{li+=(lf
^(lh&(lg^lf)))+lc[9]+0x8B44F7AF;li=((li<<12)|((li&0xFFFFFFFF)>>(32-12
)))+lh;};{lf+=(lg^(li&(lh^lg)))+lc[10]+0xFFFF5BB1;lf=((lf<<17)|((lf&
0xFFFFFFFF)>>(32-17)))+li;};{lg+=(lh^(lf&(li^lh)))+lc[11]+0x895CD7BE;
lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{lh+=(li^(lg&(lf^li)))+
lc[12]+0x6B901122;lh=((lh<<7)|((lh&0xFFFFFFFF)>>(32-7)))+lg;};{li+=(
lf^(lh&(lg^lf)))+lc[13]+0xFD987193;li=((li<<12)|((li&0xFFFFFFFF)>>(32
-12)))+lh;};{lf+=(lg^(li&(lh^lg)))+lc[14]+0xA679438E;lf=((lf<<17)|((
lf&0xFFFFFFFF)>>(32-17)))+li;};{lg+=(lh^(lf&(li^lh)))+lc[15]+
0x49B40821;lg=((lg<<22)|((lg&0xFFFFFFFF)>>(32-22)))+lf;};{lh+=(lf^(li
&(lg^lf)))+lc[1]+0xF61E2562;lh=((lh<<5)|((lh&0xFFFFFFFF)>>(32-5)))+lg
;};{li+=(lg^(lf&(lh^lg)))+lc[6]+0xC040B340;li=((li<<9)|((li&
0xFFFFFFFF)>>(32-9)))+lh;};{lf+=(lh^(lg&(li^lh)))+lc[11]+0x265E5A51;
lf=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+li;};{lg+=(li^(lh&(lf^li)))+
lc[0]+0xE9B6C7AA;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{lh+=(
lf^(li&(lg^lf)))+lc[5]+0xD62F105D;lh=((lh<<5)|((lh&0xFFFFFFFF)>>(32-5
)))+lg;};{li+=(lg^(lf&(lh^lg)))+lc[10]+0x02441453;li=((li<<9)|((li&
0xFFFFFFFF)>>(32-9)))+lh;};{lf+=(lh^(lg&(li^lh)))+lc[15]+0xD8A1E681;
lf=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+li;};{lg+=(li^(lh&(lf^li)))+
lc[4]+0xE7D3FBC8;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{lh+=(
lf^(li&(lg^lf)))+lc[9]+0x21E1CDE6;lh=((lh<<5)|((lh&0xFFFFFFFF)>>(32-5
)))+lg;};{li+=(lg^(lf&(lh^lg)))+lc[14]+0xC33707D6;li=((li<<9)|((li&
0xFFFFFFFF)>>(32-9)))+lh;};{lf+=(lh^(lg&(li^lh)))+lc[3]+0xF4D50D87;lf
=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+li;};{lg+=(li^(lh&(lf^li)))+lc
[8]+0x455A14ED;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{lh+=(lf
^(li&(lg^lf)))+lc[13]+0xA9E3E905;lh=((lh<<5)|((lh&0xFFFFFFFF)>>(32-5)))+
lg;};{li+=(lg^(lf&(lh^lg)))+lc[2]+0xFCEFA3F8;li=((li<<9)|((li&
0xFFFFFFFF)>>(32-9)))+lh;};{lf+=(lh^(lg&(li^lh)))+lc[7]+0x676F02D9;lf
=((lf<<14)|((lf&0xFFFFFFFF)>>(32-14)))+li;};{lg+=(li^(lh&(lf^li)))+lc
[12]+0x8D2A4C8A;lg=((lg<<20)|((lg&0xFFFFFFFF)>>(32-20)))+lf;};{lh+=(
lg^lf^li)+lc[5]+0xFFFA3942;lh=((lh<<4)|((lh&0xFFFFFFFF)>>(32-4)))+lg;
};{li+=(lh^lg^lf)+lc[8]+0x8771F681;li=((li<<11)|((li&0xFFFFFFFF)>>(32
-11)))+lh;};{lf+=(li^lh^lg)+lc[11]+0x6D9D6122;lf=((lf<<16)|((lf&
0xFFFFFFFF)>>(32-16)))+li;};{lg+=(lf^li^lh)+lc[14]+0xFDE5380C;lg=((lg
<<23)|((lg&0xFFFFFFFF)>>(32-23)))+lf;};{lh+=(lg^lf^li)+lc[1]+
0xA4BEEA44;lh=((lh<<4)|((lh&0xFFFFFFFF)>>(32-4)))+lg;};{li+=(lh^lg^lf
)+lc[4]+0x4BDECFA9;li=((li<<11)|((li&0xFFFFFFFF)>>(32-11)))+lh;};{lf
+=(li^lh^lg)+lc[7]+0xF6BB4B60;lf=((lf<<16)|((lf&0xFFFFFFFF)>>(32-16)))+
li;};{lg+=(lf^li^lh)+lc[10]+0xBEBFBC70;lg=((lg<<23)|((lg&0xFFFFFFFF)>>
(32-23)))+lf;};{lh+=(lg^lf^li)+lc[13]+0x289B7EC6;lh=((lh<<4)|((lh&
0xFFFFFFFF)>>(32-4)))+lg;};{li+=(lh^lg^lf)+lc[0]+0xEAA127FA;li=((li<<
11)|((li&0xFFFFFFFF)>>(32-11)))+lh;};{lf+=(li^lh^lg)+lc[3]+0xD4EF3085
;lf=((lf<<16)|((lf&0xFFFFFFFF)>>(32-16)))+li;};{lg+=(lf^li^lh)+lc[6]+
0x04881D05;lg=((lg<<23)|((lg&0xFFFFFFFF)>>(32-23)))+lf;};{lh+=(lg^lf^
li)+lc[9]+0xD9D4D039;lh=((lh<<4)|((lh&0xFFFFFFFF)>>(32-4)))+lg;};{li
+=(lh^lg^lf)+lc[12]+0xE6DB99E5;li=((li<<11)|((li&0xFFFFFFFF)>>(32-11)))+
lh;};{lf+=(li^lh^lg)+lc[15]+0x1FA27CF8;lf=((lf<<16)|((lf&0xFFFFFFFF)>>
(32-16)))+li;};{lg+=(lf^li^lh)+lc[2]+0xC4AC5665;lg=((lg<<23)|((lg&
0xFFFFFFFF)>>(32-23)))+lf;};{lh+=(lf^(lg|~li))+lc[0]+0xF4292244;lh=((
lh<<6)|((lh&0xFFFFFFFF)>>(32-6)))+lg;};{li+=(lg^(lh|~lf))+lc[7]+
0x432AFF97;li=((li<<10)|((li&0xFFFFFFFF)>>(32-10)))+lh;};{lf+=(lh^(li
|~lg))+lc[14]+0xAB9423A7;lf=((lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+li;
};{lg+=(li^(lf|~lh))+lc[5]+0xFC93A039;lg=((lg<<21)|((lg&0xFFFFFFFF)>>
(32-21)))+lf;};{lh+=(lf^(lg|~li))+lc[12]+0x655B59C3;lh=((lh<<6)|((lh&
0xFFFFFFFF)>>(32-6)))+lg;};{li+=(lg^(lh|~lf))+lc[3]+0x8F0CCC92;li=((
li<<10)|((li&0xFFFFFFFF)>>(32-10)))+lh;};{lf+=(lh^(li|~lg))+lc[10]+
0xFFEFF47D;lf=((lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+li;};{lg+=(li^(lf
|~lh))+lc[1]+0x85845DD1;lg=((lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;}
;{lh+=(lf^(lg|~li))+lc[8]+0x6FA87E4F;lh=((lh<<6)|((lh&0xFFFFFFFF)>>(
32-6)))+lg;};{li+=(lg^(lh|~lf))+lc[15]+0xFE2CE6E0;li=((li<<10)|((li&
0xFFFFFFFF)>>(32-10)))+lh;};{lf+=(lh^(li|~lg))+lc[6]+0xA3014314;lf=((
lf<<15)|((lf&0xFFFFFFFF)>>(32-15)))+li;};{lg+=(li^(lf|~lh))+lc[13]+
0x4E0811A1;lg=((lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;};{lh+=(lf^(lg
|~li))+lc[4]+0xF7537E82;lh=((lh<<6)|((lh&0xFFFFFFFF)>>(32-6)))+lg;};{
li+=(lg^(lh|~lf))+lc[11]+0xBD3AF235;li=((li<<10)|((li&0xFFFFFFFF)>>(
32-10)))+lh;};{lf+=(lh^(li|~lg))+lc[2]+0x2AD7D2BB;lf=((lf<<15)|((lf&
0xFFFFFFFF)>>(32-15)))+li;};{lg+=(li^(lf|~lh))+lc[9]+0xEB86D391;lg=((
lg<<21)|((lg&0xFFFFFFFF)>>(32-21)))+lf;};lx->l28[0]+=lh;lx->l28[1]+=
lg;lx->l28[2]+=lf;lx->l28[3]+=li;}lq l36(ld l102*lx,lu lb*l7,lm l55){
lm l132,l181;le(!l55)lk;l132=lx->l74[0]&0x3F;l181=64-l132;lx->l74[0]
+=l55;lx->l74[0]&=0xFFFFFFFF;le(lx->l74[0]<l55)lx->l74[1]++;le(l132&&
l55>=l181){l30((lq* )(lx->l251+l132),(lq* )l7,l181);l306(lx,lx->l251);
l55-=l181;l7+=l181;l132=0;}l78(l55>=64){l306(lx,l7);l55-=64;l7+=64;}
le(l55)l30((lq* )(lx->l251+l132),(lq* )l7,l55);}l15 lb l388[64]={0x80
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};lq l118(lb
l46[16],ld l102*lx){lm l196,l309;lm l167,l157;lb l95[8];l167=(lx->l74
[0]>>29)|(lx->l74[1]<<3);l157=(lx->l74[0]<<3);{(l95)[(0)]=(lb)((l157));
(l95)[(0)+1]=(lb)((l157)>>8);(l95)[(0)+2]=(lb)((l157)>>16);(l95)[(0)+
3]=(lb)((l157)>>24);};{(l95)[(4)]=(lb)((l167));(l95)[(4)+1]=(lb)((
l167)>>8);(l95)[(4)+2]=(lb)((l167)>>16);(l95)[(4)+3]=(lb)((l167)>>24);
};l196=lx->l74[0]&0x3F;l309=(l196<56)?(56-l196):(120-l196);l36(lx,
l388,l309);l36(lx,l95,8);{(l46)[(0)]=(lb)((lx->l28[0]));(l46)[(0)+1]=
(lb)((lx->l28[0])>>8);(l46)[(0)+2]=(lb)((lx->l28[0])>>16);(l46)[(0)+3
]=(lb)((lx->l28[0])>>24);};{(l46)[(4)]=(lb)((lx->l28[1]));(l46)[(4)+1
]=(lb)((lx->l28[1])>>8);(l46)[(4)+2]=(lb)((lx->l28[1])>>16);(l46)[(4)+
3]=(lb)((lx->l28[1])>>24);};{(l46)[(8)]=(lb)((lx->l28[2]));(l46)[(8)+
1]=(lb)((lx->l28[2])>>8);(l46)[(8)+2]=(lb)((lx->l28[2])>>16);(l46)[(8
)+3]=(lb)((lx->l28[2])>>24);};{(l46)[(12)]=(lb)((lx->l28[3]));(l46)[(
12)+1]=(lb)((lx->l28[3])>>8);(l46)[(12)+2]=(lb)((lx->l28[3])>>16);(
l46)[(12)+3]=(lb)((lx->l28[3])>>24);};}lb*l325(lu l77*l92,lu l77*l286
){lu l77*l91, *l149;l15 lb l87[16];l225 l23 lo,l209,l90;ld l102 lx,
l65;l23 l164;l90=l204(l92);l91=l286;le(l501(l91,"\x24\x31\x24",3)==0)l91
+=3;l34(l149=l91; *l149!='\0'&& *l149!='$'&&l149<(l91+8);l149++)l481;
l209=l149-l91;l117(&lx);l36(&lx,(lu lb* )l92,l90);l36(&lx,(lu lb* )""
"\x24\x31\x24",3);l36(&lx,(lu lb* )l91,l209);l117(&l65);l36(&l65,(lu
lb* )l92,l90);l36(&l65,(lu lb* )l91,l209);l36(&l65,(lu lb* )l92,l90);
l118(l87,&l65);l34(l164=l90;l164>0;l164-=16)l36(&lx,l87,(l225 l23)(
l164>16?16:l164));l383(l87,0,l69(l87));l34(lo=l90;lo!=0;lo>>=1)le((lo
&1)!=0)l36(&lx,l87,1);l4 l36(&lx,(lu lb* )l92,1);l118(l87,&lx);l34(lo
=0;lo<1000;lo++){l117(&l65);le((lo&1)!=0)l36(&l65,(lu lb* )l92,l90);
l4 l36(&l65,l87,16);le((lo%3)!=0)l36(&l65,(lu lb* )l91,l209);le((lo%7
)!=0)l36(&l65,(lu lb* )l92,l90);le((lo&1)!=0)l36(&l65,l87,16);l4 l36(
&l65,(lu lb* )l92,l90);l118(l87,&l65);}lk l87;}



#ifdef CRYPTO_ON
#define l20( l99, l238) (( lm)(( l99) + ( l238)))
#define l187( l99) ( l20(( l99),1))
ld l96{lm l7[16];};lq l191(lb l144[64],lu lm l7[16]);lq l393(ld l96*
lc,lu lb*l207,lb*lf,lm l76);lq l301(ld l96*lc,lu lb*l54);lq l264(ld
l96*lc,lu lb*l241);
#endif
#ifdef CRYPTO_ON
#define l22( l99, lf) ( ROTL32( l99, lf))
#define l21( l99, l238) (( l99) ^ ( l238))
#define l332( l114, l99) ((( lm  *  )( l114))[0] = l99)
#define l56( l114) ((( lm  *  )( l114))[0])
lq l191(lb l144[64],lu lm l7[16]){lm lc[16];l23 lo;l34(lo=0;lo<16;++
lo)lc[lo]=l7[lo];l34(lo=20;lo>0;lo-=2){lc[4]=l21(lc[4],l22(l20(lc[0],
lc[12]),7));lc[8]=l21(lc[8],l22(l20(lc[4],lc[0]),9));lc[12]=l21(lc[12
],l22(l20(lc[8],lc[4]),13));lc[0]=l21(lc[0],l22(l20(lc[12],lc[8]),18));
lc[9]=l21(lc[9],l22(l20(lc[5],lc[1]),7));lc[13]=l21(lc[13],l22(l20(lc
[9],lc[5]),9));lc[1]=l21(lc[1],l22(l20(lc[13],lc[9]),13));lc[5]=l21(
lc[5],l22(l20(lc[1],lc[13]),18));lc[14]=l21(lc[14],l22(l20(lc[10],lc[
6]),7));lc[2]=l21(lc[2],l22(l20(lc[14],lc[10]),9));lc[6]=l21(lc[6],
l22(l20(lc[2],lc[14]),13));lc[10]=l21(lc[10],l22(l20(lc[6],lc[2]),18));
lc[3]=l21(lc[3],l22(l20(lc[15],lc[11]),7));lc[7]=l21(lc[7],l22(l20(lc
[3],lc[15]),9));lc[11]=l21(lc[11],l22(l20(lc[7],lc[3]),13));lc[15]=
l21(lc[15],l22(l20(lc[11],lc[7]),18));lc[1]=l21(lc[1],l22(l20(lc[0],
lc[3]),7));lc[2]=l21(lc[2],l22(l20(lc[1],lc[0]),9));lc[3]=l21(lc[3],
l22(l20(lc[2],lc[1]),13));lc[0]=l21(lc[0],l22(l20(lc[3],lc[2]),18));
lc[6]=l21(lc[6],l22(l20(lc[5],lc[4]),7));lc[7]=l21(lc[7],l22(l20(lc[6
],lc[5]),9));lc[4]=l21(lc[4],l22(l20(lc[7],lc[6]),13));lc[5]=l21(lc[5
],l22(l20(lc[4],lc[7]),18));lc[11]=l21(lc[11],l22(l20(lc[10],lc[9]),7
));lc[8]=l21(lc[8],l22(l20(lc[11],lc[10]),9));lc[9]=l21(lc[9],l22(l20
(lc[8],lc[11]),13));lc[10]=l21(lc[10],l22(l20(lc[9],lc[8]),18));lc[12
]=l21(lc[12],l22(l20(lc[15],lc[14]),7));lc[13]=l21(lc[13],l22(l20(lc[
12],lc[15]),9));lc[14]=l21(lc[14],l22(l20(lc[13],lc[12]),13));lc[15]=
l21(lc[15],l22(l20(lc[14],lc[13]),18));}l34(lo=0;lo<16;++lo)lc[lo]=
l20(lc[lo],l7[lo]);l34(lo=0;lo<16;++lo)l332(l144+4*lo,lc[lo]);}l15 lu
l31*l210="\x65\x78\x70\x61\x6e\x64\x20\x33\x32\x2d\x62\x79\x74\x65"
"\x20\x6b";lq l301(ld l96*lc,lu lb*l54){lc->l7[1]=l56(l54+0);lc->l7[2
]=l56(l54+4);lc->l7[3]=l56(l54+8);lc->l7[4]=l56(l54+12);lc->l7[11]=
l56(l54+16);lc->l7[12]=l56(l54+20);lc->l7[13]=l56(l54+24);lc->l7[14]=
l56(l54+28);lc->l7[0]=l56(l210+0);lc->l7[5]=l56(l210+4);lc->l7[10]=
l56(l210+8);lc->l7[15]=l56(l210+12);}lq l264(ld l96*lc,lu lb*l241){lc
->l7[6]=l56(l241+0);lc->l7[7]=l56(l241+4);lc->l7[8]=0;lc->l7[9]=0;}lq
l393(ld l96*lc,lu lb*l207,lb*lf,lm l76){lb l144[64];l225 l23 lo;le(!
l76)lk;l34(;;){l191(l144,lc->l7);lc->l7[8]=l187(lc->l7[8]);le(!lc->l7
[8]){lc->l7[9]=l187(lc->l7[9]);}le(l76<=64){l34(lo=0;lo<l76;++lo)lf[
lo]=l207[lo]^l144[lo];lk;}l34(lo=0;lo<64;++lo)lf[lo]=l207[lo]^l144[lo
];l76-=64;lf+=64;l207+=64;}}
#endif
#ifdef CRYPTO_ON
ld l59{lb l43[64];lm l44;lb l63;ld l96 l73;};lq l371(ld l59*l18,ld l96
 *l316);lq l193(ld l59*l18,lu lb*l109);lq l206(ld l59*l18,lu lb*l296);
lq l151(ld l59*l18,lu lb*l124,lb*l71,lm l17);
#else
ld l59{lm l44;};
#endif
lm l161(lb*l122,lm l320,lm l75);
#ifdef CRYPTO_ON
lq l371(ld l59*l18,ld l96*l316){l18->l73= *l316;l18->l63=0;l18->l44=0
;}lq l193(ld l59*l18,lu lb*l109){l301(&l18->l73,l109);}lq l206(ld l59
 *l18,lu lb*l296){l264(&l18->l73,l296);l18->l63=0;l18->l44=0;}lq l151
(ld l59*l18,lu lb*l124,lb*l71,lm l17){l225 l23 lo;le(l18->l63){lb*lr=
l18->l43+64-l18->l63;le(l17>=l18->l63){l17-=l18->l63;l34(lo=0;lo<l18
->l63;++lo)l71[lo]=l124[lo]^lr[lo];l124+=l18->l63;l71+=l18->l63;l18->
l63=0;}l4{l18->l63-=l17;l34(lo=0;lo<l17;++lo)l71[lo]=l124[lo]^lr[lo];
l17=0;}}le(!l17)lk;l34(;;){l191((lb* )l18->l43,l18->l73.l7);l18->l73.
l7[8]=l187(l18->l73.l7[8]);le(!l18->l73.l7[8])l18->l73.l7[9]=l187(l18
->l73.l7[9]);le(l17<=64){l34(lo=0;lo<l17;++lo)l71[lo]=l124[lo]^l18->
l43[lo];l18->l63=64-l17;lk;}l34(lo=0;lo<64;++lo)l71[lo]=l124[lo]^l18
->l43[lo];l17-=64;l124+=64;l71+=64;}}
#endif
l15
#ifdef ARDUINO
__flash
#endif
lu lm l258[256]={0x00000000,0x77073096,0xee0e612c,0x990951ba,
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
l161(lb*l122,lm l320,lm l75){l78(l320--)
#ifdef ARDUINO
#ifdef pgm_read_dword_far
l75=pgm_read_dword_far(l258+((l75^ *l122++)&0xff))^(l75>>8);
#else
l75=pgm_read_dword(l258+((l75^ *l122++)&0xff))^(l75>>8);
#endif
#else
l75=l258[(l75^ *l122++)&0xff]^(l75>>8);
#endif
lk l75^0xffffffff;}
lb*l325(lu l77*l92,lu l77*l286);l53 l308(lq);lm l257(lq);
#pragma pack(push, 1)
ld l217{l107{ld{lb l138;lb l43[15];}ly;l53 lp[2];}ln;};ld l318{lb l43
[16];};ld l370{l107{ld{ld l217 l48;ld l318 l185;lb l243[8];lb l349[16
];lb l348[8];lb l364[4];}ly;l53 l311[8];lm l329[17];}ln;};l27 l503{
l457=0,l451=1,l444=2,l468};ld l472{l19 l435:3;l19 l456:1;l19 l500:1;
l19 l442:10;l19 l477:1;};ld l128{l19 l378;lm l367;lm l347;lm l44;};ld
l215{lb l510;lb l146[32];lm l126[4];lb l44;};
#pragma pack(pop)
ld l88{ld l59 l89;ld l370 l29;};lq l298(ld l88*l12,lu l31*l104,lu l31
 *l269);l13 l261(ld l88*l12,lm l294,lu lb*l109);l13 l313(ld l88*l12,
lu lb*l145,lb*l71);lq l295(ld l88*l12,ld l128*l229);l53 l308(lq){l53
l38;l38=l319(); * ((lm* )(&l38)+1)=l319();lk l38;}lm l257(lq){lm l38;
l38=l319();lk l38;}l13 l420(lu lb*l104,lb l375,ld l318*l109){le(l375
!=6)lk lt;le(l416(l104,"\x76\x61\x6c\x65\x72\x61",6))lk lt;l30(l109->
l43,"\x50\x61\x73\x73\x77\x6f\x72\x64\x46\x6f\x72\x56\x61\x6c\x65\x72"
,16);lk lz;}lq l354(ld l217*l247,lu l31*l104){lb l135[15]={0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0};l23 l49=l204(l104);le(l49>15)l49=15;l247->ln.ly.
l138=l49;l30(l247->ln.ly.l43,l104,l49);l30(l247->ln.ly.l43+l49,l135,
15-l49);}lq l298(ld l88*l12,lu l31*l104,lu l31*l269){l354(&l12->l29.
ln.ly.l48,l104);l30(l12->l29.ln.ly.l185.l43,l325(l269,l104),16);
#ifndef CRYPTO_ON
l12->l29.ln.ly.l48.ln.ly.l138|=0x80;
#endif
}l13 l261(ld l88*l12,lm l294,lu lb*l109){l31*l307="\x79\x62\x6e\x64"
"\x72\x66\x67\x38\x65\x6a\x6b\x6d\x63\x70\x71\x78\x6f\x74\x31\x75\x77"
"\x69\x73\x7a\x61\x33\x34\x35\x68\x37\x36\x39";lb*l76=l12->l29.ln.ly.
l185.l43;l23 l24=0;l23 l172=3;l23 lo;l383(l76,0,16);l34(lo=0;lo<26;lo
++){l31*l114;lb lg;le(!l109[lo])lk lt;l114=l497(l307,l109[lo]);le(!
l114)lk lt;lg=l114-l307;le(l172<0){l76[l24++]|=(lb)(lg>>(-l172));le(
l24==16)l14;l172+=8;}l76[l24]|=(lb)((lg<<l172)&0xff);l172-=5;}l12->
l29.ln.ly.l48.ln.ly.l138=15;l12->l29.ln.ly.l48.ln.ly.l43[0]=0;l12->
l29.ln.ly.l48.ln.ly.l43[1]=l76[0];l12->l29.ln.ly.l48.ln.ly.l43[2]=l76
[1];l30(l12->l29.ln.ly.l48.ln.ly.l43+3,&l294,4);l12->l29.ln.ly.l48.ln
.lp[1]=0;
#ifndef CRYPTO_ON
l12->l29.ln.ly.l48.ln.ly.l138|=0x80;
#endif
lk lz;}lb l357(lm l10){lb l98= * ((lb* )&l10+0)%8;lb l52= * ((lb* )&
l10+1)%7;lb l45= * ((lb* )&l10+2)%6;lb l41= * ((lb* )&l10+3)%5;le(l52
==l98)l52++;le(l52>=8)l52-=8;l78(1){le(l45==l98)l45++;l4{le(l45==l52)l45
++;l4 l14;}le(l45>=8)l45-=8;}l78(1){le(l41==l98)l41++;l4{le(l41==l52)l41
++;l4{le(l41==l45)l41++;l4 l14;}}le(l41>=8)l41-=8;}lk(1<<l98)+(1<<l52
)+(1<<l45)+(1<<l41);}l19 l380(lm l10){lb l98= * ((lb* )&l10+0)%16;lb
l52= * ((lb* )&l10+1)%15;lb l45= * ((lb* )&l10+2)%14;lb l41= * ((lb* )&
l10+3)%13;le(l52==l98)l52++;le(l52>=16)l52-=16;l78(1){le(l45==l98)l45
++;l4{le(l45==l52)l45++;l4 l14;}le(l45>=16)l45-=16;}l78(1){le(l41==
l98)l41++;l4{le(l41==l52)l41++;l4{le(l41==l45)l41++;l4 l14;}}le(l41>=
16)l41-=16;}lk(1<<l98)+(1<<l52)+(1<<l45)+(1<<l41);}l13 l313(ld l88*
l12,lu lb*l145,lb*l71){l53 l282;ld l102 l81;l53 l216[2];l107{l53 l310
[2];lm l389[17];}ln;l13 l287=lt;l23 lo;l19 l240;lb*l201;l23 l54;
#ifndef CRYPTO_ON
l12->l29.ln.ly.l48.ln.ly.l138&=0x7f;
#endif
l30(&l282,l145,8);l30(l12->l29.ln.ly.l243,l145+16,8);l34(lo=0;lo<256;
lo++){l13 l123;lb l246;lb*l188;lb*l208;lb*l189;lu lb*l200;l23 l250; *
((lb* )&l12->l29.ln.ly.l243)=lo;l117(&l81);l36(&l81,l12->l29.ln.ly.
l48.ln.ly.l43,l12->l29.ln.ly.l48.ln.ly.l138);l36(&l81,l12->l29.ln.ly.
l185.l43,16+8);l118((lb* )l216,&l81);l12->l29.ln.l311[5]=l282^l216[0]
;l117(&l81);l36(&l81,l12->l29.ln.ly.l243,8+8);l118((lb* )ln.l310,&l81
);l123=lt;l246=l357(ln.l389[0]);l188=(lb* )(l216+1);l208=l12->l29.ln.
ly.l349+8;l189=(lb* )(ln.l310+1);l200=l145+8;l34(l250=0;l250<8;l250++
){le(l246&0x01) *l208= *l188^ *l200;l4{le(( *l189^ *l188)== *l200) *
l208= *l189;l4{l123=lz;l14;}}l188++;l208++;l189++;l200++;l246>>=1;}le
(!l123){l287=lz;l14;}}le(!l287)lk lt;l12->l29.ln.l311[7]=l308();l30(
l71+16,l12->l29.ln.ly.l348,8);l117(&l81);l36(&l81,l12->l29.ln.ly.l185
.l43,16+8+16+8);l118(l71,&l81);l240=l380(l257());l12->l29.ln.l329[16]
=l257();l201=l12->l29.ln.ly.l364;l34(l54=0;l54<16;l54++){le(l240&0x01
){le( *l201==0) *l201=0xff;l71[l54]^= *l201++;}l240>>=1;}lk lz;}
#ifdef CRYPTO_ON
lq l295(ld l88*l12,ld l128*l229){l191((lb* )l12->l89.l73.l7,(lm* )&
l12->l29);l12->l89.l73.l7[8]=0;l12->l89.l73.l7[9]=0;l12->l89.l63=0;
l151(&l12->l89,(lb* )l229,(lb* )l229,l69(ld l128));}
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
#define l205 TX_BUF_SIZE - 22
l27 l475{l471=0,l443=1,l488=2,l512=3,l441=4,l485=5,l498=6,l434=7,l438
=100};l27 l162{l101=0,l479=1,l404=2,l467=3,l355=4,l464=5,l470=6,l448=
11,l469=12,l494=13,l425=21,l508=22,l396=23,l483=24,l458=25,l437=31,
l459=41,l419=42,l507=43,l428=44,l478=51,l433=52,l423=61,l505=71,l446=
100,l492=101,l499=102,l426=111,l410=112};l27 l436{l493=0,l408=1,l322=
2,l366=3,l356=4,l221=5,l268=6,l430=7,l484=8,l314=9,l417=10,l368=11,
l460=12,l333=13,l360=14,l482=15,l321=20,l403=21,l285=100,l413=101,
l462=103,l331=104,l390=105,l352=106,l337=200,l353=250};l27 l293{l277=
0,l302=1,l278=2,l262=3,l328=4,l312=5,l315=6,l183=7,l184=8,l227=9,l224
=10,l491=11,l330=12};ld l397{l107{ld{lb l453:2;lb l447:1;lb l465:1;lb
l473:1;lb l335:1;lb l292:1;lb l455:1;}ly;lb lp;}ln;};l237 l190 l60;
l27 l415{l487=0x00,l168=0x10,l136=0x20,l248=0x30,l323=0x40};ld l239{
lq*l113;l112( *l281)(lq*l304);l112( *l219)(lq*l304,lb*l122,l19 l17,
l13*l432);lq( *l274)(lq*l304);};ld l197{l107{l190 l25:56;ld{l53 l424:
56;l53 l111:8;}ly;}l11;l107{l13 l263;l77 l373;lb l154;l112 l402;l19
l342;l220 l399;lm l265;l303 l300;l179 l253;l31*l252;lb*l110;ld l239*
l51;ld{lb l180;lb l93;lb l198;}l42;}lw;};ld l231{l19 l159:10;l19 l365
:3;l19 l361:3;};ld l288{l60 l228;lm l182;ld l231 l290;};ld l8{ld l197
lp;lu l31*l230;l107{ld{lb l84:5;lb l178:1;lb l249:1;lb l139:1;}l32;ld
{lb l506:6;lb l119:2;}l115;}ln;ld l397 l176;};l15 l13 l211(ld l8*lj){
lk(lj->ln.l32.l84==l227)||(lj->ln.l32.l84==l224);}l15 l19 l213(ld l8*
lj){l130(lj->ln.l32.l84){l2 l277:l2 l302:l2 l278:lk 1;l2 l262:l2 l328
:lk 2;l2 l312:l2 l315:l2 l183:lk 4;l2 l184:lk l69(l179);l2 l227:le(!
lj->lp.lw.l252)lk 0;lk l204(lj->lp.lw.l252);l2 l224:le(!lj->lp.lw.
l110)lk 0;lk lj->lp.lw.l110[0]+(lj->lp.lw.l110[1]<<8);l203:lk 0;}}l15
l13 l267(ld l8*lj,l190 l10,l60 l3){le(!l3)l3=l64();l130(lj->ln.l32.
l84){l2 l277:le(l10)lj->lp.lw.l263=lz;l4 lj->lp.lw.l263=lt;lj->lp.l11
.l25=l3;lk lz;l2 l302:le((-0x80<=l10)&&(l10<=0x7f)){lj->lp.lw.l373=(
l77)l10;lj->lp.l11.l25=l3;lk lz;}l14;l2 l278:le((0<=l10)&&(l10<=0xff)){
lj->lp.lw.l154=(lb)l10;lj->lp.l11.l25=l3;lk lz;}l14;l2 l262:le((-
0x8000<=l10)&&(l10<=0x7fff)){lj->lp.lw.l402=(l112)l10;lj->lp.l11.l25=
l3;lk lz;}l14;l2 l328:le((0<=l10)&&(l10<=0xffff)){lj->lp.lw.l342=(l19
)l10;lj->lp.l11.l25=l3;lk lz;}l14;l2 l312:le((-0x80000000LL<=l10)&&(
l10<=0x7fffffff)){lj->lp.lw.l399=(l220)l10;lj->lp.l11.l25=l3;lk lz;}
l14;l2 l315:le((0<=l10)&&(l10<=0xffffffff)){lj->lp.lw.l265=(lm)l10;lj
->lp.l11.l25=l3;lk lz;}l14;l2 l183:lj->lp.lw.l300=(l303)l10;lj->lp.
l11.l25=l3;lk lz;l2 l184:lj->lp.lw.l253=(l179)l10;lj->lp.l11.l25=l3;
lk lz;l203:lk lt;}lk lt;}l15 l13 l401(ld l8*lj,l179 l10,l60 l3){le(!
l3)l3=l64();l130(lj->ln.l32.l84){l2 l183:lj->lp.lw.l300=(l303)l10;lj
->lp.l11.l25=l3;lk lz;l2 l184:lj->lp.lw.l253=l10;lj->lp.l11.l25=l3;lk
lz;}lk l267(lj,(l190)l10,l3);}l15 l13 l341(ld l8*lj,l77*l10,l60 l3){
le(!l3)l3=l64();lj->lp.l11.l25=l3;lj->lp.lw.l252=l10;lk lt;}l15 l13
l351(ld l8*lj,l60 l3){le(!l3)l3=l64();lj->lp.l11.l25=l3;lk lz;}l27
l376{l379=0,l338=1,l218=2};l237 lq( *l394)(l27 l376 l418,ld l8*lj,ld
l197*l495);
#ifdef ARDUINO
l237 lq( *l279)(lu __FlashStringHelper*l411,...);
#else
l237 lq( *l279)(lu l31*l411,...);
#endif
ld l256{l13( *l226)(lu l31*l431,l19 l486);l23( *l369)(lq*l122,l19 l17
);l13( *l169)(lu lq*l122,l19 l17);lq( *l358)(lq);lq( *l284)(lq);l13( *
l173)(lq);l13( *l384)(lq);};ld l147{lm l289;lu l31*l48;lu l31*l280;lu
l31*l317;l394 l175;l279 l33;ld l288*l150;l23 l385;};ld l1{l107{ld l88
l100;ld{ld l59 l166;lb l106[TX_BUF_SIZE];}ly;}ln;lb l26[RX_BUF_SIZE];
l19 l61;l19 l70;ld l59 l116;lb l146[32];lm l126;ld l147 l6;ld l256 l40
;lb l16;l60 l212;l60 l170;l60 l57;lb l83;lb l129;lb l133;l13 l142;l13
l152;l13 l199;ld l8 l5[1];};l27 l412{l85=0,l79=1,l346=2,l58=3,l234=4,
l158=5,l276,l299,l291,l259,};l15 lq l409(lb*l377,l31*l82){lu l77*l232
="\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39";l23 l24=0;l23 lo;l13 l233
;l34(lo=0;lo<4;lo++){lb l165=l377[lo];lb l131=l165%100;l82[l24]=l232[
l165/100];l233=lt;le(l82[l24]=='0')l233=lz;l4 l24++;l165=l131;l131=
l165%10;l82[l24]=l232[l165/10];le((!l233||l82[l24]!='0'))l24++;l82[
l24++]=l232[l131];l82[l24++]='.';}l82[--l24]=0;}l15 lq l273(ld l1*la,
l31*l82,lu l31* *l327){le(la->l126==0) *l327=la->l6.l317;l4{l409((lb*
)&la->l126,l82); *l327=l82;}}l15 lq l283(ld l1*la){
#ifdef CRYPTO_ON
l53 l72[8];ld l59*l160=&la->ln.l100.l89;lu l53 l135[8]={0,0,0,0,0,0,0
,0};l193(l160,(lb* )la->l146);l206(l160,(lb* )l135);l151(l160,(lb* )l135
,(lb* )l72,64);l30(la->l146+2,l72+4,30);l193(l160,(lb* )l72);l206(
l160,(lb* )l135);l72[4]=l72[1];l72[5]=l72[3];l72[6]=l72[0];l72[7]=l72
[2];l193(&la->l116,(lb* )(l72+4));l206(&la->l116,(lb* )l135);
#endif
la->ln.l100.l89.l44=0;la->l116.l44=0;}l15 lq l47(ld l1*la,l19 l17,l13
l334){le(!la->l199&&l334){la->l199=lz;la->l57=l64()+100;}la->l70+=l17
;}l15 lq l236(ld l1*la,l13 l344){le(!l344){le(la->l40.l173())lk;}le(
la->l70>2){l19 l66;l66=la->l70-2;la->ln.ly.l106[0]= * ((lb* )&l66+0);
la->ln.ly.l106[1]= * ((lb* )&l66+1);la->l116.l44=l161(la->ln.ly.l106+
2,l66,la->l116.l44);l30(la->ln.ly.l106+la->l70,&(la->l116.l44),4);la
->l70=l66+6;
#ifdef CRYPTO_ON
l151(&la->l116,la->ln.ly.l106,la->ln.ly.l106,la->l70);
#endif
le(!la->l40.l169(la->ln.ly.l106,la->l70))la->l6.l33(F("\x45\x72\x72"
"\x6f\x72\x20\x73\x65\x6e\x64\x69\x6e\x67\x20\x64\x61\x74\x61\x21\n"));
la->l70=2;la->l199=lt;}}l15 lb*l37(ld l1*la,l19 l17){le(l17>((
TX_BUF_SIZE-4)-la->l70))l236(la,lz);lk la->ln.ly.l106+la->l70;}l15 l13
l174(ld l1*la,l60 l255){lk((l255&0xffffffffffff0000LL)!=la->l170);}
l15 lq l163(ld l1*la,l60 l255){lb*ll;la->l170=l255&
0xffffffffffff0000LL;ll=l37(la,8);ll[0]=0x86;ll[1]=l322;l30(ll+2,(lb*
)&la->l170+2,6);l47(la,8,lt);}l15 l13 l362(ld l1*la,lb l202){lb*ll;
l220 ls;ld l8*l0=la->l5+l202;le(l0->ln.l32.l84==l330)l0->lp.lw.l265=0
;ls=l204(l0->l230);le(ls>64)lk lt;ll=l37(la,5+ls);ll[0]=(lb)(0x83+ls);
ll[1]=l314;ll[2]=l202;ll[3]=l0->ln.l32.l84;ll[4]=l0->l176.ln.lp;l30(
ll+5,l0->l230,ls);l47(la,ls+5,lt);lk lz;}l15 lq l363(ld l1*la,ld l231
l271,lb l202){lb*ll=l37(la,5);ll[0]=(lb)0x83;ll[1]=l360;ll[2]= * ((lb
 * )&l271+0);ll[3]= * ((lb* )&l271+1);ll[4]=l202;l47(la,5,lt);}l15 lq
l223(ld l1*la,ld l8*lj,l27 l162 l62,l19 l17,l13 l97){lb*ll;le(l62==
l101){l23 l24;l112 l49=4+l17;le((l49<127)&&(!l97)){ll=l37(la,6+l17);
ll[0]=l49|0x80;l24=1;}l4{ll=l37(la,8+l17);ll[0]=0xff;ll[1]=(lb)l49;ll
[2]=(lb)(l49>>8);le(l97)ll[2]|=l168;l24=3;}ll[l24++]=l221;ll[l24++]=
l101;ll[l24++]=lj-la->l5;ll[l24++]=(lb)lj->lp.l11.l25;ll[l24++]= * ((
lb* )&lj->lp+1);le(!l97){lb*lr=l211(lj)?lj->lp.lw.l110:&lj->lp.lw.
l154;l30(ll+l24,lr,l17);}l47(la,l24+l17,l97?lt:lz);}l4{ll=l37(la,4);
ll[0]=0x82;ll[1]=l221;ll[2]=l62;ll[3]=lj-la->l5;l47(la,4,lz);}}l15 lq
l270(ld l1*la,ld l8*lj,l19 l17,l13 l97){lb*ll;l23 l24;l112 l49=3+l17;
le((l49<127)&&(!l97)){ll=l37(la,4+l17);ll[0]=(lb)(0x03+l17);l24=1;}l4
{ll=l37(la,6+l17);ll[0]=0x7f;ll[1]=(lb)l49;ll[2]=(lb)(l49>>8);le(l97)ll
[2]|=l168;l24=3;}ll[l24++]=lj-la->l5;ll[l24++]=(lb)lj->lp.l11.l25;ll[
l24++]= * ((lb* )&lj->lp+1);le(!l97){lb*lr=l211(lj)?lj->lp.lw.l110:&
lj->lp.lw.l154;l30(ll+l24,lr,l17);}l47(la,l24+l17,l97?lt:lz);}l15 l13
l195(ld l1*la,ld l8*lj,l27 l415 l80){l112 ls;lb*ll;l13 l134;l23 l35;
l130(l80){l2 l136:{ls=lj->lp.lw.l51->l281(lj->lp.lw.l51->l113);le(ls
==0){lj->lp.lw.l51->l219(lj->lp.lw.l51->l113,0,0,&l134);lk lz;}le(ls>
0){le(ls>l205)ls=l205;l35=(lj->ln.l32.l139)?5:4;ll=l37(la,l35+ls);ls=
lj->lp.lw.l51->l219(lj->lp.lw.l51->l113,ll+l35,ls,&l134);le((ls==0)&&
(!l134))lk lz;}l4 ll=l37(la,5);le(ls<0){ls=0;l80=l248;l14;}le(l134)l80
=l323;l4 l80=l136;l14;}l2 l168:{ls=lj->lp.lw.l51->l281(lj->lp.lw.l51
->l113);le(ls>=0){le(l174(la,lj->lp.l11.l25))l163(la,lj->lp.l11.l25);
le(ls>l205)ls=l205;l35=(lj->ln.l32.l139)?8:6;ll=l37(la,l35+ls);ls=lj
->lp.lw.l51->l219(lj->lp.lw.l51->l113,ll+l35,ls,&l134);}le(ls<0){le(
lj->ln.l32.l139)l223(la,lj,l404,0,lt);lj->ln.l115.l119=0;lk lt;}l4{le
(lj->ln.l32.l139)l223(la,lj,l101,ls,lz);l4 l270(la,lj,ls,lz);le(!l134
)lk lz;ll=l37(la,5);ls=0;l80=l323;}l14;}l2 l248:ll=l37(la,5);ls=0;l14
;l203:lk lt;}ls++;le(lj->ln.l32.l249){ll[0]=0x7f;ll[1]=(lb)ls;ll[2]=
l80+ * ((lb* )&ls+1);ll[3]=lj-la->l5;l47(la,3+ls,(l80==l136)?lt:lz);}
l4{ll[0]=0xff;ll[1]=(lb)ls;ll[2]=l80+ * ((lb* )&ls+1);ll[3]=l221;ll[4
]=lj-la->l5;l47(la,4+ls,(l80==l136)?lt:lz);}le(l80!=l136)lj->ln.l115.
l119=0;lk lz;}l15 lq l266(ld l1*la,ld l8*lj){lb l222;ld l288*l148;le(
(!lj->ln.l32.l178)&&(!la->l133)){l222=(lb)lj->lp.l11.ly.l111;le(l222
==255)lk;l148=la->l6.l150+l222;le(l148->l182){le(lj->lp.l11.l25>=l148
->l228){l53 l391=lj->lp.l11.l25%l148->l182;l148->l228=lj->lp.l11.l25+
l148->l182-l391;}l4 lk;}}le(lj->l176.ln.ly.l292){le(lj->ln.l115.l119){
lj->lp.lw.l51->l274(lj->lp.lw.l51->l113);l195(la,lj,l248);}lj->ln.l32
.l249=1;l195(la,lj,l168);lk;}le(l174(la,lj->lp.l11.l25))l163(la,lj->
lp.l11.l25);l270(la,lj,l213(lj),lt);}l15 lq l275(ld l1*la,ld l8*l86,
lu l31*l127,l60 l3){lb l9;l220 ls;lb*ll;l9=l86-la->l5;le(la->l5[l9].
lp.lw.l42.l198)lk;le(la->l5[l9].lp.l11.ly.l111!=255){lb l141=la->l133
;le(l141){l78(la->l5[l141].lp.lw.l42.l93)l141=la->l5[l141].lp.lw.l42.
l93;la->l5[l141].lp.lw.l42.l93=l9;}l4 la->l133=l9;la->l5[l9].lp.lw.
l42.l180=l141;la->l5[l9].lp.lw.l42.l93=0;}la->l5[l9].lp.lw.l42.l198=1
;le(l174(la,l3))l163(la,l3);ls=l204(l127)+3;le(ls>127){ll=(lb* )l37(
la,4+ls);ll[0]=0xff;ll[1]= * ((lb* )(&ls)+0);ll[2]= * ((lb* )(&ls)+1);
ll[3]=l321;ll[4]=l9;ll[5]=(lb)l3;ll[6]= * ((lb* )&l3+1);l30(ll+7,l127
,ls-3);l47(la,4+ls,lt);}l4{ll=(lb* )l37(la,2+ls);ll[0]=0x80+ls;ll[1]=
l321;ll[2]=l9;ll[3]=(lb)l3;ll[4]= * ((lb* )&l3+1);l30(ll+5,l127,ls-3);
l47(la,2+ls,lt);}}l15 lq l326(ld l1*la,ld l8*l86){lb l9;lb*ll;l9=l86-
la->l5;le(!la->l5[l9].lp.lw.l42.l198)lk;le(la->l5[l9].lp.l11.ly.l111
!=255){le(la->l5[l9].lp.lw.l42.l180)la->l5[la->l5[l9].lp.lw.l42.l180]
.lp.lw.l42.l93=la->l5[l9].lp.lw.l42.l93;l4 la->l133=la->l5[l9].lp.lw.
l42.l93;le(la->l5[l9].lp.lw.l42.l93)la->l5[la->l5[l9].lp.lw.l42.l93].
lp.lw.l42.l180=la->l5[l9].lp.lw.l42.l180;}la->l5[l9].lp.lw.l42.l198=0
;ll=(lb* )l37(la,3);ll[0]=0x81;ll[1]=l403;ll[2]=l9;l47(la,3,lz);}l15
lq l414(ld l1*la,ld l8*lj,l27 l162 l62){l19 ls;le((lj->l176.ln.ly.
l292)&&(l62==l101)){le(lj->ln.l115.l119)l62=l355;l4{lj->ln.l32.l139=1
;l195(la,lj,l168);lk;}}ls=0;le(l62==l101){le(l174(la,lj->lp.l11.l25))l163
(la,lj->lp.l11.l25);ls=l213(lj);}l223(la,lj,l62,ls,lt);}l15 lq l339(
ld l1*la,ld l8*lj,l27 l162 l62){lb*ll;le(l62==l101){le(l174(la,lj->lp
.l11.l25))l163(la,lj->lp.l11.l25);ll=l37(la,6);ll[0]=0x84;ll[1]=l268;
ll[2]=l101;ll[3]=lj-la->l5;ll[4]=(lb)lj->lp.l11.l25;ll[5]=(lb)(lj->lp
.l11.l25>>8);l47(la,6,lz);}l4{ll=l37(la,4);ll[0]=0x82;ll[1]=l268;ll[2
]=l62;ll[3]=lj-la->l5;l47(la,4,lz);}}l15 lq l336(ld l1*la,lb l400){lb
 *ll=l37(la,3);ll[0]=0x81;ll[1]=l368;ll[2]=l400;l47(la,3,lz);}
#if ( RX_BUF_SIZE < 4096)
l15 lq l407(ld l1*la,l19 l17){lb*ll=l37(la,4);ll[0]=0x82;ll[1]=l333;
ll[2]=(lb)l17;ll[3]=(lb)(l17>>8);l47(la,4,lt);}
#endif
l15 lq l386(ld l1*la,ld l147*l143,ld l256*l245){la->l6= *l143;la->l40
= *l245;la->l70=2;la->l83=1;la->l129=0;la->l212=0;la->l16=l85;la->l61
=0;la->l142=lz;la->l152=lt;la->l133=0;la->l57=l64();}l15 ld l8*l350(
ld l1*la,lu l77*l254,l27 l293 l155,lb l242,l19 l235,ld l239*l186){lm
l125;ld l8*l0=la->l5+la->l83++;l107{ld l231 l103;l19 l395;}ln;ln.l395
=l235;le((lb* )l0>=(lb* )la->l6.l150){la->l6.l33(F("\x49\x6e\x63\x72"
"\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43\x4f"
"\x55\x4e\x54\x5f\x53\x49\x47\x4e\x41\x4c\x53\x20\x21\x21\x21\n"));
l78(1);}l0->l230=l254;le(l155==l184){le(l69(l179)==4)l155=l183;}l0->
ln.l32.l84=l155;l0->ln.l32.l178=0;l0->ln.l32.l249=0;l0->ln.l32.l139=0
;l0->l176.ln.lp=l242;l0->lp.lw.l253=0;le(l186)l0->lp.lw.l51=l186;le(
ln.l103.l361){le(la->l129>=la->l6.l385){la->l6.l33(F("\x49\x6e\x63"
"\x72\x65\x61\x73\x65\x20\x74\x68\x65\x20\x76\x61\x6c\x75\x65\x20\x43"
"\x4f\x55\x4e\x54\x5f\x53\x54\x4f\x52\x45\x20\x21\x21\x21\n"));l78(1);
}l0->lp.l11.ly.l111=la->l129;la->l6.l150[la->l129].l290=ln.l103;la->
l6.l150[la->l129].l228=0;l130(ln.l103.l365){l2 0:l125=ln.l103.l159;
l14;l2 1:l125=ln.l103.l159*1000;l14;l2 2:l125=ln.l103.l159*1000*60;
l14;l2 3:l125=ln.l103.l159*1000*60*60;l14;l2 4:l125=ln.l103.l159*1000
 *60*60*24;l14;l203:l125=0;l14;}la->l6.l150[la->l129].l182=l125;la->
l129++;}l4 l0->lp.l11.ly.l111=255;lk l0;}l15 l13 l382(ld l1*la,l13*
l345){l23 l120;le(la->l16==l79){le(la->l6.l48)l298(&la->ln.l100,la->
l6.l48,la->l6.l280);l4{le(!l261(&la->ln.l100,la->l6.l289,(lb* )la->l6
.l280)){la->l6.l33(F("\x50\x61\x73\x73\x77\x6f\x72\x64\x20\x69\x73"
"\x20\x65\x72\x72\x6f\x72\x21\n"));la->l16=l85;lk lz;}}la->l6.l33(F(""
"\x57\x61\x69\x74\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2e\x2e"
"\x2e\n"));le(!la->l40.l226(la->l6.l317,4502)){la->l6.l33(F("\x4e\x6f"
"\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x77\x69\x74\x68\x20"
"\x74\x68\x65\x20\x73\x65\x72\x76\x69\x63\x65\n"));la->l57=l64()+2000
;lk lz;}la->l16=l276;}l120=la->l40.l369(la->l26+la->l61,RX_BUF_SIZE-
la->l61);le(l120<0)lk lt;le(la->l16==l276){le(!la->l40.l384())lk lz;
la->l6.l33(F("\x57\x61\x69\x74\x20\x61\x75\x74\x68\x6f\x72\x69\x7a"
"\x61\x74\x69\x6f\x6e\x2e\x2e\x2e\n"));la->l40.l169(&la->ln.l100.l29.
ln.ly.l48,l69(ld l217));la->l16=l299;}le((l120==0)&&(la->l142)){lk lz
;} *l345=lz;l130(la->l16){l2 l299:{lb ll[24+l69(ld l128)];ld l128 l121
;le(l120!=24)lk lt;le(!l313(&la->ln.l100,la->l26,ll))lk lt;l121.l378=
1;l121.l367=la->l6.l289;l121.l347=0xffffffffL;l121.l44=l161((lb* )&
l121,offsetof(ld l128,l44),0xffffffff);
#ifdef CRYPTO_ON
l295(&la->ln.l100,&l121);
#endif
l30(ll+24,&l121,l69(ld l128));le(!la->l40.l169(ll,l69(ll)))lk lt;la->
l40.l358();la->l16=l291;lk lz;}l2 l291:{lb l123;lu l31*l156;l31 l260[
12+3+1];le(l120!=l69(ld l215))lk lt;
#ifdef CRYPTO_ON
l151(&la->ln.l100.l89,la->l26,la->l26,l69(ld l215));
#endif
le(la->l26[offsetof(ld l215,l44)]!=(lb)l161(la->l26,offsetof(ld l215,
l44),0xffffffff))lk lt;l123=la->l26[0];la->l40.l284();le(l123!=l101){
l130(l123){l2 l410:la->l6.l33(F("\x54\x68\x65\x20\x73\x65\x72\x76\x69"
"\x63\x65\x20\x69\x73\x20\x62\x72\x6f\x6b\x65\x6e\n"));l14;l2 l396:la
->l57=l64()+10000;la->l6.l33(F("\x54\x68\x65\x20\x64\x65\x76\x69\x63"
"\x65\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65"
"\x64\n"));l14;}lk lt;}la->l126=la->l26[33]; * ((lb* )&la->l126+1)=la
->l26[34]; * ((lb* )&la->l126+2)=la->l26[35]; * ((lb* )&la->l126+3)=
la->l26[36];l273(la,l260,&l156);le(!la->l40.l226(l156,4503)){la->l6.
l33(F("\x4c\x6f\x73\x73\x20\x6f\x66\x20\x63\x6f\x6e\x6e\x65\x63\x74"
"\x69\x6f\x6e\n"));la->l16=l79;lk lz;}l30(la->l146,la->l26+1,32);l283
(la);le(!la->l40.l169(la->l146,8))lk lt;la->l16=l259;la->l61=0;la->l6
.l33(F("\x53\x65\x74\x74\x69\x6e\x67\x2e\x2e\x2e\n"));lk lz;}l2 l259:
l2 l58:{l23 l35=0;ld l59*l166=&la->ln.l100.l89;
#ifdef CRYPTO_ON
l151(l166,la->l26+la->l61,la->l26+la->l61,l120);
#endif
la->l61+=l120;l78(1){l23 l67;l23 l94;lm l324;l19 l66;l23 l55=la->l61-
l35;le(l55<6)l14;l66=la->l26[l35]+(la->l26[l35+1]<<8);le((l66+6)>l55){
le(l55==RX_BUF_SIZE){la->l6.l33(F("\x52\x65\x63\x65\x69\x76\x69\x6e"
"\x67\x20\x74\x6f\x6f\x20\x6d\x75\x63\x68\x20\x64\x61\x74\x61\x2c\x20"
"\x52\x58\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65\x20\x6d\x75"
"\x73\x74\x20\x6e\x6f\x74\x20\x62\x65\x20\x6c\x65\x73\x73\x20\x74\x68"
"\x61\x6e\x20\x25\x69\x20\x62\x79\x74\x65\x73\x2e\n"),l66+6);lk lt;}
l14;}le(la->l142){l30(&l324,la->l26+l35+2+l66,4);l166->l44=l161(la->
l26+l35+2,l66,l166->l44);le(l166->l44!=l324)lk lt;}l4 la->l142=lz;l67
=l35+2;l94=l67+l66;l35+=l66+6;l78(l67!=l94){l23 l398=l67;l23 l50;lb
l194;lb*l39;le(la->l40.l173()){l19 l131;l35=l67-2;l340(la->l26,la->
l26+l35,la->l61-l35);la->l61-=l35;l131=l94-l67;la->l26[0]= * ((lb* )&
l131);la->l26[1]= * ((lb* )&l131+1);la->l142=lt;lk lz;}l50=la->l26[
l67++]&0x7f;le(l50==0x7f){lb l177; * ((lb* )&l50+0)=la->l26[l67++];
l177=la->l26[l67++]; * ((lb* )&l50+1)=l177&0x0f;}le(la->l26[l398]&
0x80)l194=la->l26[l67++];l4 l194=0;l39=la->l26+l67;l67+=l50;le(l67>
l94)lk lt;l130(l194){l2 l408:{lb l9;l53 l359=0xffffffffffffffffLL;ld
l8*l0;l112 ls;ld l197 l38;le(l50<3)lk lt;l9=l39[0];le(l9>=la->l83)lk
lt;l0=la->l5+l9;ls=l50-3;le(l0->l176.ln.ly.l335){ls-=8;le(ls<0)lk lt;
l30(&l359,l39+l50-8,8);}le(!l211(l0))le(l213(l0)!=ls)lk lt;l38.l11.
l25=la->l212;l38.l11.l25|=l39[1];l38.l11.l25|=l39[2]<<8;le(l0->ln.l32
.l84==l227){lb*l94;lb l177;l38.lw.l110=l39+3;l94=l38.lw.l110+ls;l177=
 *l94; *l94=0;la->l6.l175(l218,l0,&l38); *l94=l177;}l4 le(l0->ln.l32.
l84==l224){l39[1]=(lb)ls;l39[2]=(lb)(ls>>8);l38.lw.l110=l39+3-2;la->
l6.l175(l218,l0,&l38);}l4{l30(&l38.lw.l154,l39+3,ls);la->l6.l175(l218
,l0,&l38);}l14;}l2 l322:{le(l50!=6)lk lt;l30(((lb* )&(la->l212))+2,
l39,6);l14;}l2 l366:{lb l9;ld l8*l0;le(l50!=1)lk lt;l9=l39[0];le(l9>=
la->l83)lk lt;l0=la->l5+l9;la->l6.l175(l379,l0,0);l14;}l2 l356:{lb l9
;l19 ls;ld l8*l0;ld l197 l38;le(l50<1)lk lt;l9=l39[0];le(l9>=la->l83)lk
lt;ls=l50-1;l0=la->l5+l9;le(!l211(l0))le(l213(l0)!=ls)lk lt;l30(&l38.
lw.l154,l39+1,ls);la->l6.l175(l338,l0,&l38);l14;}l2 l314:{le(l50!=2)lk
lt;le(l39[0]!=l101)lk lt;l14;}l2 l285:l2 l413:{lb l9;ld l8*l0;le(l50
!=1)lk lt;l9=l39[0];le(l9>=la->l83)lk lt;l0=la->l5+l9;le(l194==l285){
l0->ln.l32.l178=1;le(l9==0)la->l6.l33(F("\x65\x6e\x74\x65\x72\x65\x64"
"\x20\x66\x69\x72\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"),l39[0]);}l4
{l0->ln.l32.l178=0;le(l9==0)la->l6.l33(F("\x65\x78\x69\x74\x20\x6c"
"\x61\x73\x74\x20\x63\x6c\x69\x65\x6e\x74\n"),l39[0]);}l14;}l2 l352:{
l60 l137;le(l50!=8)lk lt;l30(&l137,l39,8);l381=l137-(l64()-l381);l14;
}l2 l331:l2 l390:l14;l2 l337:{le(!la->l152){l23 lo;
#if ( RX_BUF_SIZE < 4096)
l407(la,RX_BUF_SIZE);
#endif
l34(lo=1;lo<la->l83;lo++){l362(la,lo);le(la->l5[lo].lp.l11.ly.l111!=
255)l363(la,la->l6.l150[la->l5[lo].lp.l11.ly.l111].l290,lo);}l336(la,
0);}la->l6.l33(F("\x57\x6f\x72\x6b\x2e\x2e\x2e\n"));la->l16=l58;la->
l133=0;l14;}l203:lk lt;}}}le(l35){l340(la->l26,la->l26+l35,la->l61-
l35);la->l61-=l35;}}}lk lz;}l15 lq l192(ld l1*la){l23 lo;l34(lo=0;lo<
la->l83;lo++){ld l8*l0=la->l5+lo;le(l0->ln.l115.l119){l0->lp.lw.l51->
l274(l0->lp.lw.l51->l113);l0->ln.l115.l119=0;}l0->ln.l32.l178=0;}la->
l40.l284();la->l16=l79;la->l152=lt;la->l61=0;la->l142=lz;la->l70=2;la
->l170=la->l170-0x10000L;}l15 lq l374(ld l1*la,l19 l140){lb*ll=l37(la
,4);ll[0]=0x82;ll[1]=l353;ll[2]= * ((lb* )&l140);ll[3]= * ((lb* )&
l140+1);l47(la,4,lt);l236(la,lz);}l15 l27 l412 l392(ld l1*la){l60 l137
=l64();l60 l305=la->l57;l13 l387=lt;lb l272;le(la->l16==l79){le(la->
l57>l137)lk l79;}la->l57=0;l272=la->l16;le(!l382(la,&l387)){la->l6.
l33(F("\x44\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n"));l192(la);
le(!la->l57)la->l57=l137+2000;lk l158;}le(la->l16==l58){l13 l405=lt;
le(l272!=l58)lk l346;la->l57=l305;le(lz){l23 lo;l34(lo=0;lo<la->l83;
lo++){ld l8*l0=la->l5+lo;le(l0->ln.l115.l119){le(la->l40.l173())lk
l234;le(l195(la,l0,l136))l405=lz;}}}le(la->l199&&(l305<l137))l236(la,
lt);le(la->l40.l173())lk l234;lk l58;}lk l79;}l13 l440(ld l105*lj,
l190 l10,l153 l3){lk l267((ld l8* )lj,l10,l3);}l13 l427(ld l105*lj,
l179 l10,l153 l3){lk l401((ld l8* )lj,l10,l3);}l13 l504(ld l105*lj,
l77*l145,l153 l3){lk l341((ld l8* )lj,l145,l3);}l13 l463(ld l105*lj,
l153 l3){lk l351((ld l8* )lj,l3);}l13 l511(ld l68*la,ld l452*l143,ld
l476*l245){((ld l147* )l143)->l33(F("\x4d\x67\x74\x43\x6c\x69\x65\x6e"
"\x74\x20\x76\x31\x2e\x30\x2c\x20\x32\x30\x31\x37\x2f\x49\x49\x49\x2f"
"\x31\x35\n"));le(offsetof(ld l68,l5)!=offsetof(ld l1,l5)){l23 l343=
offsetof(ld l1,l5);((ld l147* )l143)->l33(F("\x49\x6e\x20\x74\x68\x65"
"\x20\x66\x69\x6c\x65\x20\"\x4d\x67\x74\x43\x6c\x69\x65\x6e\x74\x2e"
"\x68\"\x20\x69\x6e\x20\x6c\x69\x6e\x65\x20\"\x23\x64\x65\x66\x69\x6e"
"\x65\x20\x4d\x47\x54\x5f\x43\x4f\x4e\x53\x54\x41\x4e\x54\x20\x25\x69"
"\"\n\x79\x6f\x75\x20\x6e\x65\x65\x64\x20\x74\x6f\x20\x73\x65\x74\x20"
"\x74\x68\x65\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x69\x20\x21\x21\x21"
"\n"),(l23)(l69(la->l474)),(l23)l343);lk lt;}((ld l147* )l143)->l33(F
("\x49\x6e\x69\x74\n"));l386((ld l1* )la,(ld l147* )l143,(ld l256* )l245
);lk lz;}lq l496(ld l68*la){ld l1*lv=(ld l1* )la;le(lv->l16==l85){le(
lv->l152){lu l31*l156;l31 l260[12+3+1];lv->l6.l33(F("\x52\x65\x73\x74"
"\x61\x72\x74\x20\x73\x65\x73\x73\x69\x6f\x6e\n"));l273(lv,l260,&l156
);le(!lv->l40.l226(l156,4503)){lv->l6.l33(F("\x4e\x6f\x20\x63\x6f\x6e"
"\x6e\x65\x63\x74\x69\x6f\x6e\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20"
"\x73\x65\x72\x76\x69\x63\x65\n"));lv->l16=l79;lv->l152=lt;lv->l57=
l64()+2000;}l283(lv);le(!lv->l40.l169(lv->l146,8)){lv->l6.l33(F("\x44"
"\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x65\x64\n"));l192(lv);lv->l57=
l64()+2000;lk;}l4{lv->l16=l259;lv->l61=0;}}l4{lv->l16=l79;lv->l6.l33(
F("\x53\x74\x61\x72\x74\n"));}}}lq l445(ld l68*la,l19 l140){ld l1*lv=
(ld l1* )la;le((lv->l16!=l85)||(lv->l16!=l158)){le(lv->l16!=l79){le((
l140)&&(lv->l16==l58)){l153 l244;l374(lv,l140);l244=l64();lv->l57=
l244+1000;lv->l212=l244+(l140*1000);lv->l16=l158;}l4{l192(lv);lv->l16
=l85;}}lv->l6.l33(F("\x53\x74\x6f\x70\n"));}}l27 l108 l450(ld l68*la){
ld l1*lv=(ld l1* )la;le(lv->l16==l158){le(lv->l57<l64()){l192(lv);lv
->l16=l85;lv->l152=lz;}l4 lk(l27 l108)l158;}le(lv->l16==l85)lk(l27
l108)l85;lk(l27 l108)l392((ld l1* )la);}l27 l108 l422(ld l68*la){ld l1
 *lv=(ld l1* )la;le(lv->l16==l58){le(lv->l40.l173())lk(l27 l108)l234;
l4 lk(l27 l108)l58;}le(lv->l16==l85)lk(l27 l108)l85;lk(l27 l108)l79;}
lq l466(ld l68*la,ld l105*lj){ld l1*lv=(ld l1* )la;le(lv->l16!=l58)lk
;l266(lv,(ld l8* )lj);}lq l449(ld l68*la,ld l297*l86,lu l31*l127,l153
l3,...){l461 l214;ld l8*l171;ld l1*lv=(ld l1* )la;le(lv->l16!=l58)lk;
l275(lv,(ld l8* )l86,l127,l3);l421(l214,l3);l171=l372(l214,ld l8* );
l78(l171){l53 lo=(lb* )l171-(lb* )la->l5;le(lo%l69(ld l8))l14;le((lo<
0)||(lo>=(lv->l83*l69(ld l8))))l14;l266(lv,l171);l171=l372(l214,ld l8
 * );}l454(l214);l326(lv,(ld l8* )l86);}lq l439(ld l68*la,ld l297*l86
,lu l31*l127,l153 l3){ld l1*lv=(ld l1* )la;le(lv->l16!=l58)lk;l275(lv
,(ld l8* )l86,l127,l3);}lq l509(ld l68*la,ld l297*l86){ld l1*lv=(ld l1
 * )la;le(lv->l16!=l58)lk;l326(lv,(ld l8* )l86);}lq l429(ld l68*la,ld
l105*lj,l27 l406 l62){ld l1*lv=(ld l1* )la;le(lv->l16!=l58)lk;l414(lv
,(ld l8* )lj,(l27 l162)l62);}lq l490(ld l68*la,ld l105*lj,l27 l406 l62
){ld l1*lv=(ld l1* )la;le(lv->l16!=l58)lk;l339(lv,(ld l8* )lj,(l27
l162)l62);}ld l105*l480(ld l68*la,lu l77*l254,l27 l489 l155,lb l242,
l19 l235,ld l502*l186){lk(ld l105* )l350((ld l1* )la,l254,(l27 l293)l155
,l242,l235,(ld l239* )l186);}
