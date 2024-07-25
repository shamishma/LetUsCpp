/* find the error*/
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date() {
        day = 7;
        month = 9;
        year = 2019;
    }
    void print() const {
        cout << " The date  is : " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date today; // Now the constructor is accessible
    today.print();
    return 0;
}
