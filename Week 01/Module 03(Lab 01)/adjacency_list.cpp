#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes=4;
    vector<int>adja_list[nodes];
    
    adja_list[0]={1};
    adja_list[1]={0, 2, 3};
    adja_list[2]={1, 3};
    adja_list[3]={1, 2};

    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adja_list[i].size();j++)
        {
            cout<<adja_list[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

