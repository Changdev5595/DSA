#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool reverseString(string &str)
    {
        string copy = str;
        int left = 0, right = str.length() - 1;
        while (left < right)
        {
            swap(str[left], str[right]);
            left++;
            right--;
        }
        if(copy==str) return true;
        else return false;
    }

    /*void reverseString(string &str) 
    {
        int n = str.length();
        string dups = {};
        for (int i=0;i<n;i++)
        {
            dups[n-i-1]=str[i];
        }
        for (int i=0;i<n;i++)
        {
            str[i]=dups[i];
        }
        return;
    }*/
};

int main() {
    string str = {'o', 'a', 'c', 'e', 'c' , 'a', 'r'};
    
    Solution sol;
    
    bool op = sol.reverseString(str);
    if(op) cout<<"palindrome";
    else cout<<"Not palindrome";
    return 0;

}