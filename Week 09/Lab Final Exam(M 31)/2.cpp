/*


class Solution
{
public:
    const int INF = 1e9;
    vector<pair<int, int>> adja_list[105];
    int visited[105];
    int d[105];
    int nodes;

    void dijkstra(int src)
    {
        for (int i = 1; i <= nodes; i++)
        {
            d[i] = INF;
        }

        d[src] = 0;

        for (int i = 0; i < nodes; i++)
        {
            int selected_node = -1;
            for (int j = 1; j <= nodes; j++)
            {
                if (visited[j] == 1)
                {
                    continue;
                }
                if (selected_node == -1 || d[selected_node] > d[j])
                {
                    selected_node = j;
                }
            }

            visited[selected_node] = 1;

            for (auto adja_entry : adja_list[selected_node])
            {
                int adj_node = adja_entry.first;
                int edges_cost = adja_entry.second;

                if (d[selected_node] + edges_cost < d[adj_node])
                {
                    d[adj_node] = d[selected_node] + edges_cost;
                }
            }
        }
    }

    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        for (int i = 0; i < times.size(); i++)
        {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];

            adja_list[u].push_back({v, w});
        }
        nodes = n;
        int src = k;
        dijkstra(src);

        int ans = 0;

        for (int i = 1; i <= nodes; i++)
        {
            if (d[i] == INF)
            {
                ans = -1;
                break;
            }
            ans = max(ans, d[i]);
        }
        return ans;
    }
};

*/


