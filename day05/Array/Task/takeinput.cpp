#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of students"<<endl;
cin>>n;
int arr[n];
for(int i =0; i<n; i++){
    cout<<"enter the student"<<i+1;
    cin>>arr[i];
}

for(int i =0; i<n; i++){
    cout<<arr[i]<<endl;
}
return 0;
}