/*"Create a C++ class named Employee that has two private attributes: name (a string) and age */
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;

public:
    // Default constructor
    Employee() : name(""), age(0) {}

    // Parameterized constructor
    Employee(string n, int a) : name(n), age(a) {}

    // Function to get data from the user
    void getData()
    {
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter age  : ";
        cin >> age;
        cout << "-----------------------\n";
        cin.ignore(); // Clear the newline character from the buffer
    }

    // Function to show data
    void showData()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main()
{
    Employee emp1;             // Using default constructor
    Employee emp2("Anni", 20); // Using parameterized constructor

    cout << "Enter details for employee 1 :" << endl;
    emp1.getData();

    cout << "Employee 1 details !" << endl;
    emp1.showData();

    cout << "Employee 2 details !" << endl;
    emp2.showData();

    return 0;
}
