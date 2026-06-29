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

typedef struct {
  long int p_x, p_y;
} Point;

int
f (Point basePt, Point pt1, Point pt2)
{
  long long vector;

  vector =
    (long long) (pt1.p_x - basePt.p_x) * (long long) (pt2.p_y - basePt.p_y) -
      (long long) (pt1.p_y - basePt.p_y) * (long long) (pt2.p_x - basePt.p_x);

  if (vector > (long long) 0)
    return 0;
  else if (vector < (long long) 0)
    return 1;
  else
    return 2;
}

main ()
{
  Point b, p1, p2;
  int answer;

  b.p_x = -23250;
  b.p_y = 23250;

  p1.p_x = 23250;
  p1.p_y = -23250;

  p2.p_x = -23250;
  p2.p_y = -23250;

  answer = f (b, p1, p2);

  if (answer != 1)
    abort ();
  exit (0);
}
