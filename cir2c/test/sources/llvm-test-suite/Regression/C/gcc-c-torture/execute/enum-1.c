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

typedef enum
{
  END = -1,
  EMPTY = (1 << 8 ) ,
  BACKREF,
  BEGLINE,
  ENDLINE,
  BEGWORD,
  ENDWORD,
  LIMWORD,
  NOTLIMWORD,
  QMARK,
  STAR,
  PLUS,
  REPMN,
  CAT,
  OR,
  ORTOP,
  LPAREN,
  RPAREN,
  CSET
} token;

static token tok;

static int
atom ()
{
  if ((tok >= 0 && tok < (1 << 8 ) ) || tok >= CSET || tok == BACKREF
      || tok == BEGLINE || tok == ENDLINE || tok == BEGWORD
      || tok == ENDWORD || tok == LIMWORD || tok == NOTLIMWORD)
    return 1;
  else
    return 0;
}

main ()
{
  tok = 0;
  if (atom () != 1)
    abort ();
  exit (0);
}
