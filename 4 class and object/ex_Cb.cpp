/*Find the output*/
#include <iostream>
using namespace std;

class Date
{
private:
    int dd, mm, yy;

public:
    Date()
    {
        cout << "Reached here : " << endl;
    }
};

int main()
{
    Date today;
    Date *p = &today;
    cout << p << endl; // Prints the address of the 'today' object
    return 0;
}
