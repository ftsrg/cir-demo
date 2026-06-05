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

/* PR target/85169 */

typedef char V __attribute__((vector_size (64)));

static void __attribute__ ((noipa))
foo (V *p)
{
  V v = *p;
  v[63] = 1;
  *p = v;
}

int
main ()
{
  V v = (V) { };
  foo (&v);
  for (unsigned i = 0; i < 64; i++)
    if (v[i] != (i == 63))
      __builtin_abort ();
  return 0;
}
