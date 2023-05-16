#include <bits/stdc++.h>

using namespace std;

const int N=1005;
int n,ax,ay,bx,by,cx,cy;
int grid[N][N],visited[N][N];

int dx[]={0,0,-1,1,-1,1,-1,1};
int dy[]={1,-1,0,0,1,-1,-1,1};

bool is_inside(pair<int,int>coor)
{
    int x=coor.first;
    int y=coor.second;

    if(x>0 && x<=n && y>0 && y<=n)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int,int>coor)
{   
    int x=coor.first;
    int y=coor.second;

    if(grid[x][y]==-1)
    {
        return false;
    }
    return true;
}

void dfs(pair<int,int>node)
{
   visited[node.first][node.second]=1;

   int x=node.first;
   int y=node.second;

   for(int i=0;i<8;i++)
   {
    int new_x=x+dx[i];
    int new_y=y+dy[i];

    pair<int,int>adj_node={new_x,new_y};

    if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0)
    {
       dfs(adj_node);
    }
   }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==ax || j==ay || abs(i-ax)==abs(j-ay))
            {
                grid[i][j]=-1;
            }
        }
    }

    dfs({bx,by});

    if(visited[cx][cy]==1)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
    return 0;
}

