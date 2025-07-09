#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    vector<int>divisors(int n)
    {
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ans.push_back(i);
            }
        }
    return ans;
   }
};
int main()
{
    int n;
    cout<<"Enter a No:";
    cin>>n;
    Solution sol;
    vector<int>ans=sol.divisors(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}