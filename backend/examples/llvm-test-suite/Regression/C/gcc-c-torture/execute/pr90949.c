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

void __attribute__ ((noipa, noinline)) my_puts (const char *str) { }

void __attribute__ ((noipa, noinline)) my_free (void *p) { }


struct Node
{
  struct Node *child;
};

struct Node space[2] = { };

struct Node * __attribute__ ((noipa, noinline)) my_malloc (int bytes)
{
  return &space[0];
}

void
walk (struct Node *module, int cleanup)
{
  if (module == 0)
    {
      return;
    }
  if (!cleanup)
    {
      my_puts ("No cleanup");
    }
  walk (module->child, cleanup);
  if (cleanup)
    {
      my_free (module);
    }
}

int
main ()
{
  struct Node *node = my_malloc (sizeof (struct Node));
  node->child = 0;
  walk (node, 1);
}
