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

extern void abort (void);

int main()
{
#ifndef __SPU__
  /* The SPU single-precision floating point format does not support Inf.  */
  float fi = __builtin_inff();
#endif
  double di = __builtin_inf();
  long double li = __builtin_infl();

  float fh = __builtin_huge_valf();
  double dh = __builtin_huge_val();
  long double lh = __builtin_huge_vall();

#ifndef __SPU__
  if (fi + fi != fi)
    abort ();
#endif
  if (di + di != di)
    abort ();
  if (li + li != li)
    abort ();

#ifndef __SPU__
  if (fi != fh)
    abort ();
#endif
  if (di != dh)
    abort ();
  if (li != lh)
    abort ();

#ifndef __SPU__
  if (fi <= 0)
    abort ();
#endif
  if (di <= 0)
    abort ();
  if (li <= 0)
    abort ();

  return 0;
}
