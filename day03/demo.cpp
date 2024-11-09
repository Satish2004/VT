#include <iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age"<<endl;
cin>>age;
if(age>18 && age>=34){
    cout<<"you are adult"<<endl;
}
 else if(age>=0 && age<=17){
    cout<<"your are child"<<endl;
 }
 else{
    cout<<"you are Above 34 age and you can understand better of the world "<<endl;
 }

return 0;
}