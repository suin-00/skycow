#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int* A = new int[N];
    int* B = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    sort(A, A + N);
    sort(B, B + N, greater<int>());
    int cnt = 0, sum = 0;
    for (int i = 0; i < K; i++) {
        if (A[cnt] >= B[cnt]) {
            break;
        }
        int temp = A[cnt];
        A[cnt] = B[cnt];
        B[cnt++] = temp;
    }
    for (int i = 0; i < N; i++) {
        sum += A[i];
    } cout << sum;
    return 0;
}
