// use iterator 
#include <iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    list<int> numArr = {1,2,3,4,5,6,7,8,9,11,12};
// for(int num : numArr){
//     cin>>
// }

    for(auto it =numArr.begin(); it!= numArr.end() ; it++){
        if(*it%2==0){
cout<<"even is = "<<*it<<endl;
        }

        else{
            cout<<"odd = "<<*it<<endl;
        }
    }

return 0;
}