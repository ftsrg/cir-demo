/*
 * Copyright 2026 LLVM Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int32_t;
#else
typedef int int32_t;
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#else
typedef unsigned uint32_t;
#endif

#define __fake_const_swab32(x) ((uint32_t)(		      \
	(((uint32_t)(x) & (uint32_t)0x000000ffUL) << 24) |    \
	(((uint32_t)(x) & (uint32_t)0x0000ff00UL) <<  8) |    \
	(((uint32_t)(x) & (uint32_t)0x00ff0000UL) >>  8) |    \
	(( (int32_t)(x) &  (int32_t)0xff000000UL) >> 24)))

/* Previous version of bswap optimization failed to consider sign extension
   and as a result would replace an expression *not* doing a bswap by a
   bswap.  */

__attribute__ ((noinline, noclone)) uint32_t
fake_bswap32 (uint32_t in)
{
  return __fake_const_swab32 (in);
}

int
main(void)
{
  if (sizeof (int32_t) * __CHAR_BIT__ != 32)
    return 0;
  if (sizeof (uint32_t) * __CHAR_BIT__ != 32)
    return 0;
  if (fake_bswap32 (0x87654321) != 0xffffff87)
    __builtin_abort ();
  return 0;
}
