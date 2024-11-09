#include <iostream>
using namespace std;
int main(){
int sum =0;
int arr[]= {1,2,3};
int *ptr = arr;
for(int i=0; i<3; i++){
    sum += *(ptr+i);
    cout<<"sum of"<<"["<<i<<"] = "<<sum<<endl;
}
cout<<"total sum is ="<<sum;


return 0;
}