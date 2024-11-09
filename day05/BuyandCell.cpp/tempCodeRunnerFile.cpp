#include <iostream>
using namespace std;
class solution
{

public:
    int maxHeightFun(int height[], int length)
    {
        int left = 0;
        int right = length - 1;
        int maxArea = 0;
        //    int maxLeft =0;
        //    int maxRight =0;
        while (left < right)

        {
            int area = min(height[left], height[right]);
            int diff = right-left;
            int finalresult =area*diff;

            maxArea = max(finalresult, maxArea);
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
    

};

int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int length = sizeof(height) / sizeof(int);
    solution sol = solution();
    cout << "Area is = " << sol.maxHeightFun(height, length) << endl;
    return 0;
}
