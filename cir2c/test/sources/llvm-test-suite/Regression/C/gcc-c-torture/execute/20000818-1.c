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

/* Copyright (C) 2000  Free Software Foundation.

   by Manfred Hollstein <manfredh@redhat.com>  */

void *temporary_obstack;

static int input (void);
static int ISALNUM (int ch);
static void obstack_1grow (void **ptr, int ch);

int yylex (void);
int main (void);

int main (void)
{
  int ch = yylex ();

  exit (0);
}

int yylex (void)
{
  int ch;

#ifndef WORK_AROUND
  for (;;)
    {
      ch = input ();
      if (ISALNUM (ch))
        obstack_1grow (&temporary_obstack, ch);
      else if (ch != '_')
        break;
    }
#else
  do
    {
      ch = input ();
      if (ISALNUM (ch))
        obstack_1grow (&temporary_obstack, ch);
    } while (ch == '_');
#endif

  return ch;
}

static int input (void)
{
  return 0;
}

static int ISALNUM (int ch)
{
  return ((ch >= 'A' && ch <= 'Z')
	  || (ch >= 'a' && ch <= 'z')
	  || (ch >= '0' && ch <= '0'));
}

static void obstack_1grow (void **ptr, int ch)
{
}
