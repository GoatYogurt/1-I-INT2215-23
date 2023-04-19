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

void print(Point point) {
    cout << "(" << point.x << ", " << point.y << ")";
}
int main() {
    Point A(1.2, 2.1);
    print(A);
}
