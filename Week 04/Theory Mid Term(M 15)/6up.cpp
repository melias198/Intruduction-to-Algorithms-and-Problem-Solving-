#include <bits/stdc++.h>

using namespace std;

const int N=1005;
int n,m;
int maze[N][N],visited[N][N];
pair<int,int>parent[N][N];
pair<int,int>start,end_p;

int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
char dir[4] = { 'R','L','U','D' };

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

bool is_border(pair<int,int>coor)
{
    int x=coor.first;
    int y=coor.second;

    if((x==0 || x==n-1) || (y==0 || y==m-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void bfs(pair<int,int>src)
{
    queue<pair<int,int>>q;
    visited[src.first][src.second]=1;
    parent[src.first][src.second]={-1,-1};
    end_p={-1,-1};
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
                parent[new_x][new_y]=head;
                q.push(adj_node);
                if(is_border(adj_node))
                {
                   end_p={new_x,new_y};
                }
            }
        }
    }
}

int main()
{
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='#' || s[j]=='M')
            {
              maze[i][j]=-1;
            }
            else if(s[j]=='A')
            {
              start={i,j};
            }
        }
    }

    bfs(start);

    if(visited[end_p.first][end_p.second])
    {
        cout<<"YES"<<"\n";
        vector<pair<int, int>> path;
        path.push_back({end_p.first,end_p.second});
        int x=end_p.first,y=end_p.second;
        while(parent[x][y] != make_pair(-1, -1))
        {
            pair<int, int> p = parent[x][y];
            x = p.first, y = p.second;
            path.push_back({ x,y });
        }
        reverse(path.begin(), path.end());
        string ans;
        for (int i = 0;i < path.size() - 1;i++)
        {
            for (int j = 0;j < 4;j++)
            {
                int dx_, dy_;
                dx_ = path[i].first + dx[j];
                dy_ = path[i].second + dy[j];
                if (dx_ == path[i + 1].first && dy_ == path[i + 1].second)
                {
                    ans.push_back(dir[j]);
                    break;
                }
            }
        }
        cout << ans.size() << '\n';
        cout << ans << '\n';
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;
}
