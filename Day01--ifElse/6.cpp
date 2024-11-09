#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int i = 2;

while(n>2){
    if(n%1==0 && n/n==0){
        cout<<"number is not prime nuber"<<n;

    }
    else{
        cout<<"enter number is  prime number";
        return 0;
    }
    i++;
}


    // if (n > 1)
    // {
    //     while (i > 2)
    //     {
        
    //         if (n % 1 == 0 && n / n == 0)
    //         {
    //         }
    //     }

    //     cout << "the number is prime" << n;
    // }
    // else
    // {
    //     cout << "the number is not a prime number";
    // }

    return 0;
}