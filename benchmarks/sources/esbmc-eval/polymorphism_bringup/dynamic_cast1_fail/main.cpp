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

#include <cassert>

class CPolygon {
protected:
  int width, height;
public:
  CPolygon(){}
  void set_values (int a, int b)
    { width=a; height=b; }
  virtual int area (void) =0;
};

class CRectangle: public CPolygon {
public:
  CRectangle(int w, int h)
  {
    width = w;
    height = h;

  }
  int area (void)
    { return (width * height); }
};

class CTriangle: public CPolygon {
public:
  CTriangle(int w, int h)
  {
  	width = w;
  	height = h;

  }
  int area (void)
    { return ((width * height) / 2); }
};

int main () {
	CPolygon* polygons[2];

	polygons[0] = new CTriangle(20,25);  //CRectangle(20,30);
	polygons[1] = new CRectangle(20,30); //new CTriangle(20,25);

	for(int i = 0; i < 2; i++)
	{
		CTriangle* trin = dynamic_cast <CTriangle *> (polygons[i]);
		if (trin != 0)
		{
			assert(trin->area() == 250); // PASS

			trin->set_values(10, 10); // access base method from the casted ptr
			assert(trin->area() == 15); // FAIL, should be 50
		}
	}

	for(int i = 0; i < 2; i++)
    delete polygons[i];

  return 0;
}
