/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, X, K;
    cin >> N >> M;
    vector<vector<int>> road(N+1, vector<int>(N+1, 2000));
    for (int i = 1; i < N + 1; i++) {
        road[i][i] = 0;
    }
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        road[a][b] = 1;
        road[b][a] = 1;
    }
    cin >> X >> K;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                road[j][k] = min(road[j][k], road[j][i] + road[i][k]);
            }
        }
    }
    if (road[1][K] + road[K][X] > 1000) {
        cout << -1 << endl;
    } else cout << road[1][K] + road[K][X] << endl;
}
*/