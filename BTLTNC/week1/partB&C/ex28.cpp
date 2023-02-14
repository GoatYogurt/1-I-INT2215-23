#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 23; i++) {
        if (i == 0)
            cout << "12 midnight" << endl;
        else if (i > 0 && i <= 11)
            cout << i << "am" << endl;
        else if (i == 12)
            cout << i << " noon" << endl;
        else
            cout << i - 12 << "pm" << endl;
    }
}
