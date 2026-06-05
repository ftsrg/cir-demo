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

main()
{
  char c;
  char d;
  int nbits;
  c = -1;
  for (nbits = 1 ; nbits < 100; nbits++) {
    d = (1 << nbits) - 1;
    if (d == c)
      break;
  }
  if (nbits == 100)
    abort();
  exit(0);
}
