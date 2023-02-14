#include <iostream>

using namespace std;

int main() {
    int y, y0, x, x0, m, m0, d, d0;
    cin >> d >> m >> y;
    y0 = y - (14 - m) / 12;
    x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    m0 = m + 12 * ((14 - m) / 12) - 2;
    d0 = (d + x + 31 * m0 / 12) % 7;
    switch (d0) {
        case 0: {
            cout << "Sunday";
            break;
        }
        case 1: {
            cout << "Monday";
            break;
        }
        case 2: {
            cout << "Tuesday";
            break;
        }
        case 3: {
            cout << "Wednesday";
            break;
        }
        case 4: {
            cout << "Thursday";
            break;
        }
        case 5: {
            cout << "Friday";
            break;
        }
        case 6: {
            cout << "Saturday";
            break;
        }
    }
}