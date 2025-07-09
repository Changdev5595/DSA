#include<iostream>
using namespace std;

class solution
{
    public:
    bool isperfect(int num)
    {
        int sum=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==num)
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
    bool ans=sol.isperfect(num);
    if(ans) cout<<num<<" is perfect";
    else cout <<num<<" is not perfect";
    return 0;
}