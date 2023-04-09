#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,k;
    cin>>n>>k;
    
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    long long int l=0,r=0,sum=0,ans=0;

    while(r < n)
    {
        sum+=v[r];

        if(sum <= k)
        {
            ans=max(ans,r-l+1);
            r++;
        }

        else if(sum > k)
        {
            while(sum > k && l <= r)
            {
                sum -= v[l];
                l++;
            }
            r++;
        }
    }

    cout<<ans<<'\n';

    return 0;
}

