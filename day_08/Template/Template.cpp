// // #include <iostream>
// // using namespace std;
// // void swapValue(int &a, int &b){
// //     int temp =a ;
// //     a =b;
// //     b=temp;
// // }
// // int main(){
// // int x =10, y =20;
// // cout<<"Before swap x:"<<x<<", y : = "<<y<<endl;
// // swapValue(x, y);
// // cout<<"after swap x:"<<x<<", y : = "<<y;
// // return 0;
// // }
// #include <iostream>
// using namespace std;
// void swapValue(int &a, int &b){
//     int temp =a ;
//     a =b;
//     b=temp;
// }

// void swapValue(char &a, char &b){
//     char temp =a ;
//     a =b;
//     b=temp;
// }

// void swapValue(double &a, double &b){
//     double temp =a ;
//     a =b;
//     b=temp;
// }
// int main(){
// int x =10, y =20;
// cout<<"interger type--->"<<endl;
// cout<<"Before swap x:"<<x<<", y : = "<<y<<endl;
// swapValue(x, y);
// cout<<"after swap x:"<<x<<", y : = "<<y<<endl;


// cout<<"char type--->"<<endl;
// char a ='*', b ='r';
// cout<<"Before swap x:"<<a<<", y : = "<<b<<endl;
// swapValue(a, b);
// cout<<"after swap x:"<<a<<", y : = "<<endl;

// cout<<"double type--->"<<endl;
// double m =10.89, n =20.990;
// cout<<"Before swap x:"<<m<<", y : = "<<n<<endl;
// swapValue(m, n);
// cout<<"after swap x:"<<m<<", y : = "<<n<<endl;
// return 0;
// }


// #include <iostream>
// using namespace std;
// void swapValue(int &a, int &b){
//     int temp =a ;
//     a =b;
//     b=temp;
// }
// int main(){
// int x =10, y =20;
// cout<<"Before swap x:"<<x<<", y : = "<<y<<endl;
// swapValue(x, y);
// cout<<"after swap x:"<<x<<", y : = "<<y;
// return 0;
// }
#include <iostream>
using namespace std;

template<typename T> // this tamplate is work for all the datatypes-->


 void swapValue(T &a, T &b){
    int temp =a ;
     a =b;
     b=temp;
}


// void swapValue(int &a, int &b){
//     int temp =a ;
//     a =b;
//     b=temp;
// }

// void swapValue(char &a, char &b){
//     char temp =a ;
//     a =b;
//     b=temp;
// }

// void swapValue(double &a, double &b){
//     double temp =a ;
//     a =b;
//     b=temp;

int main(){
int x =10, y =20;
cout<<"interger type--->"<<endl;
cout<<"Before swap x:"<<x<<", y : = "<<y<<endl;
swapValue(x, y);
cout<<"after swap x:"<<x<<", y : = "<<y<<endl;


cout<<"char type--->"<<endl;
char a ='*', b ='r';
cout<<"Before swap x:"<<a<<", y : = "<<b<<endl;
swapValue(a, b);
cout<<"after swap x:"<<a<<", y : = "<<endl;

cout<<"double type--->"<<endl;
double m =10.89, n =20.990;
cout<<"Before swap x:"<<m<<", y : = "<<n<<endl;
swapValue(m, n);
cout<<"after swap x:"<<m<<", y : = "<<n<<endl;
return 0;
}