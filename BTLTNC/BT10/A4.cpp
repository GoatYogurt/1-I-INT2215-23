#include <iostream>
using namespace std;

struct Point {
    Point(double x_, double y_) {
        x = x_;
        y = y_;
    }
    double x;
    double y;
};

int main() {
    Point A(1.2, 2.1);
    cout << &A << endl;
    cout << &A.x << endl;
    cout << &A.y << endl;
}

/*
Kết quả:
0x61fe10
0x61fe10
0x61fe18
Nhận xét: địa chỉ thành viên đầu tiên của struct chính là địa chỉ của struct đó.
*/