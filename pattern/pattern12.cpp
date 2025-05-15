#include<iostream>
using namespace std;

class Solution 
{
    public:
        void pattern12(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    cout<<j;
                }
                for(int j=1;j<=(2*n)-(2*i);j++)
                {
                    cout<<" ";
                }
                for(int j=i;j>=1;j--)
                {
                    cout<<j;
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
    sol.pattern12(n);
    return 0;
}