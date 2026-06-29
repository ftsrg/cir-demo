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

struct {
  int a:4;
  int :4;
  int b:4;
  int c:4;
} x = { 2,3,4 };

main ()
{
  if (x.a != 2)
    abort ();
  if (x.b != 3)
    abort ();
  if (x.c != 4)
    abort ();
  exit (0);
}
