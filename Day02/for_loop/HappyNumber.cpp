#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number=" << endl;
    cin >> num;

    while (num != 1 && num != 4) {
        int sum = 0; 

     
        while (num > 0) {
            int lastDigit = num % 10; 
            sum += lastDigit * lastDigit; 
            num /= 10;
        }

     
        num = sum;
    }

   
    if (num == 1) {
        cout << "True -> It's a happy number" << endl;
        return true;
    } else {
        cout << "False -> Unhappy number" << endl;
        return false;
    }

    return 0;
}
