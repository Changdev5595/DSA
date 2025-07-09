#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int GCD(int n1,int n2)
    {
        int gcd = 1;
        for(int i=min(n1,n2);i>=1;i--)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd = i;
                break;
            }
        }
        return gcd;
    }
    //BRUTE SOLUTION
    /*int GCD(int n1,int n2)
    {
        int gcd = 1;
        for(int i=1;i<=min(n1,n2);i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd = i;
            }
        }
        return gcd;
    }*/
};
int main()
{
    int n1 = 81;
    int n2 = 27;
    Solution sol;
    int op = sol.GCD(n1,n2);
    cout<<"HCF of "<<n1<<","<<n2<<" is: "<<op;
    return 0;
}