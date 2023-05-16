#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if(n<=2)
    {
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int main()
{
    cout<<fib(5)<<"\n";
    cout<<fib(4)<<"\n";
    cout<<fib(3)<<"\n";
    
    return 0;
}

