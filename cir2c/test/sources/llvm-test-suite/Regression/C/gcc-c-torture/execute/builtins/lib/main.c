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

extern void abort(void);
extern void main_test (void);
extern void abort (void);
int inside_main;

int
main ()
{
  inside_main = 1;
  main_test ();
  inside_main = 0;
  return 0;
}

/* When optimizing, all the constant cases should have been
   constant folded, so no calls to link_error should remain.
   In any case, link_error should not be called.  */

#ifndef __OPTIMIZE__
void
link_error (void)
{
  abort ();
}
#endif
