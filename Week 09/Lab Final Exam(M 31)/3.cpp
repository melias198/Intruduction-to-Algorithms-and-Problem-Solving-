#include <bits/stdc++.h>

using namespace std;

const int N=105;
const int MOD=1e9+7;
int coin[N];
long long dp[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }

    dp[0]=1;

    
    for(int target=1;target<=k;target++)
    {
        for(int j=0;j<n;j++)
        {
            if(target-coin[j]>=0)
            {
                dp[target]=(dp[target]+dp[target-coin[j]])%MOD;
            }
        }
    }
       

    cout<<dp[k];
    
    return 0;
}

