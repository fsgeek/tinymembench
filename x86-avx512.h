/*
 * Copyright © 2020 Joel Luth <joelluth@gmail.com>
 * Based on code by Siarhei Siamashka <siarhei.siamashka@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __X86_AVX512_H__
#define __X86_AVX512_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    void aligned_block_copy_avx512(int64_t *__restrict dst,
                                   int64_t *__restrict src,
                                   size_t size);
    void aligned_block_copy_nt_avx512(int64_t *__restrict dst,
                                      int64_t *__restrict src,
                                      size_t size);

    void aligned_block_copy_pf32_avx512(int64_t *__restrict dst,
                                        int64_t *__restrict src,
                                        size_t size);
    void aligned_block_copy_pf64_avx512(int64_t *__restrict dst,
                                        int64_t *__restrict src,
                                        size_t size);

    void aligned_block_copy_nt_pf32_avx512(int64_t *__restrict dst,
                                           int64_t *__restrict src,
                                           size_t size);
    void aligned_block_copy_nt_pf64_avx512(int64_t *__restrict dst,
                                           int64_t *__restrict src,
                                           size_t size);

    void aligned_block_fill_avx512(int64_t *__restrict dst,
                                   int64_t *__restrict src,
                                   size_t size);

    void aligned_block_fill_nt_avx512(int64_t *__restrict dst,
                                      int64_t *__restrict src,
                                      size_t size);

#ifdef __cplusplus
}
#endif

#endif
