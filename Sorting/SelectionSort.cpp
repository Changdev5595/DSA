#include<iostream>
using namespace std;
void Selectionsort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minindex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before selection sort:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Selectionsort(arr,n);
    cout<<"Array after selection sort:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}