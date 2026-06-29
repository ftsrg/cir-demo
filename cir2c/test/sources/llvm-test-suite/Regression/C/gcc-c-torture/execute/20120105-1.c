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

struct __attribute__((packed)) S
{
  int a, b, c;
};

static int __attribute__ ((noinline,noclone))
extract(const char *p)
{
  struct S s;
  __builtin_memcpy (&s, p, sizeof(struct S));
  return s.a;
}

volatile int i;

int main (void)
{
  char p[sizeof(struct S) + 1];

  __builtin_memset (p, 0, sizeof(struct S) + 1);
  i = extract (p + 1);

  return 0;
}
