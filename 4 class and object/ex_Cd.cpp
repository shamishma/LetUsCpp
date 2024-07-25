/*Find the output*/
#include <iostream>
using namespace std;

class Control {
public:
    Control() {
        calculate();
        cout << "Constructor" << endl;
    }

    void calculate() {
        display();
        cout << "Calculator" << endl;
    }

    void display() {
        cout << "displayed" << endl;
    }
};

int main() {
    Control c1;
    return 0;
}
