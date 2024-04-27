
#include <iostream>
using namespace std;
// function to check leap year
bool checkYear(int year)
{
  if ( year % 400 == 0)
  {
    return true;
  }
  // not leap year if divisible by 100
  // but not divisible by 400
  else if ( year % 100 = 0)
  {
    return false;
  }
  else if ( year % 4 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
// driver or main code. or to say main function.
int main()
{
  int year = 2000;
  checkYear(year) ? cout << "Leap year"<<endl;
  cout << "Not leap year";
  return 0;
}
