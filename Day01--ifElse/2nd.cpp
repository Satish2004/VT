#include <iostream>
using namespace std;
int main(){
string girlRespond;
string cardRespond;
bool hasGirl =false;
bool hasVIPm=false;
cout<<"do you have girl friend(yes/no)="<<endl;
cin>>girlRespond;

if(girlRespond=="yes"){
    hasGirl =true;
}

cout<<"do you have VIP card ??(yes/no) = ";
cin>>cardRespond;
if(hasGirl== true){
    cout<<"Its free enjoy party";

}

else if(hasGirl== false){
    cout<<"you have not girlfriend and so its not free ";
}
// else if(cardRespond=="yes"){
//    cout<<"Free entry";
// }
else{
    cout<<"you have not vip card so no entry";

}
return 0;
}