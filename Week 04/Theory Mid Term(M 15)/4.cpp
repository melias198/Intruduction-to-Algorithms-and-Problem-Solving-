#include <bits/stdc++.h>

using namespace std;

const int N=105;
vector<int>v(N);

int sum_array(int n)
{
    if(n==0)
    {
        return v[0];
    }
    return sum_array(n-1)+v[n];
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int sum=sum_array(n);
    cout<<sum<<'\n';

    return 0;
}

