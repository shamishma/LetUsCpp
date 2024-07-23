/* Find the error*/
#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
    string name, city;

public:
    Address(string p, string q) : name(p), city(q) {}
// no declaration of display function for print the data
    void display() const
    {
        cout << "Name : " << name << ", City : " << city << endl;
    }
};

int main()
{
    Address my("Mac", "London");
    my.display();  
    return 0;
}
