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

extern void abort (void);

static unsigned char g_2 = 1;
static int g_9;
static int *l_8 = &g_9;

static void func_12(int p_13)
{
  int * l_17 = &g_9;
  *l_17 &= 0 < p_13;
}

int main(void)
{
  unsigned char l_11 = 254;
  *l_8 |= g_2;
  l_11 |= *l_8;
  func_12(l_11);
  if (g_9 != 1)
    abort ();
  return 0;
}
