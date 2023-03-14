#include <bits/stdc++.h>

using namespace std;

/*
1. base: if(n==0) return 0
2. small number would be number n/10 and + n%10.
3. Generalised formula: digit_sum(n/10)+n%10;
*/

int digit_sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return digit_sum(n/10)+n%10;
}

int main()
{
    int n;
    cin>>n;
    cout<<digit_sum(n);
    return 0;
}

