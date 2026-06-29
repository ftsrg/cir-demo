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

typedef struct { char *addr; long type; } object;

object bar (object blah)
{
  abort();
}

object foo (object x, object y)
{
  object z = *(object*)(x.addr);
  if (z.type & 64)
    {
      y = *(object*)(z.addr+sizeof(object));
      z = *(object*)(z.addr);
      if (z.type & 64)
        y = bar(y);
    }
  return y;
}

int nil;
object cons1[2] = { {(char *) &nil, 0}, {(char *) &nil, 0} };
object cons2[2] = { {(char *) &cons1, 64}, {(char *) &nil, 0} };

main()
{
  object x = {(char *) &cons2, 64};
  object y = {(char *) &nil, 0};
  object three = foo(x,y);
  return 0;
}
