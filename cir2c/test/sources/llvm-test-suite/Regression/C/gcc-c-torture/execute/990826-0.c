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

/*
From: niles@fan745.gsfc.nasa.gov
To: fortran@gnu.org
Subject: Re: Scary problems in g77 for RedHat 6.0. (glibc-2.1)
Date: Sun, 06 Jun 1999 23:37:23 -0400
X-UIDL: 9c1e40c572e3b306464f703461764cd5
*/

/* { dg-xfail-if "Can not call system libm.a with -msoft-float" { powerpc-*-aix* rs6000-*-aix* } { "-msoft-float" } { "" } } */

#include <stdio.h>
#include <math.h>

int
main()
{
  if (floor (0.1) != 0.)
    abort ();
  return 0;
}

/*
It will result in 36028797018963968.000000 on Alpha RedHat Linux 6.0
using glibc-2.1 at least on my 21064.  This may result in g77 bug
reports concerning the INT() function, just so you know.

	Thanks,
	Rick Niles.
*/
