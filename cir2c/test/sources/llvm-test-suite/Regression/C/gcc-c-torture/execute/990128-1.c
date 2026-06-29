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

extern int printf (const char *,...);

struct s { struct s *n; } *p;
struct s ss;
#define MAX     10
struct s sss[MAX];
int count = 0;

void sub( struct s *p, struct s **pp );
int look( struct s *p, struct s **pp );

main()
{
    struct s *pp;
    struct s *next;
    int i;

    p = &ss;
    next = p;
    for ( i = 0; i < MAX; i++ ) {
        next->n = &sss[i];
        next = next->n;
    }
    next->n = 0;

    sub( p, &pp );
    if (count != MAX+2)
      abort ();

    exit( 0 );
}

void sub( struct s *p, struct s **pp )
{
   for ( ; look( p, pp ); ) {
        if ( p )
            p = p->n;
        else
            break;
   }
}

int look( struct s *p, struct s **pp )
{
    for ( ; p; p = p->n )
        ;
    *pp = p;
    count++;
    return( 1 );
}
