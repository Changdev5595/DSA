#include<iostream>
using namespace std;

class Solution {
    public:
        void pattern18(int n)
        {
            char el='A'+n-1;
            for(int i=0;i<n;i++)
            {
                for(char ch=el-i;ch<=el;ch++)
                {
                    cout<<ch<<" ";
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
    sol.pattern18(n);
    return 0;
}