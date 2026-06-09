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

// Fig. 16.17: readcookie.cpp
// Program to read cookie data.
#include <iostream>

using std::cout;
using std::cin;

#include <cstdlib>
#include <string>

using std::string;

int main()
{
   string dataString = "";
   string nameString = "";
   string ageString = "";
   string colorString = "";
   
   dataString = getenv( "HTTP_COOKIE" );
   
   // search through cookie data string
   int nameLocation = dataString.find( "Name=" ) + 5;
   int endName = dataString.find( "age:" );
   
   int ageLocation = dataString.find( "age:" ) + 4;
   int endAge = dataString.find( "color:" );
   
   int colorLocation = dataString.find( "color:" ) + 6;
   
   // store cookie data in strings
   nameString = dataString.substr( nameLocation, endName - 
      nameLocation );
   ageString = dataString.substr( ageLocation, endAge - 
      ageLocation);
   colorString = dataString.substr( colorLocation );
   
   // output header
   cout << "Content-Type: text/html\n\n";
   
   // output XML declaration and DOCTYPE
   cout << "<?xml version = \"1.0\"?>"
        << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 "
        << "Transitional//EN\" \"http://www.w3.org/TR/xhtml1"
        << "/DTD/xhtml1-transitional.dtd\">";

   // output html element and some of its contents
   cout << "<html xmlns = \"http://www.w3.org/1999/xhtml\">"
        << "<head><title>Read Cookies</title></head>"
        << "<body>";
   
   // data was found
   if ( dataString != "" )
      cout << "<h3>The following data is saved in a cookie on"
           << " your computer</h3>"
           << "<p>Name: "  << nameString  << "<br/></p>"
           << "<p>Age: "   << ageString   << "<br/></p>"
           << "<p>Color: " << colorString << "<br/></p>";

   // no data was found
   else
      cout << "<p>No cookie data.</p>";
   
   cout << "</body></html>";
   
   return 0;

} // end main
