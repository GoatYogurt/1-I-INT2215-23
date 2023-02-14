#include <iostream>
using namespace std;
int main() {
    int year = 1;
    while (year != 0) {
        cin >> year;
        if (year % 4 != 0) {
            cout << "false" << endl;
        }

        else {
            if (year % 100 == 0)
                if (year % 400 == 0)
                    cout << "true";
                else cout << "fasle";
            else cout << "true";
        cout << endl;
        }
    }
}
