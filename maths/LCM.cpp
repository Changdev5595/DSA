#include<bits/stdc++.h>
using namespace std;
class Solotion
{
    public:
    int LCM(int n1,int n2)
    {
        int lcm;
        int maxi = max(n1,n2);
        int i=1;
        while(1)
        {
            int mul = maxi*i;
            if(n1%i==0 && n2%i==0)
            {
                lcm = mul;
                break;
            }
            i++;
        }
        return lcm;
    }
};
int main()
{
    int n1=50;
    int n2=25;
    Solotion sol;
    int op = sol.LCM(n1,n2);
    cout<<"LCM of "<<n1<<","<<n2<<" is: "<<op;
    return 0;
}