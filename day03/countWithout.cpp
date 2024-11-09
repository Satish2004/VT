#include <iostream>
using namespace std;
int result;
int i;
int j;
int main()
{
     int n = 101;
     int sum1=0;
     for (int i = 1; i <=n; i++)
     {
     sum1+=i;
     }

     for (int j = n; j>=1; j--)
     {
     sum1+=j;

     }
     
     

     cout << (sum1)/2;
     return 0;
}

// add with the first number and last number 

// take 1st for loop 1 to 100; <- get ans1;
// take 2nd for loop 100 to 1; <- get ans2;
// the cout<< (ans1+ans2)/2;
