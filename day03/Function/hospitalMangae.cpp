#include <iostream>
using namespace std;

void isDoctor(string doctor){
   if(doctor =="chandra" || doctor =="satish" ||doctor =="vijay"){
cout<<"Doctor is availabe"<<endl;
   } 
   else{
    cout<<"sorry sir doctor is not available right now";
   }
    
}
int main(){
string doctor;
string name;
int age;
cout<<"your name"<<endl;
cin>>name;
cout<<"age =?"<<endl;
cin>>age;
cout<<"which doctor you want see";
cin>>doctor;
isDoctor(doctor);

return 0;
}