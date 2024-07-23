/*find the output*/
#include <iostream>
using namespace std;
int i = 20;
int main()
{
    int i = 5;
    std::cout << i << endl
              << ::i << endl;
    return 0;
}