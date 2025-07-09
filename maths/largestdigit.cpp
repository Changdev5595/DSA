#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestDigit(int n) {
      
        int largestDigit = 0;
        while(n > 0)
        {
            int lastDigit = n % 10;
            if(lastDigit > largestDigit)
            {
                largestDigit = lastDigit;
            }
            n = n / 10;
        }
        return largestDigit;
    }
};

int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    Solution sol; 
    int ans = sol.largestDigit(n);
    cout << "The largest digit in the number is: " << ans;
    return 0;
}
