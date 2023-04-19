#include <iostream>

using namespace std;

int count = 0;

unsigned long Fibonacci1(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    unsigned long f0 = 0, f1 = 1, fn = 1;
    for (int i = 3; i <= n; i++) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }
    return fn;
}

unsigned long Fibonacci2(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibonacci2(n-1) + Fibonacci2(n-2);
}

int main(){
    int n; cin >> n;
    //cout << Fibonacci1(n);
    cout << Fibonacci2(n);
    return 0;
}
/*
Chạy thử với n = 50, hàm Fibonacci2 sử dụng đệ quy chạy rất lâu. Hàm Fibonacci1 dùng vòng lặp vẫn cho kết quả gần như ngay lập tức.
*/

