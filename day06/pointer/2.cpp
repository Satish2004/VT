#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int c= 30;

    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;
    int Max = max(*ptrA ,*ptrB);
int result = Max>*ptrC? Max : *ptrC;
    // int result = *ptrA > *ptrB  ? (*ptrA>*ptrC : *ptrA :*ptrC):*ptrC;   
    cout<<result;





    return 0;
}