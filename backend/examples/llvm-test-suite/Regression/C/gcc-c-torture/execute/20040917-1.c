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

/* submitted by kenneth zadeck */

static int test_var;

/* the idea here is that not only is inlinable, inlinable but since it
   is static, the cgraph node will not be marked as output.  The
   current version of the code ignores these cgraph nodes.  */

void not_inlinable()  __attribute__((noinline));

static void
inlinable ()
{
  test_var = -10;
}

void
not_inlinable ()
{
  inlinable();
}

main ()
{
  test_var = 10;
  /* Variable test_var should be considered call-clobbered by the call
     to not_inlinable().  */
  not_inlinable ();
  if (test_var == 10)
    abort ();
  return 0;
}
