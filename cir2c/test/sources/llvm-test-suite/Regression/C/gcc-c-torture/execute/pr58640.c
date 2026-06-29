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

int a, b, c, d = 1, e;

static signed char
foo ()
{
  int f, g = a;

  for (f = 1; f < 3; f++)
    for (; b < 1; b++)
      {
        if (d)
          for (c = 0; c < 4; c++)
            for (f = 0; f < 3; f++)
              {
                for (e = 0; e < 1; e++)
                  a = g;
                if (f)
                  break;
              }
        else if (f)
          continue;
        return 0;
      }
  return 0;
}

int
main ()
{
  foo ();
  exit (0);
}
