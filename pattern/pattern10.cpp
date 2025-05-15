#include<iostream>
using namespace std;

class Solution 
{
    private:
    void pattern2(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
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
    public:
        void pattern10(int n)
        {
           pattern2(n);
           pattern5(n-1);
        }
};
int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    Solution sol;
    sol.pattern10(n);
    return 0;
}