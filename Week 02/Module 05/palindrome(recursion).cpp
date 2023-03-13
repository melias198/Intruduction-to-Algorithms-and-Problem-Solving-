#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string str)
{
    if(str=="" || str.size()==1)
    {
       return true;
    }
    int n=str.size();
    string small_str=str.substr(1,n-2);
    return isPalindrome(small_str) && (str[0]==str.back());
}

int main()
{
    string str;
    cin>>str;
    if(isPalindrome(str))
    {
        cout<<"Paindrome"<<"\n";
    }
    else
    {
        cout<<"Not Palindrome"<<"\n";
    }

    return 0;
}

