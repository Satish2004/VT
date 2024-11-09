// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[n] ={-1,-2,3,4,-6};
// int start =0;
// int end =n-1;
// for(int i =0; i<n; i++){
//     if(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end++;

//     }
//      if(arr[i]<0){
//         start++;
//         end--;
//         cout<<arr[i]<<" ";
//     }
   
// }


// return 0;
// }

#include <iostream>
using namespace std;
int main(){
 int n=5;
 int arr[n] ={-1,-2,3,4,-6};
 for(int i =0; i<n; i++){
    if(arr[i]<0){
        cout<<arr[i];
    }
 }

 for(int i =0; i<n; i++){
    if(arr[i]>0){
        cout<<arr[i];
    }
 }
return 0;
}