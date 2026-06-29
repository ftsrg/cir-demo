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

/* { dg-require-effective-target return_address } */
/* { dg-options "-finstrument-functions" } */
/* { dg-xfail-run-if "" { powerpc-ibm-aix* } } */

extern void abort (void);

#define ASSERT(X)	if (!(X)) abort ();
#define NOCHK __attribute__ ((no_instrument_function))

int entry_calls, exit_calls;
void (*last_fn_entered)();
void (*last_fn_exited)();

__attribute__ ((noinline))
int main () NOCHK;

__attribute__ ((noinline))
void foo ()
{
  ASSERT (last_fn_entered == foo);
}

__attribute__ ((noinline))
static void foo2 ()
{
  ASSERT (entry_calls == 1 && exit_calls == 0);
  ASSERT (last_fn_entered == foo2);
  foo ();
  ASSERT (entry_calls == 2 && exit_calls == 1);
  ASSERT (last_fn_entered == foo);
  ASSERT (last_fn_exited == foo);
}

__attribute__ ((noinline))
void nfoo (void) NOCHK;
void nfoo ()
{
  ASSERT (entry_calls == 2 && exit_calls == 2);
  ASSERT (last_fn_entered == foo);
  ASSERT (last_fn_exited == foo2);
  foo ();
  ASSERT (entry_calls == 3 && exit_calls == 3);
  ASSERT (last_fn_entered == foo);
  ASSERT (last_fn_exited == foo);
}

int main ()
{
  ASSERT (entry_calls == 0 && exit_calls == 0);

  foo2 ();

  ASSERT (entry_calls == 2 && exit_calls == 2);
  ASSERT (last_fn_entered == foo);
  ASSERT (last_fn_exited == foo2);

  nfoo ();

  ASSERT (entry_calls == 3 && exit_calls == 3);
  ASSERT (last_fn_entered == foo);

  return 0;
}

void __cyg_profile_func_enter (void*, void*) NOCHK;
void __cyg_profile_func_exit (void*, void*) NOCHK;

__attribute__ ((noinline))
void __cyg_profile_func_enter (void *fn, void *parent)
{
  entry_calls++;
  last_fn_entered = (void (*)())fn;
}
__attribute__ ((noinline))
void __cyg_profile_func_exit (void *fn, void *parent)
{
  exit_calls++;
  last_fn_exited = (void (*)())fn;
}
