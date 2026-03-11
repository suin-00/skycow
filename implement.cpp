#include <iostream>
using namespace std;

int main() {
    int N, r = 1, c =1;
    char enter;
    cin >> N;
    cin.ignore();
    while (cin.get(enter)) {
        switch (enter) {
            case 'R':
                c = c + 1 > N ? c : c + 1; break;
            case 'L':
                c = c == 1 ? c : c - 1; break;
            case 'D':
                r = r + 1 > N ? r : r + 1; break;
            case 'U':
                r = r == 1 ? r : r - 1; break;
            case '\n':
                cout << r << " " << c << endl; return 0;
        }
    }
    return 0;
}
