
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc,
             int color, int originalColor) {
        
        int n = image.size();
        int m = image[0].size();

        if (sr < 0 || sc < 0 || sr >= n || sc >= m)
            return;

        if (image[sr][sc] != originalColor)
            return;

        image[sr][sc] = color;

        dfs(image, sr + 1, sc, color, originalColor);
        dfs(image, sr - 1, sc, color, originalColor);
        dfs(image, sr, sc + 1, color, originalColor);
        dfs(image, sr, sc - 1, color, originalColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc, int color) {
        
        int originalColor = image[sr][sc];

        if (originalColor == color)
            return image;

        dfs(image, sr, sc, color, originalColor);

        return image;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    int sr = 1, sc = 1, color = 2;

    vector<vector<int>> ans = sol.floodFill(image, sr, sc, color);

    for (auto row : ans) {
        for (auto pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
