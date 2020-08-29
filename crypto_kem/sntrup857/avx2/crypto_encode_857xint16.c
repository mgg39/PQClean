#include "crypto_encode_857xint16.h"


void PQCLEAN_SNTRUP857_AVX2_crypto_encode_857xint16(unsigned char *s, const void *v) {
    const uint16_t *x = v;
    int i;

    for (i = 0; i < 857; ++i) {
        uint16_t u = *x++;
        *s++ = u;
        *s++ = u >> 8;
    }
}
