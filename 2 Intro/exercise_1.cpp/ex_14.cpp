/*find the error*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    long int c;
    // c = a * long int(b);
    c = a * int(b);
    cout << c;
    return 0;
}