//take three no from user print which is largest 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b)
    {
        if(a>=c)
        {
            cout<<"A is Largest";
        }
        else{
            cout<<"C is Largest";
        }
    }
    else if(b>=c)
    {
        cout<<"B is Largets";
    }
    else{
        cout<<"C is Largest";
    }
    return 0;
}
