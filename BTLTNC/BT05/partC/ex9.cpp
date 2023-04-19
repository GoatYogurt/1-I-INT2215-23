#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n = -1;
    while (n != 0) {
        cin >> n;
    srand(time(0));
    cout << rand() % n << endl;
    }
    return 0;
}
