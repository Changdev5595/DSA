#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int GCD(int n1,int n2)
    {
        while(n1!=0 && n2!=0)
        {
            if(n1>n2)
            {
                n1 = n1%n2;
            }
            else
            {
                n2 = n2%n1;
            }
        }
        if(n2==0) return n1;
        else return n2;
    }
    //Optimal solution but takes too much time for execution
    // like n1-n2 so we just n1%n2
    /*int GCD(int n1,int n2)
    {
        while(n1!=0 && n2!=0)
        {
            if(n1>n2)
            {
                n1 = n1-n2;
            }
            else
            {
                n2 = n2-n1;
            }
        }
        if(n2==0) return n1;
        else return n2;
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