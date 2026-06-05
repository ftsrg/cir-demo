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

/* Copyright 2002 Free Software Foundation, Inc.

   Tests correct signedness of operations on bitfields; in particular
   that integer promotions are done correctly, including the case when
   casts are present.

   The C front end was eliding the cast of an unsigned bitfield to
   unsigned as a no-op, when in fact it forces a conversion to a
   full-width unsigned int. (At the time of writing, the C++ front end
   has a different bug; it erroneously promotes the uncast unsigned
   bitfield to an unsigned int).

   Source: Neil Booth, 25 Jan 2002, based on PR 3325 (and 3326, which
   is a different manifestation of the same bug).
*/

extern void abort ();

int
main(int argc, char *argv[])
{
  struct x { signed int i : 7; unsigned int u : 7; } bit;

  unsigned int u;
  int i;
  unsigned int unsigned_result = -13U % 61;
  int signed_result = -13 % 61;

  bit.u = 61, u = 61;
  bit.i = -13, i = -13;

  if (i % u != unsigned_result)
    abort ();
  if (i % (unsigned int) u != unsigned_result)
    abort ();

  /* Somewhat counter-intuitively, bit.u is promoted to an int, making
     the operands and result an int.  */
  if (i % bit.u != signed_result)
    abort ();

  if (bit.i % bit.u != signed_result)
    abort ();

  /* But with a cast to unsigned int, the unsigned int is promoted to
     itself as a no-op, and the operands and result are unsigned.  */
  if (i % (unsigned int) bit.u != unsigned_result)
    abort ();

  if (bit.i % (unsigned int) bit.u != unsigned_result)
    abort ();

  return 0;
}
