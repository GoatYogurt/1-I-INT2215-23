//ket qua: deu dung
#include <iostream>

using namespace std;

int min1(int a, int b, int c, int d) {
   // if a is the smallest return it
   if (a <= b && a <= c && a <= d) return a;

   // otherwise, if b is the smallest of b, c, and d, return it
   if (b <= c && b <= d) return b;

   // otherwise, return the smaller of c and d
   if (c <= d) return c;
   return d;
}

int min2(int a, int b, int c, int d) {
   int min = a;
   if (b < min) min = b;
   if (c < min) min = c;
   if (d < min) min = d;
   return min;
}

int min3(int a, int b, int c, int d) {
   if (a < b && a < c && a < d) return a;
   if (b < c && b < d)          return b;
   if (c < d)                   return c;
   return d;
}

int min4(int a, int b, int c, int d) {
   if (a <= b) {
      if (a <= c) {
         if (a <= d)  return a;
         else return d;
      }
      if (c <= d) return c;
      else return d;
   }
   if (b <= c) {
      if (b <= d) return b;
      else return d;
   }
   else if (c <= d) return c;
   return d;
}

int min5(int a, int b) {
   if (a <= b) return a;
   else        return b;
}
int min6(int a, int b, int c, int d) {
   return min5(min5(a, b), min5(c, d));
}
int main() {
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    cout << min1(x, y, z, q) << endl
    << min2(x, y, z, q) << endl
    << min3(x, y, z, q) << endl
    << min4(x, y, z, q) << endl
    << min6(x, y, z, q);
}
