#include <bits/stdc++.h>

using namespace std;
const int N=100;
int dp[N];

/*

- fib(n) -> calculate the nth fibonacci number
- fib(n) = fib(n-1)+fib(n-2)
- fib(1)=1,fib(2)=1

*/

int main()
{
    int n;
    cin>>n;

    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<dp[n]<<'\n';
    
    return 0;
}

