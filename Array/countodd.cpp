#include<iostream>
using namespace std;

class solution
{
    public:
    int countodd(int arr[],int n)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                count+=1;
            }
        }
        return count;
    }
    int counteven(int arr[],int n)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                count+=1;
            }
        }
        return count;
    }
};
int main()
{
    solution sol;
    int arr[]={3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Counts of Odd elements in array:"<<sol.countodd(arr,n)<<endl;
    cout<<"Counts of Even elements in array:"<<sol.counteven(arr,n)<<endl;
    return 0;
}