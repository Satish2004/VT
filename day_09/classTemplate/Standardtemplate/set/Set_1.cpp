#include <iostream>
#include<set> //set find the dubplicate of the array or not
using namespace std;
int main(){
set<int> mySet = {10,10,50,90};  // its not provide any duplicate value that why we called set

for(auto it = mySet.begin(); it!= mySet.end(); it++){
    cout<<*it<<" ";
}
return 0;
}