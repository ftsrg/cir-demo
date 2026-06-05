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

/* PR tree-optimization/72824 */

typedef float V __attribute__((vector_size (4 * sizeof (float))));

static inline void
foo (V *x, V value)
{
  int i;
  for (i = 0; i < 32; ++i)
    x[i] = value;
}

int
main ()
{
  V x[32];
  foo (x, (V) { 0.f, -0.f, 0.f, -0.f });
  if (__builtin_copysignf (1.0, x[3][1]) != -1.0f)
    __builtin_abort ();
  return 0;
}
