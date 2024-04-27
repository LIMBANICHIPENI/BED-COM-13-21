#include <iostream>
using namespace std;
/*local variables are the varibles that are declared inside the function.
 they can't be used outside the function or block*/
int main()
{
   // k, m, x and y are all local variables.
   //variables declared and initialised in a single line.
      int k = 9;
        int m = 23;

            double x = 6.09;
                double y = 2.1;
          int d = k - m;
       double f = x + y;
         

    cout <<"The value of d is :"<<d <<endl;
      cout << "The Value of f is : " <<f;
      
          return 0;
}