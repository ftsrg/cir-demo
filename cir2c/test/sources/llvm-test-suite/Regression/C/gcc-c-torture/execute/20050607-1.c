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

/* PR middle-end/21850 */

extern void abort (void);

typedef int V2SI __attribute__ ((vector_size (8)));

int
main (void)
{
#if (__INT_MAX__ == 2147483647) \
    && (__LONG_LONG_MAX__ == 9223372036854775807LL)
  if (((int)(long long)(V2SI){ 2, 2 }) != 2)
    abort ();
#endif
  return 0;
}
