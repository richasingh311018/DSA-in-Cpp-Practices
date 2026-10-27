#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj,
         vector<bool>& visited) {
    visited[node] = true;

    for (int i = 0; i < adj.size(); i++) {
        if (adj[node][i] == 1 && !visited[i]) {
            dfs(i, adj, visited);
        }
    }
}

int main() {
    vector<vector<int>> adj = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}
    };

    int n = adj.size();
    vector<bool> visited(n, false);
    int provinces = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            provinces++;
        }
    }

    cout << "Number of provinces: " << provinces;

    return 0;
}