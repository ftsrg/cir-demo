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

typedef struct {
    int v[4];
} Test1;

Test1 func2();

int func1()
{
    Test1 test;
    test = func2();

    if (test.v[0] != 10)
      abort ();
    if (test.v[1] != 20)
      abort ();
    if (test.v[2] != 30)
      abort ();
    if (test.v[3] != 40)
      abort ();
}

Test1 func2()
{
    Test1 tmp;
    tmp.v[0] = 10;
    tmp.v[1] = 20;
    tmp.v[2] = 30;
    tmp.v[3] = 40;
    return tmp;
}


int main()
{
    func1();
    exit (0);
}
