#include<iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n)
    {
        int count = log10(n) + 1;
        int sum=0;
        int copy=n;
        while(n>0)
        {
            int lastDigit=n%10;
            sum += static_cast<int>(pow(lastDigit, count) + 0.5);
            n=n/10;
        }
        if(sum==copy)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    Solution sol; 
    bool ans = sol.isArmstrong(n);
    if(ans)
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}