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

/* This testcase failed on IA-32 at -O and above, because combine attached
   a REG_LABEL note to jump instruction already using JUMP_LABEL.  */

extern void abort (void);
extern void exit (int);

enum X { A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q };

void
bar (const char *x, int y, const char *z)
{
}

long
foo (enum X x, const void *y)
{
  long a;

  switch (x)
    {
    case K:
      a = *(long *)y;
      break;
    case L:
      a = *(long *)y;
      break;
    case M:
      a = *(long *)y;
      break;
    case N:
      a = *(long *)y;
      break;
    case O:
      a = *(long *)y;
      break;
    default:
      bar ("foo", 1, "bar");
    }
  return a;
}

int
main ()
{
  long i = 24;
  if (foo (N, &i) != 24)
    abort ();
  exit (0);
}
