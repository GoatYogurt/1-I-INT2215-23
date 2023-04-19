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

void print1(Point point) {
    cout << &point << endl;
}

void print2(Point& point) {
    cout << &point << endl;
}
int main() {
    Point A(1.2, 2.1);
    print1(A);
    print2(A);
    cout << &A;
}

/*
kết quả:
0x61fdb0
0x61fe10
0x61fe10
*/