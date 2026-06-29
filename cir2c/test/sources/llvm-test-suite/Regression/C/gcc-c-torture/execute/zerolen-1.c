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

union iso_directory_record {
   char carr[4];
   struct {
           unsigned char name_len [1];
           char name [0];
   } u;
} entry;

void set(union iso_directory_record *);

int main (void)
{
   union iso_directory_record *de;

   de = &entry;
   set(de);

   if (de->u.name_len[0] == 1 && de->u.name[0] == 0)
     exit (0);
   else
     abort ();
}

void set (union iso_directory_record *p)
{
   p->carr[0] = 1;
   p->carr[1] = 0;
   return;
}
