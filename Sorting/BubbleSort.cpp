#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n)
{
    for(int i=n-1; i>=0; i--)
    {
        int didswap =0;
        for (int j = 0; j<=n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    cout<<"Array after Sort: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}