#include <iostream>

using namespace std;

int main() {
    double x, tich = 1; int y;
    cin >> x >> y;
    for (int i = 1; i <= y; i++) {
        tich *= x;
    }
    cout << tich;
}