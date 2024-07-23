/* Object  and memory*/
#include <iostream>
using namespace std;
class Sample
{
private:
    int i;
    float a;
    char ch;

public:
    Sample(int j, float b, char dh)
    {
        i  = j;
        a  = b;
        ch = dh;
    }
};
int main()
{
    Sample s1(10, 3.14f, 'A');
    Sample s2(20, 6.28f, 'B');
    cout << sizeof(s1) << endl;
    cout << sizeof(s2) << endl;
    return 0;
}
