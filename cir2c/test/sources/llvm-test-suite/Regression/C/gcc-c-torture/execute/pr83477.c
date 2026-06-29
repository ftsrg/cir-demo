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

int yf = 0;

void
pl (int q5, int nd)
{
  unsigned int hp = q5;
  int zx = (q5 == 0) ? hp : (hp / q5);

  yf = ((nd < 2) * zx != 0) ? nd : 0;
}

int
main (void)
{
  pl (1, !yf);
  if (yf != 1)
    __builtin_abort ();

  return 0;
}
