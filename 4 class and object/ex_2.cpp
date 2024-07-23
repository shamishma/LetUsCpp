#include <iostream>
using namespace std;
class math
{
private:
    int x, y;

public:
    void inputValue()
    {
        cout << "Enter the value a : ";
        cin >> x ;
    
        cout << "Enter the value b : ";
        cin >> y ;
    
        
    }
    int addition()
    {
        int c = x + y;
        return c;
    }
    int subtraction()
    {
        int c = x - y;
        return c;
    }
    int multiplication()
    {
        int c = x * y;
        return c;
    }
    int division()
    {
        int c = x / y;
        return c;
    }
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayData()
    {
        cout << "Value of x = ";
        cout << "Value of y = ";
    }
    void add()
    {
        int c = x + y;
        cout << c << endl;
    }
};
int main()
{
    math e;
    e.inputValue();
    // int x = e.addition();
    // cout << x;
    e.add();

    return 0;
}