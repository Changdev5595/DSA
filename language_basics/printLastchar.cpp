#include<iostream>
using namespace std;
class Solution
{
    public:
        char printlastchar(string &s)
        {
            return s[s.size()-1];
        }
};
int main()
{
    Solution sol;
    string str="changdev";
    char lastchar=sol.printlastchar(str);
    cout<<"last char:"<<lastchar;
    return 0;

}