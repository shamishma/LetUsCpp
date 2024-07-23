/* scop resolution operator (::)*/
#include <iostream>
using namespace std;

int num = 10; // Global variable

int main()
{
    int num = 15; // Local variable
    cout << "Local num  = " << num << endl;
    cout << "Global num = " << ::num << endl;
    
    ::num = 20; // Changing the global variable
    
    cout << "Local num  = " << num << endl;
    cout << "Global num = " << ::num << endl;
    
    return 0;
}
