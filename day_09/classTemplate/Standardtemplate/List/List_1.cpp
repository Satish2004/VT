#include <iostream>
#include<List>
using namespace std;
int main(){
list<int> myList = {10,230,50,90};
for(auto it = myList.begin(); it!= myList.end(); it++){
    cout<<*it<<" ";
}
return 0;
}