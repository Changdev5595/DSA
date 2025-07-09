#include<iostream>
using namespace std;

class solution
{
    public:
    int reverseno(int num)
    {
        int revno=0;
        while (num>0)
        {
            int lastdigit = num % 10;
            revno = (revno*10)+lastdigit;
            num=num/10;
        }
        return revno;
        
    }
};
int main()
{
    solution sol;
    int num;
    cout<<"enter a no:";
    cin>>num;
    cout<<"Number after Reversing:"<<sol.reverseno(num)<<endl;

    return 0;
}