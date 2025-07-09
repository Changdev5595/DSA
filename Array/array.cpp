#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter ele:";

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}