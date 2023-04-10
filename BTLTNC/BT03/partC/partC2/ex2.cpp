#include <iostream>

using namespace std;

int main()
{
    int n, tong = 0, count = 0; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int M = a[0], m = a[0];
    for (int i = 0; i < n; i ++)
    {
        if (a[i] >= M) M = a[i];
        if (a[i] <= m) m = a[i];
        if (a[i] % 2 == 0) tong += a[i];
        else count++;
    }
    cout << M << endl << m << endl << tong << endl << count;
    return 0;
}
