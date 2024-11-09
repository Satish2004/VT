#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4, 5, 2}; 
    int size = sizeof(arr) / sizeof(int); 
    int element = 2;

    int result = countOccurrences(arr, size, element);
    cout <<result;

    return 0;
}
