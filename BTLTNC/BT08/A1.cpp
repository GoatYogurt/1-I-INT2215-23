#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl; // in địa chỉ của x tại đây
}
void g(int yval)
{
   int y;
   cout << &y << endl; // in địa chỉ của y tại đây
}
int main()
{
   f(7);
   g(11);
   return 0;
}

/*
Kết quả chương trình:
0x61fdec
0x61fdec
Nhận xét: 2 địa chỉ in ra là giống hệt nhau.
Giải thích: Biến x là biến địa phương nên sau khi hàm f() được gọi thì x cũng sẽ biến mất, ngay sau đó
hàm g() được gọi, biến y được khai báo sẽ có địa chỉ là địa chỉ cũ của biến x vừa được khai báo và giải phóng ở trên.
*/
