/*find the error*/
#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i;
    int &k = j;
    int &l = i;
    cout << i <<endl<< j<<endl << k<<endl << l;
    return 0;
}
