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

int main ()
{
    int nResult;
    int b=0;
    int i = -1;

    do
    {
     if (b!=0) {
       abort ();
       nResult=1;
     } else {
      nResult=0;
     }
     i++;
     b=(i+2)*4;
    } while (i < 0);
    exit (0);
}
