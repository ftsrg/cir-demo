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

/* Test whether store motion recognizes pure functions as potentially reading
   any memory.  */

typedef __SIZE_TYPE__ size_t;
extern void *memcpy (void *dest, const void *src, size_t n);
extern size_t strlen (const char *s);
extern int strcmp (const char *s1, const char *s2) __attribute__((pure));

char buf[50];

static void foo (void)
{
  if (memcpy (buf, "abc", 4) != buf) abort ();
  if (strcmp (buf, "abc")) abort ();
  memcpy (buf, "abcdefgh", strlen ("abcdefgh") + 1);
}

int main (void)
{
  foo ();
  return 0;
}
