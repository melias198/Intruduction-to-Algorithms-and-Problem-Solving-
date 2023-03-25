#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
vector<int> adja_list[N];
int visited[N];
int level[N];
stack<int> st;

bool cycle_detect(int src)
{
    level[src] = 1;

    for (auto child : adja_list[src])
    {
        if (level[child] == 0)
        {
            bool got_cycle = cycle_detect(child);
            if (got_cycle)
            {
                return true;
            }
        }
        else if (level[child] == 1)
        {
            return true;
        }
    }

    level[src]=2;
    return false;
}

void dfs(int node)
{
    visited[node] = 1;

    for (auto child : adja_list[node])
    {
        if (visited[child] == 0)
        {
            dfs(child);
        }
    }
    st.push(node);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adja_list[u].push_back(v);
    }

    bool c_exist = false;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
            bool cycle_exist = cycle_detect(i);
            if (cycle_exist)
            {
                c_exist = true;
                break;
            }
        }
    }

    if (c_exist)
    {
        cout << "IMPOSSIBLE"
             << "\n";
    }
    else
    {
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }

    return 0;
}
