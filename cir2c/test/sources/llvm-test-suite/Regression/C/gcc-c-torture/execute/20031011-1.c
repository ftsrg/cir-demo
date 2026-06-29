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

/* Check that MAX_EXPR and MIN_EXPR are working properly.  */

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

extern void abort (void);

int main()
{
  int ll_bitsize, ll_bitpos;
  int rl_bitsize, rl_bitpos;
  int end_bit;

  ll_bitpos = 32;  ll_bitsize = 32;
  rl_bitpos = 0;   rl_bitsize = 32;

  end_bit = MAX (ll_bitpos + ll_bitsize, rl_bitpos + rl_bitsize);
  if (end_bit != 64)
    abort ();
  end_bit = MAX (rl_bitpos + rl_bitsize, ll_bitpos + ll_bitsize);
  if (end_bit != 64)
    abort ();
  end_bit = MIN (ll_bitpos + ll_bitsize, rl_bitpos + rl_bitsize);
  if (end_bit != 32)
    abort ();
  end_bit = MIN (rl_bitpos + rl_bitsize, ll_bitpos + ll_bitsize);
  if (end_bit != 32)
    abort ();
  return 0;
}
