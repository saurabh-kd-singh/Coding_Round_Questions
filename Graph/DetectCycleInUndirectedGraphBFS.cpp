#include <vector>
#include <iostream>
#include <map>
#include <queue>
using namespace std;

bool detect(int src, vector<vector<int>> &adj, vector<int> &visited)
{
    queue<pair<int, int>> q;
    visited[src] = 1;
    q.push({src, -1});

    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = 1;
                q.push({neighbour, node});
            }
            else if (neighbour != parent)
            {
                return true;
            }
        }
    }
    return false;
}

bool isCycle(vector<vector<int>> &adj)
{
    int adjListSize = adj.size();
    vector<int> visited(adjListSize, 0);

    for (int i = 0; i < adjListSize; i++)
    {
        if (!visited[i])
        {
            if (detect(i, adj, visited) == true)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> adj  = {{1}, {0,2,4}, {1,3}, {2,4}, {1,3}};
    int answer = isCycle(adj);
    cout << answer;
    return 0;
}