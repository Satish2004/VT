#include <iostream>
using namespace std;
int main(){
int divident ,divisor;
cout<<"enter the first number and second number= ";
cin>>divident>>divisor;
int quotient;
if(divident>0){
   quotient= divident/divisor;
   cout<<quotient; 
}
else{
return -1;
}

return 0;
}