/*write 	overloaded	functions	to	convert	a	integer to a string*/
#include <iostream>
#include<string>
using namespace std;
string fromint(int x);
int main()
{
    int x = 54646;
    string d = fromint(x);
    cout << d << endl;
    return 0;
}

string fromint(int x)
{
    // int x = 54646;
    string s = "";
    while (x != 0)
    {
        char digit = 48 + (x % 10);  // Convert digit to char
        s = digit + s;  // Prepend digit to the string 
        x = x / 10;
    }
    return s;
}
