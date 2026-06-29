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

/* PR target/14209.  Bug in cris.md, shrinking access size of
   postincrement.
   Origin: <hp@axis.com>.  */

long int xb (long int *y) __attribute__ ((__noinline__));
long int xw (long int *y) __attribute__ ((__noinline__));
short int yb (short int *y) __attribute__ ((__noinline__));

long int xb (long int *y)
{
  long int xx = *y & 255;
  return xx + y[1];
}

long int xw (long int *y)
{
  long int xx = *y & 65535;
  return xx + y[1];
}

short int yb (short int *y)
{
  short int xx = *y & 255;
  return xx + y[1];
}

int main (void)
{
  long int y[] = {-1, 16000};
  short int yw[] = {-1, 16000};

  if (xb (y) != 16255
      || xw (y) != 81535
      || yb (yw) != 16255)
    abort ();
  exit (0);
}
