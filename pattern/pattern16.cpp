#include<iostream>
using namespace std;

class Solution 
{
    public:
        void pattern16(int n)
        {
            for(int i=0;i<n;i++)
            {
                char ch='A'+i;
                for(int j=0;j<=i;j++)
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
    sol.pattern16(n);
    return 0;
}