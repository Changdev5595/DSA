#include<iostream>
using namespace std;

class solution
{
    public:
    void reverse(int arr[],int n)
    {
        int* temp = new int[n];
        for(int i=0;i<n;i++)
        {
            temp[n-i-1]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
     delete[] temp;
     return;
    }
};
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    
    int arr[]={3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    solution sol;
    cout<<"Original Array:";
    printarray(arr,n);

    sol.reverse(arr,n);
    cout<<"Reversed Array:";
    printarray(arr,n);

    return 0;
}