/*find the error*/
#include <iostream>
using namespace std;
void fun1(void);
void fun2(void);

int main()
{
    fun1();
    return 0;
}
void fun1(void)
{
    fun2();
    cout << endl
         << "hi...hello";
}
void fun2(void)
{
    cout << endl
         << " to you";
}