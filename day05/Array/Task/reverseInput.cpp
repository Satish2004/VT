#include <iostream>
using namespace std;
int main()
{
    int n;

    int strt = 0;
    

    cout << "enter the number of students" << endl;
    cin >> n;
    int end = n - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the student " << i + 1 << "= ";
        cin >> arr[i];
    }

    

        while (strt <= end)
        {
            swap(arr[strt], arr[end]);
            strt++;
            end--;
            //    cout<<arr[n];
          
        }
         
        // cout<<endl;
        // cout<<"reverse is "<<arr[n]
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}