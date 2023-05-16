#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
int visited[N][N];
int grid[N][N];
int row, col, ans;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int> coor)
{
    int x = coor.first;
    int y = coor.second;

    if (x >= 0 && x < row && y >= 0 && y < col)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int, int> coor)
{
    int x = coor.first;
    int y = coor.second;

    if (grid[x][y] == 0)
    {
        return false;
    }
    return true;
}

void dfs(pair<int, int> node)
{
    visited[node.first][node.second] = 1;

    int x = node.first;
    int y = node.second;

    ans += grid[x][y];

    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        pair<int, int> adj_node = {new_x, new_y};

        if (is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
        {
            dfs(adj_node);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> row >> col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }

        memset(visited,0,sizeof(visited));

        int res = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (visited[i][j] == 0 && grid[i][j]!=0)
                {
                    ans = 0;
                    dfs({i, j});
                    res = max(res, ans);
                }
            }
        }

        cout << res << '\n';
    }
    return 0;
}
