#include<iostream>
using namespace std;

class Solution 
{
    private:
    void pattern7(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                for(int j=1;j<=2*i-1;j++)
                {
                    cout<<"*";
                }
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                cout<<endl;
            }
        }
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
    public:
        void pattern9(int n)
        {
            pattern7(n);
            pattern8(n);
        }
};
    int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    Solution sol;
    sol.pattern9(n);
    return 0;
}