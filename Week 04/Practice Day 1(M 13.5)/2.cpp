#include <bits/stdc++.h>

using namespace std;
const int N=100;
int matrix[N][N];
int visited[N];
int parent[N];
int level[N];
int n;

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    level[src]=1;
    parent[src]=-1;

    while(!q.empty())
    {
        int row=q.front();
        q.pop();

        for(int col=1;col<=n;col++)
        {
            if(matrix[row][col]==1 && visited[col]==0)
            {
                visited[col]=1;
                parent[col]=row;
                level[col]=level[row]+1;
                q.push(col);
            }
        }
    }
}

int main()
{
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
          cin>>matrix[i][j];
        }
    }

    int src=1;
    bfs(src);

    int dest=n;
    if(visited[dest]==0)
    {
        cout<<"IMPOSSIBLE"<<"\n";
        return 0;
    }

    cout<<level[dest]<<"\n";

    vector<int>path;
    int end=n;

    while(true)
    {
        path.push_back(end);
        if(end==src)
        {
            break;
        }
        end=parent[end];
    }

    reverse(path.begin(),path.end());

    for(auto seq:path)
    {
        cout<<seq<<" ";
    }

    return 0;
}

