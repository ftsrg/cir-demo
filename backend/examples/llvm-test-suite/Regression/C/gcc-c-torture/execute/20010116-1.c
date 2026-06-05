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

/* Distilled from optimization/863.  */

extern void abort (void);
extern void exit (int);
extern void ok (int);

typedef struct
{
  int x, y, z;
} Data;

void find (Data *first, Data *last)
{
  int i;
  for (i = (last - first) >> 2; i > 0; --i)
    ok(i);
  abort ();
}

void ok(int i)
{
  if (i != 1)
    abort ();
  exit (0);
}

int
main ()
{
  Data DataList[4];
  find (DataList + 0, DataList + 4);
}
