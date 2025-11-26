/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<double> student_marks;
    double mark;
    char answer;
 
    cout << "Enter marks (y/n)? " << endl;
    cin >> answer;
 
    while (answer == 'y' || answer == 'Y')
    {
        cout << "Enter value: " << endl;
        cin >> mark;

        student_marks.push_back (mark);
 
        cout << "More students (y/n)? " << endl;
        cin >> answer;
    }
 
    return 0;
}
