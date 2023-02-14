#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string f0 = "a", f1 = "b", fn = "bab";
    cout << f0 << " " << f1 << " " << fn;
    for (int i = 3; i <= 10; i++) {
        f0 = f1;
        f1 = fn;
        fn = f1 + f0;
        cout <<" " << fn << endl;
    }
}
