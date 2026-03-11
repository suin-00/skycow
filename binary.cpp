include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> A;

int bin(int left, int right) {
    int res = 0;
    while (left <= right) {
        long long total = 0;
        int mid = (left + right) / 2;
        for (int i = 0; i < N; i++) {
            if (A[i] > mid) {
                total += A[i] - mid;
            }
        }
        if (total > M) {
            left = mid + 1;
            res = mid;
        } else if (total < M) {
            right = mid - 1;
        } else {
            res = mid;
            break;
        }
    }
    return res;
}


int main() {
    cin >> N >> M;
    A.resize(N);
    int right = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        right = A[i] > right ? A[i] : right;
    }
    cout << bin(0, right) << endl;
    return 0;

}
