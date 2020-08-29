#include "crypto_encode_256x2.h"
#include <immintrin.h>
#include <stdint.h>

void PQCLEAN_NTRULPR761_AVX2_crypto_encode_256x2(unsigned char *s, const void *v) {
    __m256i a0 = _mm256_loadu_si256(0 + (__m256i *) v);
    __m256i a1 = _mm256_loadu_si256(1 + (__m256i *) v);
    __m256i a2 = _mm256_loadu_si256(2 + (__m256i *) v);
    __m256i a3 = _mm256_loadu_si256(3 + (__m256i *) v);
    __m256i a4 = _mm256_loadu_si256(4 + (__m256i *) v);
    __m256i a5 = _mm256_loadu_si256(5 + (__m256i *) v);
    __m256i a6 = _mm256_loadu_si256(6 + (__m256i *) v);
    __m256i a7 = _mm256_loadu_si256(7 + (__m256i *) v);
    __m256i bottom = _mm256_set1_epi8(1);
    __m256i zero = _mm256_setzero_si256();
    __m256i b0 = _mm256_cmpgt_epi8(a0 & bottom, zero);
    __m256i b1 = _mm256_cmpgt_epi8(a1 & bottom, zero);
    __m256i b2 = _mm256_cmpgt_epi8(a2 & bottom, zero);
    __m256i b3 = _mm256_cmpgt_epi8(a3 & bottom, zero);
    __m256i b4 = _mm256_cmpgt_epi8(a4 & bottom, zero);
    __m256i b5 = _mm256_cmpgt_epi8(a5 & bottom, zero);
    __m256i b6 = _mm256_cmpgt_epi8(a6 & bottom, zero);
    __m256i b7 = _mm256_cmpgt_epi8(a7 & bottom, zero);
    int32_t c0 = _mm256_movemask_epi8(b0);
    int32_t c1 = _mm256_movemask_epi8(b1);
    int32_t c2 = _mm256_movemask_epi8(b2);
    int32_t c3 = _mm256_movemask_epi8(b3);
    int32_t c4 = _mm256_movemask_epi8(b4);
    int32_t c5 = _mm256_movemask_epi8(b5);
    int32_t c6 = _mm256_movemask_epi8(b6);
    int32_t c7 = _mm256_movemask_epi8(b7);
    *s++ = c0;
    c0 >>= 8;
    *s++ = c0;
    c0 >>= 8;
    *s++ = c0;
    c0 >>= 8;
    *s++ = c0;
    *s++ = c1;
    c1 >>= 8;
    *s++ = c1;
    c1 >>= 8;
    *s++ = c1;
    c1 >>= 8;
    *s++ = c1;
    *s++ = c2;
    c2 >>= 8;
    *s++ = c2;
    c2 >>= 8;
    *s++ = c2;
    c2 >>= 8;
    *s++ = c2;
    *s++ = c3;
    c3 >>= 8;
    *s++ = c3;
    c3 >>= 8;
    *s++ = c3;
    c3 >>= 8;
    *s++ = c3;
    *s++ = c4;
    c4 >>= 8;
    *s++ = c4;
    c4 >>= 8;
    *s++ = c4;
    c4 >>= 8;
    *s++ = c4;
    *s++ = c5;
    c5 >>= 8;
    *s++ = c5;
    c5 >>= 8;
    *s++ = c5;
    c5 >>= 8;
    *s++ = c5;
    *s++ = c6;
    c6 >>= 8;
    *s++ = c6;
    c6 >>= 8;
    *s++ = c6;
    c6 >>= 8;
    *s++ = c6;
    *s++ = c7;
    c7 >>= 8;
    *s++ = c7;
    c7 >>= 8;
    *s++ = c7;
    c7 >>= 8;
    *s++ = c7;
}
