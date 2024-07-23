/* Overloading Unary Operators*/
#include <iostream>
using namespace std;

class Index
{
private:
    int count;

public:
    Index()
    {
        count = 0;
    }

    Index(int i)
    {
        count = i;
    }

    // Overload prefix ++ operator
    Index operator++()
    {
        ++count;
        return *this;
    }

    // Overload postfix ++ operator
    Index operator++(int)
    {
        Index temp(count); // calls 1-argument constructor
        count++;
        return temp;
    }

    void showdata()
    {
        cout << count << endl;
    }
};

int main()
{
    Index c, d, e, f;

    cout << "c = ";
    c.showdata();

    d = ++c;
    cout << "c = ";
    c.showdata();
    cout << "d = ";
    d.showdata();

    cout << "e = ";
    e.showdata();
    f = e++;
    cout << "e = ";
    e.showdata();
    cout << "f = ";
    f.showdata();

    return 0;
}
