#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; bool check = false;
    int seen[n] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                seen[i]++;
        }
    }
    for (int i = 0; i < n; i++)
        if (seen[i] >= 2) {
            check = true;
        }
    if (check)
        cout << "Yes";
    else cout <<"No";
    return 0;
}
