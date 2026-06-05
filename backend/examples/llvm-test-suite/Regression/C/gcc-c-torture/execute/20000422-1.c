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

int ops[13] =
{
  11, 12, 46, 3, 2, 2, 3, 2, 1, 3, 2, 1, 2
};

int correct[13] =
{
  46, 12, 11, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1
};

int num = 13;

int main()
{
  int i;

  for (i = 0; i < num; i++)
    {
      int j;

      for (j = num - 1; j > i; j--)
        {
          if (ops[j-1] < ops[j])
            {
              int op = ops[j];
              ops[j] = ops[j-1];
              ops[j-1] = op;
            }
        }
    }


  for (i = 0; i < num; i++)
    if (ops[i] != correct[i])
      abort ();

  exit (0);
}
