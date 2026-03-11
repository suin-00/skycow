/*#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N,M;
vector<string> visited;
vector<vector<int>> graph;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = '1';
    while (!q.empty()) {
        int X = q.front().first;
        int Y = q.front().second;
        q.pop();
        if (X == N && Y == M) {
            return;
        }
        for (int i = 0; i < 4; i++) {
            int nx = X + dx[i];
            int ny = Y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (visited[nx][ny] == '1') {
                    q.push({nx, ny});
                    visited[nx][ny] = '0';
                    graph[nx][ny] = graph[X][Y] + 1;
                }
            }
        }
    }

}


int main() {
    cin >> N >> M;
    visited.resize(N);
    graph.resize(N, vector<int>(M, 0));
    graph[0][0] = 1;
    for (int i = 0; i < N; i++) {
        cin >> visited[i];
    }
    bfs(0,0);
    cout << graph[N-1][M-1] << endl;
    return 0;
}*/