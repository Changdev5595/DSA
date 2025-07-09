#include<iostream>
using namespace std;
class solution
{
    public:
    int factorial(int n)
    {
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
};
int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    solution sol;
    int ans = sol.factorial(n);
    cout<<"The factorial of "<<n<<" is : "<<ans;
    return 0;
}