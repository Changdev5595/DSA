#include<iostream>
#include<cmath>
using namespace std;
class Solution
{
    private:
    bool isPrime(int n)
    {
        if(n<2) return  false;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    public:
    int PrimeUptoN(int n)
    {
        int count = 0;
        cout<<"Prime no upto "<<n<<" are:";
        for(int i=2;i<=n;i++)
        {
            if(isPrime(i))
            {
                cout<<i<<" ";
                count++;
            }
        }
        cout<<endl;
        return count;
    }
};
int main()
{
    int n;
    cout<<"Enter a No: ";
    cin>>n;
    Solution sol;
    int TotalPrimes = sol.PrimeUptoN(n);
    cout<<"Total No of Prime no's upto "<<n<<" is: "<<TotalPrimes;
    return 0;
}