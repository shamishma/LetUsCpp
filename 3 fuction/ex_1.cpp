/*strict prototype checking*/
#include <iostream>

void fun(int x, int y, int &s);

using namespace std;

int main()
{
    int x = 5, y = 10;
    int s;
    fun(x, y, s);
    cout << s << endl;
    return 0;
}

void fun(int x, int y, int &s)
{
    s = x + y;
}
