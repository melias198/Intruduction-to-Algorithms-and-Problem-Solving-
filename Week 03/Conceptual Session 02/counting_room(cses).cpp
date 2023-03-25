#include <bits/stdc++.h>

using namespace std;

const int N=2000;
int n,m;
int maze[N][N],visited[N][N];

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
                q.push(adj_node);
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
  
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
        }
    }

    int cnt_room=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(maze[i][j]==0 && visited[i][j]==0)
            {
                bfs({i,j});
                cnt_room++;
            }
        }
    }

    cout<<cnt_room<<"\n";
   
    return 0;
}

