#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1)
        return 0;
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n; cin >> n;
    if (isPrime(n))
        cout << n << " la so nguyen to";
    else
        cout << n << " khong la so nguyen to";
    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}
