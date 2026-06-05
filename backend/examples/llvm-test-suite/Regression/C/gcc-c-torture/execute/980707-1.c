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

#include <stdlib.h>
#include <string.h>

char **
buildargv (char *input)
{
  static char *arglist[256];
  int numargs = 0;

  while (1)
    {
      while (*input == ' ')
	input++;
      if (*input == 0)
	break;
      arglist [numargs++] = input;
      while (*input != ' ' && *input != 0)
	input++;
      if (*input == 0)
	break;
      *(input++) = 0;
    }
  arglist [numargs] = NULL;
  return arglist;
}


int main()
{
  char **args;
  char input[256];
  int i;

  strcpy(input, " a b");
  args = buildargv(input);

  if (strcmp (args[0], "a"))
    abort ();
  if (strcmp (args[1], "b"))
    abort ();
  if (args[2] != NULL)
    abort ();

  exit (0);
}
