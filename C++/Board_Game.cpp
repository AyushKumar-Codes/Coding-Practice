#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Structure to store coordinates
struct Point {
    int x, y;
};

// Function to check if the given coordinates are valid
bool isValid(int x, int y, int n, int m, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == 0 && !visited[x][y]);
}

// Function to find the shortest path using BFS
int findShortestPath(int n, int m, vector<vector<int>>& maze, Point start, Point dest, Point nextMove) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    queue<pair<Point, int>> q;
    q.push({start, 0});
    visited[start.x][start.y] = true;

    while (!q.empty()) {
        Point curr = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (curr.x == dest.x && curr.y == dest.y) {
            return dist;
        }

        // Generate all possible next move coordinates
        vector<Point> moves = {{nextMove.x, nextMove.y}, {nextMove.y, -nextMove.x}, {-nextMove.y, nextMove.x}, {-nextMove.x, -nextMove.y}};

for (const Point& move : moves) {
    int nextX = curr.x + move.x;
    int nextY = curr.y + move.y;

    if (isValid(nextX, nextY, n, m, maze, visited)) {
        q.push({{nextX, nextY}, dist + 1});
        visited[nextX][nextY] = true;
    }
}
    }

    // If no path is found
    return -1;
}

int main() {
    int n, m;
    
    cin >> n >> m;

    vector<vector<int>> maze(n, vector<int>(m));

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> maze[i][j];
        }
    }

    Point start, dest, nextMove;
    
    cin >> start.x >> start.y;

    
    cin >> dest.x >> dest.y;

    
    cin >> nextMove.x >> nextMove.y;

    int shortestPath = findShortestPath(n, m, maze, start, dest, nextMove);

    if (shortestPath != -1) {
        cout << shortestPath;
    } else {
        cout << -1;
    }

    return 0;
}



// 6 6
// 0 1 0 0 0 0
// 0 0 0 0 0 1
// 0 1 0 0 0 0
// 1 1 0 0 0 1
// 0 0 0 0 0 0
// 1 1 0 0 1 0
// 1 0
// 5 3
// 1 2

// ans 3