#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number";
    cin >> num;

    while (num != 0 || num > 9)
    {
        int sum = 0;
        while (num > 0)
        {
            for (int i = 1; i <= num; i++)
            {
                int lastDigit = num % 10;
                sum = sum + (lastDigit * lastDigit);
                num = num / 10;
                

            }
             
        }
      
    }
    if(num==1){
        
    }

    return 0;
}