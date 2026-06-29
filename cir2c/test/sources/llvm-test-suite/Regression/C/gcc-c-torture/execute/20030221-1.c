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

/* PR optimization/8613 */
/* Contributed by Glen Nakamura */

extern void abort (void);

int main (void)
{
  char buf[16] = "1234567890";
  char *p = buf;

  *p++ = (char) __builtin_strlen (buf);

  if ((buf[0] != 10) || (p - buf != 1))
    abort ();

  return 0;
}
