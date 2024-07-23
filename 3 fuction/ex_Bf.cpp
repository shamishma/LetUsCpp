// find the error
#include <iostream>
using namespace std;

void fun1(int x = 10, int y = 20, int z = 30);
void fun2(int, int);

int main()
{
    fun1();
    fun2(40, 50); // Provide arguments for fun2
    return 0;
}

void fun1(int x, int y, int z) // Match the declaration
{
    cout << endl << x << endl << y << endl << z;
}

void fun2(int x, int y) // Match the declaration
{
    cout << x << endl << y << endl;
}
