#include <iostream>

using namespace std;

int main() {
    int n = 0;
    while (n != -1) {
        cin >> n;
        if (n >= 0 && n % 5 == 0)
            cout << n / 5 << endl;
        else if (n == -1) {
            cout << "Bye";
            break;
        }
        else cout << -1 << endl;
    }
}
