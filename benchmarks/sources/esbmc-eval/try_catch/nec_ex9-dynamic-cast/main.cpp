/*
 * Copyright 2025 Budapest University of Technology and Economics
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

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cstring>
#include <cstdio>
#include <typeinfo>


class Shape
{
public:
  Shape ()
  {
  }
  ~Shape ()
  {
  }
  void main_reshape ()
  {
  }
  virtual void reshape ()
  {
  }
};

class Point:public Shape
{
public:
  int x, y;
  Point (int px, int py)
  {
    x = px;
    y = py;
  }
  ~Point ()
  {
  }
  virtual void reshape ()
  {
  }
  void reshapePoint ()
  {
  }
};

// Triangle is derived from Shape.
class Triangle:public Shape
{
public:
  int a, b, c;
  Triangle (int s1, int s2, int s3)
  {
    a = s1;
    b = s2;
    c = s3;
  }
  virtual void reshape ()
  {
  }
};


class Rectangle:public Shape
{
public:
  int l, w;
  Rectangle (int len, int width)
  {
    l = len;
    w = width;
  }
  virtual void reshape ()
  {
  }
};

class Square:public Shape
{
public:
  int e;
  Square (int s)
  {
    e = s;
  }
  virtual void reshape ()
  {
  }
};

void
createShapes (Shape * shapes[])
{
  shapes[0] = new Point (1, 2);
  shapes[1] = new Triangle (2, 3, 4);
  shapes[2] = new Rectangle (3, 4);
  shapes[3] = new Square (4);
}

void
reShapePoint (Shape & shape)
{
  try
  {
    Point *tmp = new Point (8, 10);
    Point & p = dynamic_cast < Point & >(shape);
    p.x = tmp->x;
    p.y = tmp->y;
    delete tmp;
  }
  catch (std::bad_cast & e)
  {
    printf ("Caught bad cast\n");
    goto ERROR;
    ERROR:
    ;
  }
}

int
main ()
{
  Point p (1, 2);
  Triangle t (2, 3, 4);
  Rectangle r (3, 4);
  Square s (4);

  try
  {
    reShapePoint (p);
    reShapePoint (t);
    reShapePoint (r);
    reShapePoint (s);
  }
  catch (...)
  {
    printf ("Unknown exception caught\n");
  }
  return 0;
}
