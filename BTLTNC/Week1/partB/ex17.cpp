//Viết chương trình LeapYear kiểm tra năm nhuận. Chương trình đọc vào một số nguyên từ bàn phím và in ra "true" nếu đó là một năm nhuận, nếu không thì in ra "false"
#include <iostream>
using namespace std;
int main() {
	int year; cin >> year;
	if (year % 4 != 0)
        cout << "false";
    else {
        if (year % 100 == 0)
            if (year % 400 == 0)
                cout << "true";
            else cout >> "fasle";
    }
}
