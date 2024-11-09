// two pointer technique-->


#include <iostream>
using namespace std;

// void Price(int arr[], int n)
// {
//     int left = 0;
//     int right = 1;
//     int profit = 0;

//     while (right < n)
//     {
//         if (arr[right] > arr[left])
//         {
//             int currentProfit = arr[left] - arr[right];
//             profit = max(profit, currentProfit);
//         }
//         else
//         {
//             left = right;
//         }
//         right++;
//     }
//     return arr;
// }

class solution{

    public:
    int maxProfit(int arr[], int length){
        int left =0;
        int right =1;
        int profit =0;
        while(right<length){
            if(arr[right]< arr[left]){
                int currProfit = arr[right]-arr[left];
                profit = max(profit , currProfit);

            }
            else{
                left =right;

            }
            right++;
        }
        return profit;

    }
};

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    solution sol = solution();
    cout<<sol. maxProfit(arr, sizeof(arr) / sizeof(int));
    
    

    return 0;
}
//static --> direct to the class
// no static =--> directly to the object
