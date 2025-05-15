#include<iostream>
using namespace std;
class Solution
{
    public:
      void printX(int X, int N)
      {
        if(N<0)
        {
            cout<<"Invalid"<<endl;
            return;
        }
        for(int i=0;i<N;i++)
        {
            cout<<X;
            
            if(i<N-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
      }
};
int main()
{
    Solution sol;
    int X=5;
    int N=7;
    sol.printX(X,N);
    return 0;
}