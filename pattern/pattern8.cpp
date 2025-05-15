#include<iostream>
using namespace std;

class Solution {
    public:
        void pattern8(int n)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    cout<<" ";
                }
                for(int j=0;j<(2*n-1)-(2*i);j++)
                {
                    cout<<"*";
                }
                for(int j=0;j<i;j++)
                {
                    cout<<" ";
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
    sol.pattern8(n);
    return 0;
}