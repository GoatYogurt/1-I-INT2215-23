//đã chạy thành công trên hackerrank: https://www.hackerrank.com/contests/101hack31/challenges/naughty-number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], b[n+1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n + 1; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[j] != -1 && b[i] != -1) {
                if (b[i] == a[j]) {
                    b[i] = -1;
                    a[j] = -1;
                }
            }
        }
    }
    for (int i = 0; i < n + 1; ++i) {
        if (b[i] != -1) {
            cout << b[i];
            break;
        }
    }
    return 0;
}
