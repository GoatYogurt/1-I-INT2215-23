#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], b[10] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (a[i] == j)
                b[j]++;
        }
    }
    for (int i = 1; i < 10; i++)
    {
        if (b[i != 0])
        {
            cout << "So lan so " << i << " xuat hien la " << b[i] << endl;

        }
    }
    return 0;
}
