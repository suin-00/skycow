#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<string> graph;

bool dfs(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M) return false;
    if (graph[x][y] == '0') {
        graph[x][y] = '1';

        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);

        return true;
    }
    return false;
}

int main() {
    cin >> N >> M;
    graph.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> graph[i];
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (dfs(i, j)) { cnt++; }
        }
    }

    cout << cnt << endl;

    return 0;
}
