#include<iostream>
using namespace std;

class Solution 
{
    public:
        void pattern5(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n-i+1;j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
};
int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    Solution sol;
    sol.pattern5(n);
    return 0;
}