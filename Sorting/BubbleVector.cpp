#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> BubbleSort(vector<int>& nums)
    {
        int n = nums.size();
        for(int i = n-1; i>=0; i--)
        {
            int didswap = 0;
            for(int j = 0; j<=i-1; j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    didswap = 1;
                }
            }
            if(didswap == 0)
            {
                break;
            }
        }
        return nums;
    }
};
int main()
{
    Solution sol;
    int n;
    cout<<"Enter the size od array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Originl Array: ";
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> Sortedarr = sol.BubbleSort(arr);
    cout<<"Array After Sort:";
    for(auto i: Sortedarr)
    {
        cout<<i<<" ";
    }
    return 0 ;
}