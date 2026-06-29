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

/* PR target/17377
   Bug in code emitted by "return" pattern on CRIS: missing pop of
   forced return address on stack.  */
/* { dg-require-effective-target return_address } */
int calls = 0;

void *f (int) __attribute__ ((__noinline__));
void *
f (int i)
{
  /* The code does a little brittle song and dance to trig the "return"
     pattern instead of the function epilogue.  This must still be a
     leaf function for the bug to be exposed.  */

  if (calls++ == 0)
    return __builtin_return_address (0);

  switch (i)
    {
    case 1:
      return f;
    case 0:
      return __builtin_return_address (0);
    }
  return 0;
}

volatile int x;

void *y (int i) __attribute__ ((__noinline__,__noclone__));
void *
y (int i)
{
  x = 0;

  /* This must not be a sibling call: the return address must appear
     constant for different calls to this function.  Postincrementing x
     catches otherwise unidentified multiple returns (e.g. through the
     return-address register and then this epilogue popping the address
     stored on stack in "f").  */
  return (char *) f (i) + x++;
}

int
main (void)
{
  void *v = y (4);
  if (y (1) != f
      /* Can't reasonably check the validity of the return address
	 above, but it's not that important: the test-case will probably
	 crash on the first call to f with the bug present, or it will
	 run wild including returning early (in y or here), so we also
	 try and check the number of calls.  */
      || y (0) != v
      || y (3) != 0
      || y (-1) != 0
      || calls != 5)
    abort ();
  exit (0);
}
