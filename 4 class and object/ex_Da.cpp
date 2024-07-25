/*Modify	the	class	Rectangle	discussed	in	the	text	of	this	chapter such	that	a	statement, Rectangle	r1	=	3;
assigns	a	value	3	to	len	as	well*/
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int len, br;

public:
    void getData()
    {
        std::cout << endl
                  << "Enter length and breadth: ";
        cin >> len >> br;
    }

    void setData(int l, int b)
    {
        len = l;
        br = b;
    }

    void displayData()
    {
        cout << endl
             << "Length  = " << len;
        cout << endl
             << "Breadth = " << br;
    }

    void areaPeri()
    {
        int a, p;
        a = len * br;
        p = 2 * (len + br);
        cout << endl
             << "Area       = " << a;
        cout << endl
             << "Perimeter  = " << p << endl;
    }
    void setValue(int x)
    {
        len = x;
        br = x;
    }
};

int main()
{

   Rectangle r1;
   r1.setValue(3); 
    r1.displayData();
    r1.areaPeri(); 
         

    return 0;
}
