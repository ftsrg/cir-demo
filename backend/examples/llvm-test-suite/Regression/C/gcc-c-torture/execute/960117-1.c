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

static char id_space[2] [32 +1];
typedef short COUNT;

typedef char TEXT;

union T_VALS
{
  TEXT   *id __attribute__ ((aligned (2), packed)) ;
};
typedef union T_VALS VALS;

struct T_VAL
{
  COUNT    pos __attribute__ ((aligned (2), packed)) ;
  VALS    vals __attribute__ ((aligned (2), packed)) ;
};
typedef struct T_VAL VAL;

VAL curval = {0};

static short idc = 0;
static int cur_line;
static int char_pos;

typedef unsigned short WORD;

WORD
get_id (char c)
{
  curval.vals.id[0] = c;
}

WORD
get_tok ()
{
  char c = 'c';
  curval.vals.id = id_space[idc];
  curval.pos = (cur_line << 10) | char_pos;
  return get_id (c);
}

main ()
{
  get_tok ();
  exit (0);
}
