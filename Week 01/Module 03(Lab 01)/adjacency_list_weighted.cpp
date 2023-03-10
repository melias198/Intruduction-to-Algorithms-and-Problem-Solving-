#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes=4;
    vector<pair<int,int>>adja_list[nodes];

    adja_list[0]={{1, 2}};
    adja_list[1]={{2, 4}};
    adja_list[2]={};
    adja_list[3]={{1, 7}, {2, 8}};
    
    //adja_list[0].push_back({1, 2});
   // adja_list[1].push_back({2, 4});
   // adja_list[3].push_back({1, 7});
   // adja_list[3].push_back({2, 8});

    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adja_list[i].size();j++)
        {
            cout<<"("<<adja_list[i][j].first<<","<<adja_list[i][j].second<<"), ";
        }
        cout<<"\n";
    }

    return 0;
}

