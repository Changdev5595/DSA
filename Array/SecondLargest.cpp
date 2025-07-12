#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int SecondLargest(vector<int> &nums)
    {
        /*
        int n = nums.size();
        if(n<2)
        {
            return -1;
        }
        int Largest = nums[n-1];
        int secoondLargest = -1;
        
        sort(nums.begin(),nums.end());
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i] != Largest)
            {
                secoondLargest = nums[i];
                break;
            }
        }
        return secoondLargest;
        */
       int Largest = nums[0];
       for(int i=1; i<nums.size(); i++)
       {
        if(nums[i] > Largest)
        {
            Largest = nums[i];
        }
       }
       int secondLargest = INT_MIN;
       for(int i=0; i<nums.size(); i++)
       {
        if(nums[i] > secondLargest && nums[i] != Largest)
        {
            secondLargest = nums[i];
        }
       }
        return secondLargest == INT_MIN ? -1 : secondLargest;
    }
};
int main()
{
    Solution sol;
    int n = 7;
    vector<int> arr(n);
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int result = sol.SecondLargest(arr);
    cout<<"The SecondLargest Element in Array is: "<<result;
    return 0;
}