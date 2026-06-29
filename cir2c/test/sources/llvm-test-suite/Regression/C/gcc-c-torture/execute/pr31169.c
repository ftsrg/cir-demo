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

extern void abort();

#define HOST_WIDE_INT long
#define HOST_BITS_PER_WIDE_INT (sizeof(long)*8)

struct tree_type
{
  unsigned int precision : 9;
};

int
sign_bit_p (struct tree_type *t, HOST_WIDE_INT val_hi, unsigned HOST_WIDE_INT val_lo)
{
  unsigned HOST_WIDE_INT mask_lo, lo;
  HOST_WIDE_INT mask_hi, hi;
  int width = t->precision;

  if (width > HOST_BITS_PER_WIDE_INT)
    {
      hi = (unsigned HOST_WIDE_INT) 1 << (width - HOST_BITS_PER_WIDE_INT - 1);
      lo = 0;

      mask_hi = ((unsigned HOST_WIDE_INT) -1
                 >> (2 * HOST_BITS_PER_WIDE_INT - width));
      mask_lo = -1;
    }
  else
    {
      hi = 0;
      lo = (unsigned HOST_WIDE_INT) 1 << (width - 1);

      mask_hi = 0;
      mask_lo = ((unsigned HOST_WIDE_INT) -1
                 >> (HOST_BITS_PER_WIDE_INT - width));
    }

  if ((val_hi & mask_hi) == hi
      && (val_lo & mask_lo) == lo)
    return 1;

  return 0;
}

int main()
{
  struct tree_type t;
  t.precision = 1;
  if (!sign_bit_p (&t, 0, -1))
    abort ();
  return 0;
}
