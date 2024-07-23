/*class and function*/
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int len, br;

public:
    void getData()
    {
        std::cout << endl << "Enter length and breadth: ";
        cin >> len >> br;
        
    }

    void setData(int l, int b)
    {
        len = l;
        br  = b;
    }

    void displayData()
    {
        cout << endl << "Length  = " << len;
        cout << endl << "Breadth = " << br;
    }

    void areaPeri()
    {
        int a, p;
        a = len * br;
        p = 2 * (len + br);
        cout << endl << "Area       = " << a;
        cout << endl << "Perimeter  = " << p << endl;
    }
};

int main()
{
    Rectangle r1, r2, r3; // define three objects of class Rectangle

    // r1.setData(); // set data in elements of the object
    // r1.displayData();   // display the data set by setData()
    // r1.areaPeri();      // calculate and print area and perimeter

    // r2.setData();   // set data in elements of the object
    // r2.displayData();   // display the data set by setData()
    // r2.areaPeri();      // calculate and print area and perimeter

    r3.getData();       // receive data from keyboard
    r3.displayData();   // display the data received
    r3.areaPeri();      // calculate and print area and perimeter

    return 0;
}
  