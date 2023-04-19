#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* str1, const char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    char* ptr = new char[len1 + len2 + 1];
    strcpy(ptr, str1);
    strcpy(ptr + len1, str2);
    return ptr;
}

int main() {
    const char* s1 = "Hello ";
    const char* s2 = "World!";
    cout << concat(s1, s2);
    return 0;
}
