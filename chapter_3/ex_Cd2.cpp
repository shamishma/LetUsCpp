/*write a program to convert	a	float point in to	a	string.*/
#include <iostream>
#include <cmath>  // for fabs

using namespace std;

void reverse(char* str, int len) {
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int intToStr(int x, char* str, int d) {
    int i = 0;
    while (x) {
        str[i++] = (x % 10) + '0';
        x = x / 10;
    }
    // i = 3
    // 123
    while (i < d)
        str[i++] = '0';
    
    reverse(str, i);
    str[i] = '\0';
    return i;
}

void ftoa(float n, char* res, int afterpoint) {
    // 123.456
    int ipart = (int)n;
    float fpart = n - (float)ipart; // 123.456 - 123 = 0.456
    int i = intToStr(ipart, res, 0); // i = intToStr(123, string, 0)
    // i = 3
    // res = 123.
    if (afterpoint != 0) { // 456
        res[i] = '.';
        fpart = fpart * pow(10, afterpoint); // 0.456 * 1000  = 456.0000
        intToStr((int)fpart, res + i + 1, afterpoint); // (456,res[4],3)
    }
}

int main() {
    float n = 123.4561346;
    char res[20];
    ftoa(n, res, 5);
    cout << res << endl;
    return 0;
}