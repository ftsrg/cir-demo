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

/* PR tree-optimization/80153 */

void check (int, int, int) __attribute__((noinline));
void check (int c, int c2, int val)
{
  if (!val) {
    __builtin_abort();
  }
}

static const char *buf;
static int l, i;

void _fputs(const char *str)  __attribute__((noinline));
void _fputs(const char *str)
{
  buf = str;
  i = 0;
  l = __builtin_strlen(buf);
}

char _fgetc() __attribute__((noinline));
char _fgetc()
{
  char val = buf[i];
  i++;
  if (i > l)
    return -1;
  else
    return val;
}

static const char *string = "oops!\n";

int main(void)
{
  int i;
  int c;

  _fputs(string);

  for (i = 0; i < __builtin_strlen(string); i++) {
    c = _fgetc();
    check(c, string[i], c == string[i]);
  }

  return 0;
}
