#include <bits/stdc++.h>

using namespace std;

/*
1. base: if(isupper(str[0])) return str[0] .
2. small string would be string size -1.
3. Generalised formula: getCapital(str.substr(1))
*/

char getCapital(string str)
{
    if(str.empty())
    {
       return '\0';
    }

    if(isupper(str[0]))
    {
        return str[0];
    }

    else
    {
        return getCapital(str.substr(1));
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<getCapital(s);
    return 0;
}

