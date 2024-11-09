#include <iostream>
using namespace std;
int main(){
    int n;
    int size = 6;
    int index, newval;

int marks[size] ={7,8,9,1,3,4};
cout<<"which index do you want to update= ";
cin>>index;
// condition-->
if(index>= 0 && index<size){
    // cout--> newValue
    cout<<"enter your newValue";
    cin>>newval;
    //  update the answer
    marks[index] =newval;
    //for print the arr --> run for loop
    for(int i =0; i<size; i++){
        cout<<marks[i]<<" ";
    }
}
else{
    cout<<"invalid index";
}

return 0;
}