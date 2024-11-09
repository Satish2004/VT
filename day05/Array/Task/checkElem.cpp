#include <iostream>
using namespace std;
int main(){
    int count=0;
int arr[5]= {1,2,3,4,5};
int n;
cout<<"enter the array for the match or not";
cin>>n;
for(int i =0; i<5; i++){
    count++;
    if(arr[i]==n){
        cout<<"__";
    }
    else{
        cout<<arr[i];
    }
}
return 0;
}