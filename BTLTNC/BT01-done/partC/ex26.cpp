#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int mean = 1.0 * sum / n;
    cout << mean << endl;

    int MAX = a[0], MIN = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > MAX)
            MAX = a[i];
        if (a[i] < MIN)
            MIN = a[i];
    }
    cout << MAX << " " << MIN;
    
}