/******************************************************************************
*  Filename:       rf_patch_mce_wmbus_smode.h
*  Revised:        $Date: 2019-01-31 15:04:25 +0100 (Thu, 31 Jan 2019) $
*  Revision:       $Revision: 18842 $
*
*  Description: RF core patch for CC13x0 WMBUS S-Mode
*
*  Copyright (c) 2015-2019, Texas Instruments Incorporated
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
*  3) Neither the name of the ORGANIZATION nor the names of its contributors may
*     be used to endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

#ifndef _RF_PATCH_MCE_WMBUS_SMODE_H
#define _RF_PATCH_MCE_WMBUS_SMODE_H

#include <stdint.h>
#include "../inc/hw_types.h"

#ifndef MCE_PATCH_TYPE
#define MCE_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC static inline
#endif

#ifndef RFC_MCERAM_BASE
#define RFC_MCERAM_BASE 0x21008000
#endif

#ifndef MCE_PATCH_MODE
#define MCE_PATCH_MODE 0
#endif

MCE_PATCH_TYPE patchWmbusSmodeMce[512] = { 
   0x2fcf602e,
   0x030c3f9d,
   0x070c680a,
   0xff00003f,
   0x00000014,
   0x00000000,
   0x00000000,
   0x00070003,
   0x00003d1f,
   0x04000000,
   0x0000000f,
   0x000b0387,
   0x004340f4,
   0x80828000,
   0x00000670,
   0x0510091e,
   0x00050004,
   0x3e100200,
   0x00000061,
   0x3030002f,
   0x0000027f,
   0x00000000,
   0x0000aa00,
   0x72487220,
   0x7303a32d,
   0x72037305,
   0x73067304,
   0x73767204,
   0xc7c07276,
   0x00018001,
   0x90109001,
   0x90010801,
   0x720d720c,
   0xb0c0720e,
   0xb0f07100,
   0x7218a0c0,
   0x10208132,
   0x06703952,
   0x16300020,
   0x14011101,
   0x60636c01,
   0x60d76066,
   0x606362f6,
   0x60636063,
   0x12106064,
   0x730f7220,
   0x73117310,
   0x00108181,
   0xb0709180,
   0x60596043,
   0x605967ef,
   0x6791c030,
   0xc282c0e1,
   0x1820c470,
   0x6e236f13,
   0x16121611,
   0x7830686c,
   0x78409ab0,
   0x78509ac0,
   0x83009ad0,
   0xc4829ae0,
   0x1820c5a0,
   0x12034081,
   0x16126e23,
   0x6059687e,
   0x94908160,
   0x39808140,
   0x10012a70,
   0x84321611,
   0xc0f38444,
   0xc200c0f5,
   0x40a61c01,
   0x1c10c100,
   0x4c9e409c,
   0x18031013,
   0x1a131830,
   0x39121a10,
   0x60a66899,
   0x60a613f3,
   0x101513f3,
   0x1850c100,
   0x1a101a15,
   0x68a43914,
   0x7100b0d8,
   0xa0d8b108,
   0xb480b200,
   0xb013b003,
   0xb012b002,
   0xb0d07229,
   0xb1007100,
   0x92908140,
   0xb1007100,
   0x22f08140,
   0x13f044b6,
   0x40c21c03,
   0x94929293,
   0xb1007100,
   0x94949295,
   0xb1007100,
   0xa480b0d0,
   0xa0d17000,
   0x9760c030,
   0x9780c040,
   0xb0c1b0f1,
   0xb0f17100,
   0x7276a0c1,
   0xa002a003,
   0x730f7000,
   0xc0407310,
   0xc1006791,
   0x648291c0,
   0xb0f3b483,
   0xb484b0c3,
   0x91c0c000,
   0xb0d1b101,
   0x39858ad5,
   0x06153955,
   0x22308090,
   0x81a044ff,
   0x06100850,
   0x13f040f4,
   0x60f61211,
   0x13f11210,
   0x101b100a,
   0xb10192c0,
   0x92c17100,
   0x7100b101,
   0xa0d160ea,
   0xa0c3b101,
   0x605964c9,
   0xb016b006,
   0xb014b004,
   0xb012b002,
   0x78628400,
   0x81430420,
   0x2a733983,
   0xc1f29473,
   0x31621832,
   0x31511021,
   0x00200012,
   0x10309400,
   0x39301610,
   0x411f2210,
   0x31501220,
   0x31801003,
   0x93501630,
   0x12041202,
   0x41312273,
   0x97c08430,
   0x1a8287d2,
   0x97c08450,
   0x1a8487d4,
   0x22636133,
   0x8440413e,
   0x87d097c0,
   0x14021a80,
   0x97c08460,
   0x1a8087d0,
   0x614a1404,
   0x78718440,
   0x97c00410,
   0x1a4287d2,
   0x78718460,
   0x97c00410,
   0x1a4487d4,
   0x31543152,
   0x06333963,
   0x38321613,
   0x31823834,
   0x31843982,
   0x95720042,
   0x90307810,
   0x78209050,
   0x90609040,
   0x8ae2b205,
   0x93028303,
   0x9862e050,
   0x67919873,
   0xc00bc00c,
   0x31808140,
   0x39403980,
   0xc0f38141,
   0xc0140431,
   0xc0021441,
   0x69701412,
   0x847d3122,
   0x140dc010,
   0x142d312d,
   0x318e8ace,
   0x397e311e,
   0x31498ac9,
   0x39493979,
   0x109a3129,
   0xa04eb072,
   0xb011b06e,
   0x978ab06c,
   0xb7647276,
   0xc662a764,
   0xc04f9762,
   0x6677c028,
   0x22f18ab1,
   0x8ad14597,
   0x459722f1,
   0x710061f0,
   0xb760b073,
   0x220780b7,
   0xa76045ce,
   0x22f18ab1,
   0x223741a8,
   0xb11341a8,
   0x223080b0,
   0x61b645a3,
   0x41bb22e1,
   0x22508090,
   0xb0f541bb,
   0x22208210,
   0x97894197,
   0xa764b764,
   0x6197b0f6,
   0xb764978d,
   0xb0f6a764,
   0x8ad06197,
   0x41c722f0,
   0x41c72237,
   0xb113b075,
   0x223080b0,
   0xb08745c1,
   0x22d16197,
   0x809042ba,
   0x42ba2220,
   0x6197663a,
   0xa0e0978f,
   0xa0c2a0e3,
   0xb0f1a0c5,
   0xa0c6b0c1,
   0x97887100,
   0xb88fb0f1,
   0x85708961,
   0x95511801,
   0x8a718a60,
   0xa487a488,
   0x22e08ad0,
   0x821041e8,
   0x45822220,
   0xb04e7100,
   0xb074b06e,
   0x8a73b201,
   0x70008552,
   0xb0737100,
   0x80b7b760,
   0x460f2207,
   0x46252237,
   0x8ab1a760,
   0x420822e1,
   0x22508090,
   0xb0f54208,
   0x22208210,
   0x978d41f0,
   0xa764b764,
   0x61f0b0f6,
   0x42ba22d1,
   0x22208090,
   0x663a42ba,
   0x978f61f0,
   0xa0e3a0e0,
   0xa0c5a0c2,
   0xb0c1b0f1,
   0x7100a0c6,
   0xb0f19788,
   0x8961b88f,
   0x31808570,
   0x18013d80,
   0x8a609551,
   0xa1828a71,
   0x978f61e0,
   0xa0e3a0e0,
   0xa0c5a0c2,
   0xb0c1b0f1,
   0x7100a0c6,
   0xb0f19788,
   0x8961b88f,
   0x3d808570,
   0x95511801,
   0x8a918a80,
   0x61e0b182,
   0x22b08ab0,
   0x1e3b4640,
   0x62424675,
   0x46751e7b,
   0xb889c00b,
   0x31808940,
   0x16403d80,
   0x140c3d30,
   0x220080b0,
   0x7000424e,
   0x39838ab3,
   0x8ab106f3,
   0x0401cff0,
   0x1c1c3031,
   0x12004e6d,
   0x1c0c1810,
   0x80b04a6f,
   0x425f2200,
   0x10c27000,
   0x3c321612,
   0x83208ae1,
   0x42712210,
   0x93016273,
   0x9861d060,
   0xb0f26791,
   0x101c7000,
   0x100c625b,
   0x1821625b,
   0x14216267,
   0x161b6267,
   0xb0f6626b,
   0xb110b0f1,
   0xb0f5b113,
   0x720cb0f2,
   0x720e720d,
   0xb0e3b0e0,
   0x22f28ab2,
   0xb0c64288,
   0x628bb763,
   0x22f08ad0,
   0xb40542ab,
   0xb428a404,
   0xcaa0a429,
   0xcaa13180,
   0x94510001,
   0x8ad39461,
   0x39833183,
   0x31808410,
   0x31833980,
   0x94100030,
   0x31508400,
   0x8ad33950,
   0x06f33983,
   0x1834c1f4,
   0x31343184,
   0x94000040,
   0x22e2b089,
   0x8aca42b5,
   0x398a394a,
   0x978a312a,
   0xb0c6b0c5,
   0x8ab2b763,
   0x42b922d2,
   0x7000b0c2,
   0xa0e0b20f,
   0x978ea0e3,
   0xa764b764,
   0xb110b0f6,
   0x8210b113,
   0x42c322f0,
   0x8002b0f5,
   0xa006a004,
   0x7203a001,
   0xc0707204,
   0x71006791,
   0xb0f6b764,
   0xa20fb0c5,
   0xb0f57100,
   0x7810a0c5,
   0x90029030,
   0x90407820,
   0xb0729060,
   0x6677a20f,
   0xa764978a,
   0x6190b0f6,
   0x8180b88c,
   0x392489a4,
   0x00043184,
   0xc0809184,
   0x73766791,
   0x72487276,
   0x72027206,
   0x73057204,
   0x60597306,
   0x91b01200,
   0xc090b32d,
   0xb0f86791,
   0xb0f16504,
   0xb88eb0c1,
   0xe0a08a73,
   0x98729863,
   0x71006791,
   0xb0f1a0c1,
   0xb0c2b0f2,
   0x120ac00f,
   0x1a1f120f,
   0x12031204,
   0x39888ad8,
   0x06183958,
   0xb0f27100,
   0x8b10b88d,
   0x3d803180,
   0x6320100b,
   0x121a120b,
   0x16131a14,
   0xb0f27100,
   0x8b10b88d,
   0x3d803180,
   0x7100140b,
   0xb88db0f2,
   0x31808b10,
   0x140b3d80,
   0x7100100d,
   0xb88db0f2,
   0x31808b10,
   0x140b3d80,
   0x100c140d,
   0x4f3d22fd,
   0x120d10d0,
   0x7100180d,
   0xb88db0f2,
   0x31808b10,
   0x180b3d80,
   0x100e140c,
   0x4f4b22fc,
   0x120c10c0,
   0x7100180c,
   0xb88db0f2,
   0x31808b10,
   0x180b3d80,
   0x22fe140e,
   0x10e04f58,
   0x180e120e,
   0xb0f27100,
   0x8b10b88d,
   0x3d803180,
   0x7100180b,
   0xb88db0f2,
   0x31808b10,
   0x180b3d80,
   0x398b10b6,
   0x088b397b,
   0x161f919b,
   0x1e008150,
   0x1a104373,
   0x4f731cf0,
   0x6785637e,
   0x437d1e1a,
   0x431c1e4a,
   0xb0f27100,
   0x1614121a,
   0x63141613,
   0x9863e0b0,
   0x67919874,
   0xb0f2a0c2,
   0xc01a62e4,
   0x140d7880,
   0x1cec140e,
   0xc03a4b8d,
   0x1cdc10ec,
   0xc04a4b90,
   0x98507000,
   0x22008840,
   0xb8304792,
   0x00007000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0xc1020000,
   0xc0013162,
   0x1e008150,
   0x1a1043f7,
   0x102063f9,
   0x6f131a10,
   0x16116e23,
   0x6bf91612,
   0x00007000
};

PATCH_FUN_SPEC void rf_patch_mce_wmbus_smode(void)
{
#ifdef __PATCH_NO_UNROLLING
   uint32_t i;
   for (i = 0; i < 512; i++) {
      HWREG(RFC_MCERAM_BASE + 4 * i) = patchWmbusSmodeMce[i];
   }
#else
   const uint32_t *pS = patchWmbusSmodeMce;
   volatile unsigned long *pD = &HWREG(RFC_MCERAM_BASE);
   uint32_t t1, t2, t3, t4, t5, t6, t7, t8;
   uint32_t nIterations = 64;

   do {
      t1 = *pS++;
      t2 = *pS++;
      t3 = *pS++;
      t4 = *pS++;
      t5 = *pS++;
      t6 = *pS++;
      t7 = *pS++;
      t8 = *pS++;
      *pD++ = t1;
      *pD++ = t2;
      *pD++ = t3;
      *pD++ = t4;
      *pD++ = t5;
      *pD++ = t6;
      *pD++ = t7;
      *pD++ = t8;
   } while (--nIterations);
#endif
}

#endif
