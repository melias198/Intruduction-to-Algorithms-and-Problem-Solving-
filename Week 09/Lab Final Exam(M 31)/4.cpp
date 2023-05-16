#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;
int ara[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;

    map<int,int>mp;

    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]=i;
    }

    int b,c,ans=0;

    for(int i=1;i<=n;i++)
    {
        int a=x-ara[i];
        if(mp[a]>0 && mp[a]!=i)
        {
          b=i;
          c=mp[a];
          ans=-1;
          break;
        }
    }
    
    if(ans==-1)
    {
        cout<<b<<" "<<c;
    }
    else
    {
        cout<<"IMPOSSIBLE";
    }

    return 0;
}

