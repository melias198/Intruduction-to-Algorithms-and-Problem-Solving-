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

    int matrix[nodes][nodes];

    memset(matrix,0,sizeof(matrix));

    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<adja_list[i].size();j++)
        {
            int a=adja_list[i][j];
            matrix[i][a]=1;
        }
    }

    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

