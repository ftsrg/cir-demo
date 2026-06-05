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

/* { dg-add-options stack_size } */

f()
{
  int x = 1;
#if defined(STACK_SIZE)
  char big[STACK_SIZE/2];
#else
  char big[0x1000];
#endif

  ({
    __label__ mylabel;
  mylabel:
    x++;
    if (x != 3)
      goto mylabel;
  });
  exit(0);
}

main()
{
  f();
}
