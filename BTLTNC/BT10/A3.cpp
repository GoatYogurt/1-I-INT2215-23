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

Point mid_point(const Point X, const Point Y) {
    Point M((X.x + Y.x)/2, (X.y + Y.y)/2);
    return M;
}
void print(Point X) {
    cout << "(" << X.x << "," << X.y << ")" << endl;
}
int main() {
    Point A(1.2, 2.1);
    Point B(2.8, 3.9);
    print(mid_point(A, B));
}