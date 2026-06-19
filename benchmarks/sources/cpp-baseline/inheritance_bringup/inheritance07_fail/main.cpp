/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

// Base class Shape
class Shape
{
public:
  void setWidth(int w)
  {
    width = w;
  }
  void setHeight(int h)
  {
    height = h;
  }
  void setNumber()
  {
    number = 2;
  }
  int getNumber()
  {
    return number;
  }

protected:
  int width;
  int height;
  int number;
};

// Base class PaintCost
class PaintCost
{
public:
  int getCost(int area)
  {
    return area * 70;
  }
};

// Derived class
class Rectangle: public Shape, public PaintCost
{
public:
  int getArea()
  {
    return (width * height);
  }
};

int main(void)
{
  Rectangle Rect;
  int area;
  int totalCost;

  Rect.setWidth(5);
  Rect.setHeight(7);

  Rect.setNumber();
  assert(Rect.getNumber() == 2);

  area = Rect.getArea();
  assert(area == 35);
  totalCost = Rect.getCost(area) * Rect.getNumber();
  assert(totalCost == 4901); // FAIL, should be 4900

  return 0;
}
