#include<iostream>
using namespace std;

class solution
{
    public:
    int countdigit(int num)
    {
        if(num==0)
        {
            return 1;
        }
        int cnt=0;
        while(num>0)
        {
            cnt+=1;
            num=num/10;
        }
        return cnt;
    }
};
int main()
{
    solution sol;
    int num = 12345670;
    cout<<"Count of All digits in No:"<<sol.countdigit(num);
    return 0;
}