#include <iostream>
using namespace std;
int main()
{
    int n;
    // int i = i+2;
    int sum = 0;
    cout << "enter the number";
    cin >> n;
    for (int i = 0; i <= n; i =i+2)
    {
        
        sum = sum + i;

        
    }
    cout << " sum of even natural number is = " << sum;
    
    return 0;
}


// 2nd way--->


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     // int i = i+2;
//     int sum = 0;
//     cout << "enter the number";
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
        
//        if(n%i==0){
//           sum = sum + i;

// }
     // else{ continue}
        
//     }
//     cout << " sum of even natural number is = " << sum;
    
//     return 0;
// }