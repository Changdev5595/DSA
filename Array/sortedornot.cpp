#include<iostream>
using namespace std;
class solution
{
    public:
    bool sortedornot(int arr[],int n)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    int arr[]={1,2,3,8,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    solution sol;
    bool sorted = sol.sortedornot(arr,n);
    if(sorted)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{ cout<<"Array is not sorted"<<endl;
    }
    return 0;
}