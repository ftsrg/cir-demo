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

extern void abort (void);
extern void exit (int);

main()
{
    int a,b,c;
    int *pa, *pb, *pc;
    int **ppa, **ppb, **ppc;
    int i,j,k,x,y,z;

    a = 10;
    b = 20;
    c = 30;
    pa = &a; pb = &b; pc = &c;
    ppa = &pa; ppb = &pb; ppc = &pc;
    x = 0; y = 0; z = 0;

    for(i=0;i<10;i++){
        if( pa == &a ) pa = &b;
        else pa = &a;
        while( (*pa)-- ){
            x++;
            if( (*pa) < 3 ) break;
            else pa = &b;
        }
        x++;
        pa = &b;
    }

    if ((*pa) != -5 || (*pb) != -5 || x != 43)
      abort ();

    exit (0);
}
