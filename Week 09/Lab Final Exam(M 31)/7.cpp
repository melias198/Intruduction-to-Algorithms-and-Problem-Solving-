#include <bits/stdc++.h>

using namespace std;
int n;
bool finds=0;

int required_length(long long v)
{
    queue<long long> q;
    map<long long, int> dist;
    dist[v] = 0;
    q.push(v);
    while(!q.empty())
    {
        long long k = q.front();
        q.pop();
        string s = to_string(k);
        if(s.size() == n)
        {
            finds=1;
            return dist[k];
        }
        for(auto x : s)
        {
            if(x == '0') continue;
            long long w = k * int(x - '0');
            if(!dist.count(w))
            {
                dist[w] = dist[k] + 1;
                q.push(w);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    cin>>n>>x;

    int ans=required_length(x);

    if(finds)
    {
        cout<<ans<<'\n';
    }
    else
    {
        cout << -1 << '\n';
    }
    return 0;
}

