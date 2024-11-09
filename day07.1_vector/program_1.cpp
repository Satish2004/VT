#include <iostream>
#include<vector>
using namespace std;
int main(){
    // declarartion and assigning the value:--->

vector <int> numbers ={10,20,30,40};
// accessing the elem;

cout<<"index 1 is old value="<<numbers[0]<<endl;

//adding the element
numbers.push_back(43);
cout<<"new value is ="<<numbers[4]<<endl;

//modify 
numbers[4] =44;
cout<<"modify value is ="<<numbers[4]<<endl;

// removing an element
numbers.pop_back();

// iterartion
for(int i =0; i<numbers.size(); i++){
    cout<<"new = "<<numbers[i]<<endl;
}

return 0;
}