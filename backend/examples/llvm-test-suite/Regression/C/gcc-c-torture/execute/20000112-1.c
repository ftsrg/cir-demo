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

#include <string.h>

static int
special_format (fmt)
     const char *fmt;
{
  return (strchr (fmt, '*') != 0
          || strchr (fmt, 'V') != 0
          || strchr (fmt, 'S') != 0
          || strchr (fmt, 'n') != 0);
}

main()
{
  if (special_format ("ee"))
    abort ();
  if (!special_format ("*e"))
    abort ();
  exit (0);
}
