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

/* Test that __builtin_prefetch does no harm.

   Prefetch data using a variety of storage classes and address
   expressions with volatile variables and pointers.  */

int glob_int_arr[100];
int glob_int = 4;
volatile int glob_vol_int_arr[100];
int * volatile glob_vol_ptr_int = glob_int_arr;
volatile int *glob_ptr_vol_int = glob_vol_int_arr;
volatile int * volatile glob_vol_ptr_vol_int = glob_vol_int_arr;
volatile int glob_vol_int;

static stat_int_arr[100];
static volatile int stat_vol_int_arr[100];
static int * volatile stat_vol_ptr_int = stat_int_arr;
static volatile int *stat_ptr_vol_int = stat_vol_int_arr;
static volatile int * volatile stat_vol_ptr_vol_int = stat_vol_int_arr;
static volatile int stat_vol_int;

struct S {
  int a;
  short b, c;
  char d[8];
  struct S *next;
};

struct S str;
volatile struct S vol_str;
struct S * volatile vol_ptr_str = &str;
volatile struct S *ptr_vol_str = &vol_str;
volatile struct S * volatile vol_ptr_vol_str = &vol_str;

/* Prefetch volatile global variables using the address of the variable.  */

void
simple_vol_global ()
{
  __builtin_prefetch (glob_vol_int_arr, 0, 0);
  __builtin_prefetch (glob_vol_ptr_int, 0, 0);
  __builtin_prefetch (glob_ptr_vol_int, 0, 0);
  __builtin_prefetch (glob_vol_ptr_vol_int, 0, 0);
  __builtin_prefetch (&glob_vol_int, 0, 0);
}

/* Prefetch volatile static variables using the address of the variable.  */

void
simple_vol_file ()
{
  __builtin_prefetch (stat_vol_int_arr, 0, 0);
  __builtin_prefetch (stat_vol_ptr_int, 0, 0);
  __builtin_prefetch (stat_ptr_vol_int, 0, 0);
  __builtin_prefetch (stat_vol_ptr_vol_int, 0, 0);
  __builtin_prefetch (&stat_vol_int, 0, 0);
}

/* Prefetch using address expressions involving volatile global variables.  */

void
expr_vol_global (void)
{
  __builtin_prefetch (&vol_str, 0, 0);
  __builtin_prefetch (ptr_vol_str, 0, 0);
  __builtin_prefetch (vol_ptr_str, 0, 0);
  __builtin_prefetch (vol_ptr_vol_str, 0, 0);
  __builtin_prefetch (&vol_str.b, 0, 0);
  __builtin_prefetch (&ptr_vol_str->b, 0, 0);
  __builtin_prefetch (&vol_ptr_str->b, 0, 0);
  __builtin_prefetch (&vol_ptr_vol_str->b, 0, 0);
  __builtin_prefetch (&vol_str.d, 0, 0);
  __builtin_prefetch (&vol_ptr_str->d, 0, 0);
  __builtin_prefetch (&ptr_vol_str->d, 0, 0);
  __builtin_prefetch (&vol_ptr_vol_str->d, 0, 0);
  __builtin_prefetch (vol_str.next, 0, 0);
  __builtin_prefetch (vol_ptr_str->next, 0, 0);
  __builtin_prefetch (ptr_vol_str->next, 0, 0);
  __builtin_prefetch (vol_ptr_vol_str->next, 0, 0);
  __builtin_prefetch (vol_str.next->d, 0, 0);
  __builtin_prefetch (vol_ptr_str->next->d, 0, 0);
  __builtin_prefetch (ptr_vol_str->next->d, 0, 0);
  __builtin_prefetch (vol_ptr_vol_str->next->d, 0, 0);

  __builtin_prefetch (&glob_vol_int_arr, 0, 0);
  __builtin_prefetch (glob_vol_ptr_int, 0, 0);
  __builtin_prefetch (glob_ptr_vol_int, 0, 0);
  __builtin_prefetch (glob_vol_ptr_vol_int, 0, 0);
  __builtin_prefetch (&glob_vol_int_arr[2], 0, 0);
  __builtin_prefetch (&glob_vol_ptr_int[3], 0, 0);
  __builtin_prefetch (&glob_ptr_vol_int[3], 0, 0);
  __builtin_prefetch (&glob_vol_ptr_vol_int[3], 0, 0);
  __builtin_prefetch (glob_vol_int_arr+3, 0, 0);
  __builtin_prefetch (glob_vol_int_arr+glob_vol_int, 0, 0);
  __builtin_prefetch (glob_vol_ptr_int+5, 0, 0);
  __builtin_prefetch (glob_ptr_vol_int+5, 0, 0);
  __builtin_prefetch (glob_vol_ptr_vol_int+5, 0, 0);
  __builtin_prefetch (glob_vol_ptr_int+glob_vol_int, 0, 0);
  __builtin_prefetch (glob_ptr_vol_int+glob_vol_int, 0, 0);
  __builtin_prefetch (glob_vol_ptr_vol_int+glob_vol_int, 0, 0);
}

int
main ()
{
  simple_vol_global ();
  simple_vol_file ();

  str.next = &str;
  vol_str.next = &str;
  expr_vol_global ();

  exit (0);
}
