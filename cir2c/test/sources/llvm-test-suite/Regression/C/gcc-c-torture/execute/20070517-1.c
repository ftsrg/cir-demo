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

/* PR rtl-optimization/31691 */
/* Origin: Chi-Hua Chen <stephaniechc-gccbug@yahoo.com> */

extern void abort (void);

static int get_kind(int) __attribute__ ((noinline));

static int get_kind(int v)
{
  volatile int k = v;
  return k;
}

static int some_call(void) __attribute__ ((noinline));

static int some_call(void)
{
  return 0;
}

static void example (int arg)
{
  int tmp, kind = get_kind (arg);

  if (kind == 9 || kind == 10 || kind == 5)
    {
      if (some_call() == 0)
        {
          if (kind == 9 || kind == 10)
            tmp = arg;
          else
            abort();
        }
    }
}

int main(void)
{
  example(10);
  return 0;
}
