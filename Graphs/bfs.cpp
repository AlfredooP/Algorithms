#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj, int source, vector<bool> &visited, vector<int> &res)
{
    // Create a queue for BFS
    queue<int> q;

    // Mark source node as visited and enqueue it
    visited[source] = true;
    q.push(source);

    // Iterate over the queue
    while (!q.empty())
    {

        // Dequeue a vertex from queue and store it
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        // Get all adjacent vertices of the dequeued
        // vertex curr If an adjacent has not been
        // visited, mark it visited and enqueue it
        for (int x : adj[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }

    return res;
}

int main()
{
    vector<vector<int>> adj = {{1, 2}, {0, 2, 3}, {0, 4}, {1, 4}, {2, 3}};

    int source = 0; // source node

    // create an array to store the traversal
    vector<int> res;

    // Initially mark all the vertices as not visited
    vector<bool> visited(adj.size(), false);

    vector<int> ans = bfs(adj,source,visited,res);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}