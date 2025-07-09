#include<iostream>
using namespace std;
class Solution
{
    public:
    bool isPrime(int n)
    {
        if(n<2) return false;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    int n;
    cout<<"Enter a No:";
    cin>>n;
    Solution sol;
    bool op = sol.isPrime(n);
    if(op) cout<<n<<" is a Prime No";
    else cout<<n<<" is not Prime No";
    return 0;
}