#include <iostream>
using namespace std;

class User
{
private:
    int i;
    float f;
    char c;

public:
    void displayData()
    {
        cout << i << '\n'
             << f << "\n"
             << c << endl;
    }
};

int main()
{
    cout << sizeof(User) << endl; // Size of the User class
    User u1;
    cout << sizeof(u1) << endl; // Size of the u1 object
    u1.displayData();           // Display the data in u1
    return 0;
}
