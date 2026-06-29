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

f(d,x,y,n)
int*d;
float*x,*y;
int n;
{
  while(n--){*d++=*x++==*y++;}
}

main()
{
  int r[4];
  float a[]={5,1,3,5};
  float b[]={2,4,3,0};
  int i;
  f(r,a,b,4);
  for(i=0;i<4;i++)
    if((a[i]==b[i])!=r[i])
      abort();
  exit(0);
}
