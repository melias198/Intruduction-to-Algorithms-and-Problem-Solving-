#include <bits/stdc++.h>

using namespace std;

const int N=100;
long long ara[N];

long long fib(int n)
{
    if(n<=2)
    {
        return 1;
    }

    //check if fib(n) already calculated
    if(ara[n]!=0)
    {
        return ara[n];
    }

    ara[n]=fib(n-1)+fib(n-2);
    return ara[n];
}

int main()
{
    cout<<fib(50)<<"\n";
    cout<<fib(5)<<"\n";
    
    return 0;
}

