#include<iostream>
using namespace std;

class solution
{
    public:
    int countodddigits(int num)
    {
        int count =0;
        while(num>0)
        {
            int lastdigit = num % 10;
            if(lastdigit%2==1)
            {
                count+=1;
            }
            num=num/10;
        }  
        return count; 
    }
    int countevendigits(int num)
    {
        int count =0;
        while(num>0)
        {
            int lastdigit = num % 10;
            if(lastdigit%2==0)
            {
                count+=1;
            }
            num=num/10;
        }  
        return count; 
    }
};
int main()
{
    solution sol;
    int num;
    cout<<"enter a no:";
    cin>>num;
    cout<<"Odd digits are:"<<sol.countodddigits(num)<<endl;
    cout<<"Even digits are:"<<sol.countevendigits(num);
    return 0;
}