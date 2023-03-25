#include <bits/stdc++.h>

using namespace std;

const int N=2000;
int n,m;
int maze[N][N],visited[N][N],level[N][N];

int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

bool is_inside(pair<int,int>coor)
{
    int x=coor.first;
    int y=coor.second;

    if(x>=0 && x<n && y>=0 && y<m)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int,int>coor)
{
    int x=coor.first;
    int y=coor.second;

    if(maze[x][y]==-1)
    {
        return false;
    }
    return true;
}

void bfs(pair<int,int>src)
{
    queue<pair<int,int>>q;
    visited[src.first][src.second]=1;
    level[src.first][src.second]=0;
    q.push(src);
    while(!q.empty())
    {
        pair<int,int>head=q.front();
        q.pop();
        int x=head.first;
        int y=head.second;

        for(int i=0;i<4;i++)
        {
            int new_x=x+dx[i];
            int new_y=y+dy[i];

            pair<int,int>adj_node={new_x,new_y};

            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0)
            {
                visited[new_x][new_y]=1;
                level[new_x][new_y]=level[x][y]+1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    pair<int,int>start,end;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            level[i][j]=-1;
        }
    }

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='#')
            {
              maze[i][j]=-1;
            }
            else if(s[j]=='A')
            {
              start={i,j};
            }
            else if(s[j]=='B')
            {
              end={i,j};
            }
        }
    }

    bfs(start);

    if(level[end.first][end.second]==-1)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
        cout<<level[end.first][end.second]<<"\n";
    }

    return 0;
}

