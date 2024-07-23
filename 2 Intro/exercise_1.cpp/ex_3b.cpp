/*If employee	is	a	structure,	REGS	is	a	union	and	maritalstatus
is	an enum	then	does	there	exist	any	other	way	in	which	the	following definitions	can	be	made:*/
#include <iostream>
#include<cstring>
using namespace std;
typedef struct {
    char name[30];
    int age;
    float salary;
} Employee;
typedef union
 {
    int intval;
    float floatval;
    char charval;
} REGS;
typedef enum {
    Single,
    Married,
    Divorced,
    Widowed
} MaritalStatus;

int main() 
{
    Employee emp;
    emp.age = 30;
    emp.salary = 50000.0;
    strcpy(emp.name, "John Doe");
    REGS reg;
    reg.intval = 10;
    cout << "REGS intval: " << reg.intval << endl;
    MaritalStatus status = Married;
    if (status == Married) {
        cout << "Employee is married." << endl;
    }

    return 0;
}
