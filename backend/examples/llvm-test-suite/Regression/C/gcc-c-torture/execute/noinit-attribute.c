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

/* { dg-do run } */
/* { dg-require-effective-target noinit } */
/* { dg-options "-O2" } */

/* This test checks that noinit data is handled correctly.  */

extern void _start (void) __attribute__ ((noreturn));
extern void abort (void) __attribute__ ((noreturn));
extern void exit (int) __attribute__ ((noreturn));

int var_common;
int var_zero = 0;
int var_one = 1;
int __attribute__((noinit)) var_noinit;
int var_init = 2;

int __attribute__((noinit)) func(); /* { dg-warning "attribute only applies to variables" } */
int __attribute__((section ("mysection"), noinit)) var_section1; /* { dg-warning "because it conflicts with attribute" } */
int __attribute__((noinit, section ("mysection"))) var_section2; /* { dg-warning "because it conflicts with attribute" } */


int
main (void)
{
  /* Make sure that the C startup code has correctly initialized the ordinary variables.  */
  if (var_common != 0)
    abort ();

  /* Initialized variables are not re-initialized during startup, so
     check their original values only during the first run of this
     test.  */
  if (var_init == 2)
    if (var_zero != 0 || var_one != 1)
      abort ();

  switch (var_init)
    {
    case 2:
      /* First time through - change all the values.  */
      var_common = var_zero = var_one = var_noinit = var_init = 3;
      break;

    case 3:
      /* Second time through - make sure that d has not been reset.  */
      if (var_noinit != 3)
	abort ();
      exit (0);

    default:
      /* Any other value for var_init is an error.  */
      abort ();
    }

  /* Simulate a processor reset by calling the C startup code.  */
  _start ();

  /* Should never reach here.  */
  abort ();
}
