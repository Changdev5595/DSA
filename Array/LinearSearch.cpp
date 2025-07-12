#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int linearSearch(vector<int> &nums , int target)
    {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution sol;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter arr ele: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to be search: ";
    cin>>target;
    int result = sol.linearSearch(arr,target);
    cout<<target<<" is present at index: "<<result;
    return 0;
} 