#include <iostream>

using namespace std;

void f(int x[]) {
    cout << sizeof(x) << endl;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << sizeof(a) << endl;
    f(a);
    int* pa = &a[0];
    cout << sizeof(pa);
}

/*
Kết quả chương trình:
20
8
8
Vậy toán tử sizeof trong hàm main in ra kích thước mảng a: 5 phần tử kiểu int, mỗi phần tử có kích thước 4.
Còn hàm f in ra 8 - kích thước của một con trỏ, vậy mảng được truyền vào hàm bằng con trở tới phần tử đầu tiên của mảng
*/
