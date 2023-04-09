#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

