#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(int node, int parent,
             vector<vector<int>>& adj,
             vector<bool>& vis) {
        vis[node] = true;

        for (int next : adj[node]) {
            if (!vis[next]) {
                if (dfs(next, node, adj, vis))
                    return true;
            }
            else if (next != parent) {
                return true;
            }
        }

        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i] && dfs(i, -1, adj, vis))
                return true;
        }

        return false;
    }
};