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

/* { dg-require-effective-target label_values } */
/* { dg-require-effective-target trampolines } */

s(i){if(i>0){__label__ l1;int f(int i){if(i==2)goto l1;return 0;}return f(i);l1:;}return 1;}
x(){return s(0)==1&&s(1)==0&&s(2)==1;}
main(){if(x()!=1)abort();exit(0);}
