#include<iostream>
using namespace std;
struct Employee 
{
    string name;
    int id;
    float salary;
};
int main()
{
    Employee *emp = new struct Employee;
    Employee e;
    e.name = "Jane";
    e.id = 15;
    e.salary = 20000;
    emp->name = "John";
    emp->id = 25;
    emp->salary = 25000;
    cout << e.name << " " << e.id << " " << e.salary << endl;
    cout << emp->name << " " << emp->id << " " << emp->salary << endl;
    delete emp;
    return 0;
}