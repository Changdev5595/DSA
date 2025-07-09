#include<iostream>
using namespace std;

class solution
{
    public:
    int sum(int arr[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};
int main()
{
    solution sol;
    int arr[]={3,4,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of all elements of array:"<<sol.sum(arr,n)<<endl;
    return 0;
}