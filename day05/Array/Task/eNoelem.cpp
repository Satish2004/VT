#include <iostream>
using namespace std;
int main()
{
  int n = 7;
  int arr[n] = {5,1,5,1,4,4,2,2};
  // int start = 0;
  // int start2 = start + 1;

  // for (int i = 0; i < n; i++)
  //{
  int unique = 0;
  for (int j = 0; j < n; j++)
  {
    // if (arr[i] ^ arr[j]==0)
    //{
    // unique ^= arr[j];
    unique = unique^ arr[j];

    //  cout<<"hello";
    // count++;
    // start2++;
    // start++;
    // cout << arr[i] << endl;

    // return 0;
    //  break;
  }
  // cout<<unique;
  // else
  //{
  cout << "unique is  =" << unique;

  // if (arr[start] ^ arr[start2])
  // {
  //   count++;
  // }
  // else
  // {
  //   cout << "unique value is =" << endl;
  // }

  return 0;
}