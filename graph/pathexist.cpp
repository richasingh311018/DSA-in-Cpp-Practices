class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges,
                   int source, int destination) {
        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(n, false);
        return dfs(source, destination, adj, visited);
    }

    bool dfs(int node, int dest, vector<vector<int>>& adj,
             vector<bool>& visited) {
        if (node == dest) return true;

        visited[node] = true;

        for (int next : adj[node]) {
            if (!visited[next] && dfs(next, dest, adj, visited))
                return true;
        }

        return false;
    }
};