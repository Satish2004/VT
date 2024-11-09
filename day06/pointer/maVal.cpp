#include <iostream>
using namespace std;
int main(){
int a =10;
int b= 20;
int *ptrA = &a;
int *ptrB = &b;
int result = *ptrA>*ptrB? *ptrA: *ptrB;
cout<<result;

return 0;
}