/*The this pointer*/
#include <iostream>
using namespace std;

class Sample
{
private:
    int i;
    float j;

public:
    void setData(int x, float y)
    {
        this->i = x;
        this->j = y;
    }

    void displayData()
    {
        cout << "i = " << this->i << ", j = " << this->j << endl;
    }
};

int main()
{
    Sample s1, s2;
    s1.setData(10, 3.14f);
    s2.setData(20, 6.28f);

    cout << "Data for s1: ";
    s1.displayData();

    cout << "Data for s2: ";
    s2.displayData();

    return 0;
}
