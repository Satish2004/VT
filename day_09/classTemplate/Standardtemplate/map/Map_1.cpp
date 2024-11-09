#include <iostream>
#include<map>
using namespace std;
// it -> where it is iteration
int main(){
map<int, string> myMap = {{1, "Apple"}, {2, " cherry"}, {3, "orange"}};
// using auto with iterator to traverse the map
for(auto it = myMap.begin(); it!= myMap.end(); it++){
    cout<<it->first<<"=>"<<it->second<<endl;
}
return 0;
}