#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number=" << endl;
    cin >> num;
    int sum = 0;
    while (true)
    {
        // int sum = 0;
        while (num > 0)
        {

            int lastDigit = num % 10;
            sum = sum + (lastDigit * lastDigit);
            num = num / 10;
        }
        if (sum == 1 || sum < 10 && sum != 7)
        {
            // cout <<"number is= "<< num << " is happy number" << endl;
            // break;
            num = sum;
            sum = 0;
        }

    }

    
        if(sum==1)
        {
            cout <<" is unhappy number" << endl;
        }
        else{
            cout<<"unhappy number"<<endl;
        }
        
    return 0;
}