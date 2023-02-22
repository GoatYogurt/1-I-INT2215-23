#include <iostream>

using namespace std;

int main() {
    int n = 1, old = -1;
    while (n > 0) {
        cin >> n;
        if (n != old)
            cout << n << " ";
        old = n;
    }
}

