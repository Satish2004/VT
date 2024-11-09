#include <iostream>
using namespace std;
int main(){
bool hasGirl;
string isGirlFriend;
cout<<"isGirlFriend or not yes/no=";
cin>>isGirlFriend;
cout<<"Do you have girlfriend =";
cin>>hasGirl;
bool vipTicket;
// cout<<"Do you have vipGirl =";
// cin>>vipTicket;


if(hasGirl==true && isGirlFriend  =="yes"){
    cout<<"yes!! Its free enjoy "<<endl;
}

else {
    cout<<"its a vip ticket free!!!"<<endl;
}

return 0;
}