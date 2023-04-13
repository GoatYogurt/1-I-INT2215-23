#include <iostream>

using namespace std;

int main() {
    double a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 6; j++) {
            if (a[i] > a[j]) {
                int SWAP = a[i];
                a[i] = a[j];
                a[j] = SWAP;
            }
        }
    cout << a[2];
}