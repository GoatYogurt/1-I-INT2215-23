#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n; cin >> n;
    double tb ,ps ,tong=0 ,tongps=0, daySo[n];
    for (int i = 0; i < n; i++)
    {
        cin >> daySo[i];
        tong += daySo[i];
    }
    tb = tong / n;
    for (int i = 0; i < n; i++)
        tongps += (daySo[i] - tb)*(daySo[i] - tb);
    ps = tongps/n;
    cout << fixed << setprecision(2) <<  tb << " " << ps;
    return 0;
}