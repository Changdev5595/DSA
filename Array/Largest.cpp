#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int LargestEle(vector<int> &nums)
    {
        int max = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
            }
        }
        return max;
        /*
        sort(nums.begin(),nums.end());
        int max = nums[nums.size()-1];
        return max;*/
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
    int result = sol.LargestEle(arr);
    cout<<"Largest Element is: "<<result;
    return 0;
}