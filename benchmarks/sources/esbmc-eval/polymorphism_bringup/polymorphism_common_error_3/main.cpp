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

//treat with a base class object like a derived class object
//it can generate a compilation error

class Shape{
  public:
    virtual int area (void);
    virtual void printArea(void);
};

class CPolygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area (void) =0;
    void printarea (void)
      {
        // print something here
      }
  };

class CRectangle: public CPolygon {
  public:
    int area (void)
      { return (width * height); }
    int randomVariable;
  };

class CTriangle: public CPolygon {
  public:
    int area (void)
      { return (width * height / 2); }
    int randomVariable2;
  };

int main () {
  Shape *sh = new Shape;

  return 0;
}
