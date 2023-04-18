#include <iostream>

using namespace std;

const int n = 20;

void f(int x[n]) {
    cout << &x << " " << &x[0] << endl;
}
int main(){
    int A[n] = {};
    cout << &A << " " << &A[0] << endl;
    f(A);
    return 0;
}

/*
Kết quả chương trình in ra trên CodeBlocks:
0x61fdc0 0x61fdc0
0x61fda0 0x61fdc0
=> kết quả in ra từ hàm main và từ hàm f đối với mảng A là hoàn toàn giống 
nhau, mảng được truyền vào hàm bằng địa chỉ của phần tử đầu tiên trong mảng
*/