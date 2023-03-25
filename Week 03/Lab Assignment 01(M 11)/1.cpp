#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>adja_list[n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           int x;
           cin>>x;
           if(x==1)
           {
            adja_list[i].push_back(j);
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<i<<": ";
        for(auto child:adja_list[i])
        {
            cout<<child<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

