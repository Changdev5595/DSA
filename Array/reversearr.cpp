#include <iostream>
using namespace std;

class Solution {
public: 
    void reverse(int arr[], int left, int right) { 
        if (left >= right) {
            return; 
        }
        
        int temp = arr[left]; 
        arr[left] = arr[right];
        arr[right] = temp;

        reverse(arr, left + 1, right - 1); 
    }
};

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    solution.reverse(arr, 0, n - 1);

    cout << "Reversed array: ";
    printArray(arr, n); 

    return 0;
}
