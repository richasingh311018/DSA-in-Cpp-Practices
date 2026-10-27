#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj,
         vector<int>& state) {
    if (state[node] == 1)
        return false;

    if (state[node] == 2)
        return true;

    state[node] = 1;

    for (int next : adj[node]) {
        if (!dfs(next, adj, state))
            return false;
    }

    state[node] = 2;
    return true;
}

int main() {
    int numCourses = 4;

    // Each pair is {course, prerequisite}
    vector<vector<int>> prerequisites = {
        {1, 0}, {2, 1}, {3, 2}
    };

    vector<vector<int>> adj(numCourses);

    for (auto p : prerequisites) {
        adj[p[1]].push_back(p[0]);
    }

    vector<int> state(numCourses, 0);
    bool possible = true;

    for (int i = 0; i < numCourses; i++) {
        if (state[i] == 0 && !dfs(i, adj, state)) {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << "All courses can be completed";
    else
        cout << "All courses cannot be completed";

    return 0;
}