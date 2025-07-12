#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> SelectionSort(vector<int>& nums)
    {
        for(int i=0; i<nums.size()-1; i++)
        {
            int minindex = i;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j]<nums[minindex])
                {
                    minindex = j;
                }
            }
            swap(nums[i],nums[minindex]);
        }
        return nums;
    }
};
int main()
{
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    Solution s1;
    vector<int> sortedArr = s1.SelectionSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}