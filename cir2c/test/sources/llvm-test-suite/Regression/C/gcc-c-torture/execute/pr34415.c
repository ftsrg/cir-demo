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

const char *__attribute__((noinline))
foo (const char *p)
{
  const char *end;
  int len = 1;
  for (;;)
    {
      int c = *p;
      c = (c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c);
      if (c == 'B')
	end = p;
      else if (c == 'A')
	{
	  end = p;
	  do
	    p++;
	  while (*p == '+');
	}
      else
	break;
      p++;
      len++;
    }
  if (len > 2 && *p == ':')
    p = end;
  return p;
}

int
main (void)
{
  const char *input = "Bbb:";
  return foo (input) != input + 2;
}
