#include<iostream>
using namespace std;

class solution
{
    public:
    bool ispalindrome(int num)
    {
        int revno=0;
        int copy=num;
        while (num>0)
        {
            int lastdigit = num % 10;
            revno = (revno*10)+lastdigit;
            num=num/10;
        }
        if(revno==copy)
        {
            return true;
        }else{
            return false;
        }
        
    }
};
int main()
{
    solution sol;
    int num;
    cout<<"enter a no:";
    cin>>num;
    bool ans=sol.ispalindrome(num);
    if(ans) cout << "The given number is a palindrome";
    else cout << "The given number is not a palindrome";
    return 0;
}