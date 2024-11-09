#include <iostream>
using namespace std;

void Isdoctor(string name , int age){
if(name =="sharma" || name == "vijay" || age>=32){
    cout<<"Yes Available"<<endl;

}
else if(name=="Mona" || name =="Tona" || age<32 ){
    cout<<"Currently not available"<<endl;

}

}

void Isdoctor(string name, int age , bool ischeck){
    if(name =="sharma" || name == "vijay" || age>=32){
    cout<<"Yes Available"<<endl;

}
else if(name=="Mona" || name =="Tona" || age<32 ){
    cout<<"Currently not available"<<endl;

}
else if(true){
    cout<<"Yes You have to need The proper sleep go for rest"<<endl;
}

else{
cout<<"Not complete your check"<<endl;
}
}



int main(){
// string doctor
string name;
int age;
cout<<"whos doctor want to check?"<<endl;
cin>>name;
cout<<"enter the doctor age"<<endl;
cin>>age;
bool isCheck;

Isdoctor( name, age );
Isdoctor( name, age , isCheck);
return 0;
}