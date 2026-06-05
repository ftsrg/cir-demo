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

static char arg0[] = "arg0";
static char arg1[] = "arg1";

static void attr_rtx		(char *, char *);
static char *attr_string        (char *);
static void attr_eq		(char *, char *);

static void
attr_rtx (char *varg0, char *varg1)
{
  if (varg0 != arg0)
    abort ();

  if (varg1 != arg1)
    abort ();

  return;
}

static void
attr_eq (name, value)
     char *name, *value;
{
  return attr_rtx (attr_string (name),
		   attr_string (value));
}

static char *
attr_string (str)
     char *str;
{
  return str;
}

int main()
{
  attr_eq (arg0, arg1);
  exit (0);
}
