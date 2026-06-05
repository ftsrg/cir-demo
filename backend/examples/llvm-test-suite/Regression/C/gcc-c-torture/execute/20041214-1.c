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

/* { dg-require-effective-target indirect_jumps } */

typedef long unsigned int size_t;
extern void abort (void);
extern char *strcpy (char *, const char *);
extern int strcmp (const char *, const char *);
typedef __builtin_va_list va_list;
static const char null[] = "(null)";
int g (char *s, const char *format, va_list ap)
{
  const char *f;
  const char *string;
  char spec;
  static const void *step0_jumps[] = {
    &&do_precision,
    &&do_form_integer,
    &&do_form_string,
  };
  f = format;
  if (*f == '\0')
    goto all_done;
  do
    {
      spec = (*++f);
      goto *(step0_jumps[2]);

    /* begin switch table. */
    do_precision:
      ++f;
      __builtin_va_arg (ap, int);
      spec = *f;
      goto *(step0_jumps[2]);

      do_form_integer:
	__builtin_va_arg (ap, unsigned long int);
	goto end;

      do_form_string:
	string = __builtin_va_arg (ap, const char *);
	strcpy (s, string);

      /* End of switch table. */
      end:
      ++f;
    }
  while (*f != '\0');

all_done:
  return 0;
}

void
f (char *s, const char *f, ...)
{
  va_list ap;
  __builtin_va_start (ap, f);
  g (s, f, ap);
  __builtin_va_end (ap);
}

int
main (void)
{
  char buf[10];
  f (buf, "%s", "asdf", 0);
  if (strcmp (buf, "asdf"))
    abort ();
  return 0;
}
