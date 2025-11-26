/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// constructing priority queues
#include <iostream>
#include <queue>
#include <cassert>
using namespace std;

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};

int main ()
{

  typedef priority_queue<int,vector<int>,mycomparison> mypq_type;
  mypq_type fifth (mycomparison());
  mypq_type sixth (mycomparison(true));

  return 0;
}
