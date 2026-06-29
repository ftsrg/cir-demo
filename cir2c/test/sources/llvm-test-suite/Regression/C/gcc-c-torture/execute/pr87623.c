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

/* PR middle-end/87623 */
/* Testcase by George Thopas <george.thopas@gmail.com> */

struct be {
    unsigned short pad[1];
    unsigned char  a;
    unsigned char  b;
} __attribute__((scalar_storage_order("big-endian")));

typedef struct be t_be;

struct le {
    unsigned short pad[3];
    unsigned char  a;
    unsigned char  b;
};

typedef struct le t_le;

int a_or_b_different(t_be *x,t_le *y)
{
   return (x->a != y->a) || (x->b != y->b);
}

int main (void)
{
   t_be x = { .a=1, .b=2  };
   t_le y = { .a=1, .b=2  };

   if (a_or_b_different(&x,&y))
       __builtin_abort ();

   return 0;
}
