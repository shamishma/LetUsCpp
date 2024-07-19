/*suppose there is a function with the following prototype:
void fun(int =10,int =20,int =30,int =40);
if this function is called by passing 2 arguments to it ,how can we make sure
that these arguments are treated as first and third ,wheres,the second and the 
fourth are taken as defaults   */
#include <iostream>
using namespace std;
void fun1(int a = 10, int b = 20, int c = 30, int d = 40);
void fun2(int a, int c);

int main() {
       fun2(5, 15);

    return 0;
}
void fun2(int a, int c) {
    fun1(a, 20, c, 40); 
}
void fun1(int a, int b, int c, int d) 
{
    cout << "a : " << a << ", b : " << b << ", c : " << c << ", d : " << d << endl;
}
