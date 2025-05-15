#include<iostream>
using namespace std;

class Solution{
    public:
    void isAdult(int age){
        if(age>=18)
        {
            cout<<"Adult";
        }
        else{
            cout<<"Teen";
        }
    }
};
int main()
{
    Solution sol;
    int age;
    cout<<"Enter age:";
    cin>>age;

    sol.isAdult(age);
    return 0;
}