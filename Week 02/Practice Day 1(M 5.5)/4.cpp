#include <bits/stdc++.h>

using namespace std;


/*
1. base case: if(str.size()==1)return str;
2. small string would be string size -1 and + str[0].
3. Generalised formula: reverse(str.substr(1))+str[0];
*/

string reverse(string str)
{
    if(str.size()==1)
    {
       return str;
    }
   
    return reverse(str.substr(1))+str[0];
}

int main()
{
    string s;
    cin>>s;
    string ans=reverse(s);
    cout<<ans;
    return 0;
}

