#include <iostream>
using namespace std;
int main(){
int a =10;
int *ptr = &a;
cout<<"value is = "<<*ptr<<endl;
cout<<"address is = "<<ptr;
return 0;
}