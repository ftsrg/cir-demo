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

ns_name_skip (unsigned char **x, unsigned char *y)
{
  *x = 0;
  return 0;
}

unsigned char a[2];

int dn_skipname(unsigned char *ptr, unsigned char *eom) {
    unsigned char *saveptr = ptr;

    if (ns_name_skip(&ptr, eom) == -1)
	        return (-1);
    return (ptr - saveptr);
}

main()
{
  if (dn_skipname (&a[0], &a[1]) == 0)
    abort ();
  exit (0);
}
