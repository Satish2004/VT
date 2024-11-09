#include <iostream>
#include<list>
using namespace std;
int main(){
list<int>myList = {4,2,8,1,5};
myList.sort();
myList.reverse();

auto it = myList.begin();
it++;

cout<<"second largest element is ="<<*it;
return 0;
}