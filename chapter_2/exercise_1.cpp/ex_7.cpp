/*find the output or error*/
#include <iostream>
using namespace std;
int main()
{
    //  char	*p=“hello”;
    char *p = "hello";
    char *q = p;
    cout << p << endl
         << q << endl;
    //   q	=	“Good	Bye”;
    q = "Good Bye";
    cout << p << endl
         << q << endl;
    return 0;
}
