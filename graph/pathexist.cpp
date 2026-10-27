#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int dest, vector<vector<int>>& adj,
         vector<bool>& visited) {
    if (node == dest) return true;

    visited[node] = true;

    for (int next : adj[node]) {
        if (!visited[next]) {
            if (dfs(next, dest, adj, visited))
                return true;
        }
    }
    return false;
}

int main() {
    int n = 6;
    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {3, 5}, {5, 4}, {4, 3}
    };

    int source = 0, destination = 2;

    vector<vector<int>> adj(n);

    for (auto e : edges) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    vector<bool> visited(n, false);

    if (dfs(source, destination, adj, visited))
        cout << "Path exists";
    else
        cout << "Path does not exist";

    return 0;
}