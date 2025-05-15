#include<iostream>
using namespace std;

class Solution {
    public:
        void pattern17(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                char ch='A';
                for(int j=1;j<=2*i-1;j++)
                {
                    cout<<ch;
                    if(j<i) ch++;
                    else ch--;
                }
                for(int j=1;j<=n-i;j++)
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
    sol.pattern17(n);
    return 0;
}