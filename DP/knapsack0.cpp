#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int>& wt, vector<int>& val) {
    int n = wt.size();

    vector<vector<int>> dp(n + 1,
                          vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {

            dp[i][w] = dp[i - 1][w];

            if (wt[i - 1] <= w) {
                dp[i][w] = max(
                    dp[i][w],
                    val[i - 1] + dp[i - 1][w - wt[i - 1]]
                );
            }
        }
    }

    return dp[n][W];
}

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> wt(n), val(n);

    for (int i = 0; i < n; i++) cin >> wt[i];
    for (int i = 0; i < n; i++) cin >> val[i];

    cout << knapsack(W, wt, val);
}
