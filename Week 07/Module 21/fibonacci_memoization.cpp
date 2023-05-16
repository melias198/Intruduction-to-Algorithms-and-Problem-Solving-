#include <bits/stdc++.h>

using namespace std;
const int N=100;
int dp[N];

/*

- fib(n) -> calculate the nth fibonacci number
- fib(n) = fib(n-1)+fib(n-2)
- fib(1)=1,fib(2)=1

*/

int fibonacci(int n)
{
    if(n<=2)
    {
        return 1;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int ans=fibonacci(n-1)+fibonacci(n-2);
    dp[n]=ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
    }

    cout<<fibonacci(n)<<'\n';
    
    return 0;
}

