/* fnd the error*/
#include <iostream>
void fun ();// no declaration this function
using namespace std ;
int main ()
{
    int a =30;
    fun();
    cout << a<<endl;

    return 0;
}
void fun ()
{
    int b=20;
    cout <<b<<"\n";
}