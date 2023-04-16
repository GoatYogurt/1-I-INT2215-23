#include <iostream>
using namespace std;

int UCLN(int x, int y) {
    while (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    return x;
}

int main() {
    int a, b; cin >> a >> b;
    if (UCLN(a, b) == 1)
        cout << "La so nguyen to cung nhau";
    else cout << "Khong la so nguyen to cung nhau"
;    cout << a;
}