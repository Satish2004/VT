#include <iostream>
using namespace std;
int main(){
// natural number =>start =1 not in zero
int num;
cout<<"enter the number"<<endl;
cin>>num;
if(num>0){
int sum = num*(num+1)/2;
cout<<sum;

}
else{
    return -1;
}


return 0;
}