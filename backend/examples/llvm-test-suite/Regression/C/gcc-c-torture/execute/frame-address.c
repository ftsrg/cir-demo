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

/* { dg-require-effective-target return_address } */
int check_fa_work (const char *, const char *) __attribute__((noinline));
int check_fa_mid (const char *) __attribute__((noinline));
int check_fa (char *) __attribute__((noinline));
int how_much (void) __attribute__((noinline));

int check_fa_work (const char *c, const char *f)
{
  const char d = 0;

  if (c >= &d)
    return c >= f && f >= &d;
  else
    return c <= f && f <= &d;
}

int check_fa_mid (const char *c)
{
  const char *f = __builtin_frame_address (0);

  /* Prevent a tail call to check_fa_work, eliding the current stack frame.  */
  return check_fa_work (c, f) != 0;
}

int check_fa (char *unused)
{
  const char c = 0;

  /* Prevent a tail call to check_fa_mid, eliding the current stack frame.  */
  return check_fa_mid (&c) != 0;
}

int how_much (void)
{
	return 8;
}

int main (void)
{
  char *unused = __builtin_alloca (how_much ());

  if (!check_fa(unused))
    abort();
  return 0;
}
