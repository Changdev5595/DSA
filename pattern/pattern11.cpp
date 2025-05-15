#include<iostream>
using namespace std;

class Solution {
    public:
        void pattern11(int n)
        {
            for(int i=1;i<=n;i++)
            {
                int start=1;
                if(i%2==0)
                {
                    start=0;
                }
                for(int j=1;j<=i;j++)
                {
                    cout<<start<<" ";
                    start = 1- start;
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
    sol.pattern11(n);
    return 0;
}