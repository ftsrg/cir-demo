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

/* PR rtl-optimization/20290  */

/* We used to mis-optimize the second loop in main on at least ppc and
   arm, because tree loop would change the loop to something like:

  ivtmp.65 = &l[i];
  ivtmp.16 = 113;
  goto <bb 4> (<L4>);

<L3>:;
  *(ivtmp.65 + 4294967292B) = 9;
  i = i + 1;

<L4>:;
  ivtmp.16 = ivtmp.16 - 1;
  ivtmp.65 = ivtmp.65 + 4B;
  if (ivtmp.16 != 0) goto <L3>;

  We used to consider the increment of i as executed in every
  iteration, so we'd miscompute the final value.  */

extern void abort (void);

void
check (unsigned int *l)
{
  int i;
  for (i = 0; i < 288; i++)
    if (l[i] != 7 + (i < 256 || i >= 280) + (i >= 144 && i < 256))
      abort ();
}

int
main (void)
{
  int i;
  unsigned int l[288];

  for (i = 0; i < 144; i++)
    l[i] = 8;
  for (; i < 256; i++)
    l[i] = 9;
  for (; i < 280; i++)
    l[i] = 7;
  for (; i < 288; i++)
    l[i] = 8;
  check (l);
  return 0;
}
