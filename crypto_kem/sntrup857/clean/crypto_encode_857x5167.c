#include "crypto_encode_857x5167.h"

/* auto-generated; do not edit */

#define int16 int16_t
#define uint16 uint16_t
#define uint32 uint32_t

void PQCLEAN_SNTRUP857_CLEAN_crypto_encode_857x5167(unsigned char *out, const void *v) {
    const int16 *R0 = v;
    /* XXX: caller could overlap R with input */
    uint16 R[429];
    long i;
    uint16 r0, r1;
    uint32 r2;

    for (i = 0; i < 428; ++i) {
        r0 = (R0[2 * i] + 2583) & 16383;
        r1 = (R0[2 * i + 1] + 2583) & 16383;
        r2 = r0 + r1 * (uint32)5167;
        *out++ = r2;
        r2 >>= 8;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    R[428] = (R0[856] + 2583) & 16383;

    for (i = 0; i < 214; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)408;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    R[214] = R[428];

    for (i = 0; i < 107; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)651;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    R[107] = R[214];

    for (i = 0; i < 53; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)1656;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    r0 = R[106];
    r1 = R[107];
    r2 = r0 + r1 * (uint32)1656;
    *out++ = r2;
    r2 >>= 8;
    *out++ = r2;
    r2 >>= 8;
    R[53] = r2;

    for (i = 0; i < 26; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)10713;
        *out++ = r2;
        r2 >>= 8;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    r0 = R[52];
    r1 = R[53];
    r2 = r0 + r1 * (uint32)10713;
    *out++ = r2;
    r2 >>= 8;
    R[26] = r2;

    for (i = 0; i < 13; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)1752;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    R[13] = R[26];

    for (i = 0; i < 7; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)11991;
        *out++ = r2;
        r2 >>= 8;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }

    for (i = 0; i < 3; ++i) {
        r0 = R[2 * i];
        r1 = R[2 * i + 1];
        r2 = r0 + r1 * (uint32)2194;
        *out++ = r2;
        r2 >>= 8;
        *out++ = r2;
        r2 >>= 8;
        R[i] = r2;
    }
    R[3] = R[6];

    r0 = R[0];
    r1 = R[1];
    r2 = r0 + r1 * (uint32)74;
    R[0] = r2;
    r0 = R[2];
    r1 = R[3];
    r2 = r0 + r1 * (uint32)74;
    *out++ = r2;
    r2 >>= 8;
    R[1] = r2;

    r0 = R[0];
    r1 = R[1];
    r2 = r0 + r1 * (uint32)5476;
    *out++ = r2;
    r2 >>= 8;
    R[0] = r2;

    r0 = R[0];
    *out++ = r0;
    r0 >>= 8;
    *out++ = r0; /*clang-analyzer-deadcode.DeadStores*/ /*r0 >>= 8;*/
}
