#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to return the sum of
    the 1st and last element of the array */
    int sumOfFirstAndLast(int* nums) {
        // Check if the array is empty
        if (nums.empty()) {
            return 0; // Return 0
        }

        // Get the first element
        int first = nums[0];
        // Get the last element
        int last = nums[nums.size() - 1];
        
        // Return sum of the first and last elements
        return first + last;
    }
};

int main() {
    int nums[] = {2, 3, 4, 5, 6};
    
    // Creating an instance of Solution class
    Solution sol;
    
    /* Function call to return the sum of
    the 1st and last element of the array */
    int ans = sol.sumOfFirstAndLast(nums);

    cout << "Sum of first and last element: " << ans;
    return 0;
}