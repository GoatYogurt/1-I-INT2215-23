#include <iostream>

using namespace std;

void print(int m, int n) {
    for (int i = 1; i <= m; ++i) {
        cout << " ";
    }
    for (int i = 1; i <= n; ++i) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int n; cin >> n;
    for (int i = n - 1; i >= 0; --i) {
        print(i, 2 * (n - i) - 1);
    }
}
