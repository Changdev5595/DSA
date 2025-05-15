#include<iostream>
using namespace std;

class Solution 
{
    public:
        void pattern15(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(char ch='A';ch<='A'+(n-i);ch++)
                {
                    cout<<ch;
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
    sol.pattern15(n);
    return 0;
}