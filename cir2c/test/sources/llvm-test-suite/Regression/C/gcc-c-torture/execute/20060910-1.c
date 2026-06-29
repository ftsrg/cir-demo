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

/* PR rtl-optimization/28636 */
/* Origin: Andreas Schwab <schwab@suse.de> */

extern void abort(void);

struct input_ty
{
  unsigned char *buffer_position;
  unsigned char *buffer_end;
};

int input_getc_complicated (struct input_ty *x) { return 0; }

int check_header (struct input_ty *deeper)
{
  unsigned len;
  for (len = 0; len < 6; len++)
    if (((deeper)->buffer_position < (deeper)->buffer_end
         ? *((deeper)->buffer_position)++
         : input_getc_complicated((deeper))) < 0)
      return 0;
  return 1;
}

struct input_ty s;
unsigned char b[6];

int main (void)
{
  s.buffer_position = b;
  s.buffer_end = b + sizeof b;
  if (!check_header(&s))
    abort();
  if (s.buffer_position != s.buffer_end)
    abort();
  return 0;
}
