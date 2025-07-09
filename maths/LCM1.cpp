#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    int GCD(int n1,int n2)
    {
        while(n1!=0 && n2!=0)
        {
            if(n1>n2)
            {
                n1 = n1%n2;
            }
            else{
                n2 = n2%n1;
            }
        }
        if(n2==0) return n1;
        else return n2;
    }
    public:
    int LCM(int n1,int n2)
    {
        int gcd = GCD(n1,n2);
        int lcm = (n1*n2)/gcd;
        return lcm;
    }
};
int main()
{
    int n1=50;
    int n2=25;
    Solution sol;
    int op = sol.LCM(n1,n2);
    cout<<"LCM of "<<n1<<","<<n2<<" is: "<<op;
    return 0;
}