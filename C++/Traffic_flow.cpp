#include <iostream>
#include <vector>
#include <climits>  // Include this library for INT_MAX
using namespace std;

int shortest_path(vector<vector<int>>& grid, pair<int, int> start, pair<int, int> end) {
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[start.first][start.second] = grid[start.first][start.second];

    for (int i = start.first; i < rows; ++i) {
        for (int j = start.second; j < cols; ++j) {
            if (i > start.first)
                dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j]);
            if (j > start.second)
                dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j]);
        }
    }

    return dp[end.first][end.second] != INT_MAX ? dp[end.first][end.second] : -1;
}

int main() {
    int n, m;
    
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];
    pair<int, int> start, end;

    cin >> start.first >> start.second;
    start.first--; start.second--;  // Adjust for 0-indexing
    
    cin >> end.first >> end.second;
    end.first--; end.second--;  // Adjust for 0-indexing

    int result = shortest_path(grid, start, end);
    if (result == -1)
        cout << -1 ;
    else
        cout  << result ;

    return 0;
}
