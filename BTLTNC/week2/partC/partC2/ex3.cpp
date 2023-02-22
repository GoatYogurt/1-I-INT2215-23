#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    if (a + b > c && b + c > a && a + c > b) {
        cout << sqrt(p*(p - a)*(p - b)*(p - c)) << endl;
        if (a == b && b == c)
            cout << "tam giac deu";
        else if (a == b || b == c || a == c)
            cout << "tam giac can";
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "tam giac vuong";
    }
    else cout << "khong phai tam giac";
}
