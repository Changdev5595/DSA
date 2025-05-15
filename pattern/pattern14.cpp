#include<iostream>
using namespace std;

class Solution 
{
    public:
        void pattern14(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(char ch='A';ch<'A'+i;ch++)
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
    sol.pattern14(n);
    return 0;
}