#include <iostream>
using namespace std;
int main(){
  int num;
    int digitSum = 0; // rem
    cout << "enter your Number";
    cin >> num;
    while(num>=10){
        digitSum =0;
        while(num!=0){
            int lastDigit = num%10;
            int digitSum = digitSum+lastDigit;
            num = num /10;
        }
      
        
    }
    
return 0;
}