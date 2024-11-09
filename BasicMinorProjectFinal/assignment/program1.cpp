#include <iostream>
using namespace std;

int findFirstRepeatingElement(int *arr, int n) {
    for (int start = 0; start < n - 1; start++) { 
        for (int end = start + 1; end < n; end++) { 
            if (arr[start] == arr[end]) {
                return arr[start]; 
            }
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int result = findFirstRepeatingElement(arr, n);
    
    if (result != -1) {
        cout << " repeating element is : " << result << endl;
    } else {
        cout << "there is no repeating element sorry! ." << endl;
    }
    
    return 0;
}
