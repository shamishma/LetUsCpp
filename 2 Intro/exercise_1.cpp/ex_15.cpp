/*find the error*/
#include <iostream>
using namespace std;

const int i = 10;

int main()
{
    const int i = 20;
    // cout << &i endl
    std::cout << &i << endl
              << &::i << endl;
    return 0;
}
