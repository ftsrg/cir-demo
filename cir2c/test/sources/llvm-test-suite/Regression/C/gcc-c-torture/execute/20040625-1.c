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

/* From PR target/16176 */
struct __attribute__ ((packed)) s { struct s *next; };

struct s * __attribute__ ((noinline))
maybe_next (struct s *s, int t)
{
  if (t)
    s = s->next;
  return s;
}

int main ()
{
  struct s s1, s2;

  s1.next = &s2;
  if (maybe_next (&s1, 1) != &s2)
    abort ();
  exit (0);
}
