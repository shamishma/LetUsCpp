/*Complete	the	following	program	by	defining	the	function	swapb() and	its	prototype	such	that
the	output	of	the	program	is	20	10.*/
#include <iostream>
using namespace std;
void swapa(int &, int &);
void swapb(int &, int &);
int main()
{
    int a = 10, b = 20;
    swapa(a, b);
    cout << a << endl
         << b;
    return 0;
}
void swapa(int &x, int &y)
{
    swapb(x, y);
}
void swapb(int &m, int &n)
{
    int t = m;
    m = n;
    n = t;
}