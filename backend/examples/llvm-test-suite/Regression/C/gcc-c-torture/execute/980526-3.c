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

int compare(x, y)
unsigned int x;
unsigned int y;
{
   if (x==y)
     return 0;
   else
     return 1;
}

main()
{
 unsigned int i, j, k, l;
 i = 5; j = 2; k=0; l=2;
 if (compare(5%(~(unsigned) 2), i%~j)
     || compare(0, k%~l))
    abort();
 else
    exit(0);
}
