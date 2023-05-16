#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int maxx=-1;
    vector<long long>v(100005,0);

    while(n--)
    {
        int x;
        cin>>x;
        v[x]++;
        maxx=max(maxx,x);
    }
    vector<long long>u(100005,0);

    u[0]=0;
    u[1]=v[1];

    for(long long i=2;i<=100000;i++)
    {
        u[i]=max(u[i-1],u[i-2]+(v[i]*i));
    }

    cout<<u[maxx]<<'\n';

    return 0;
}


