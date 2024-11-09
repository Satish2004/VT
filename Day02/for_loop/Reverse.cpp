#include <iostream>
using namespace std;
int main(){
int num;

int rev =0;
int rem;
cout<<"enter your Number";
cin>>num;
int palindrom = num;
while(num!=0 ){
rem = num%10;
rev = rev *10 + rem;
num = num/10;


}
if(rev==palindrom){
    cout<<"its is palindrom";
}
else{
    cout<<"number is not palindrom=";
}
return 0;
}