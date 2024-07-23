/* write 	overloaded	functions	to	convert	float point  to string .*/
 #include<iostream>
#include <math.h>
using namespace std;
int main()
{
    string s = "125.4723";
    double n = 0;
    double f = 0;
    double number;
    int aftreDecimalDigit = 0;
    int condition = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            condition = 1;
            continue;
        }
        if (condition == 0)
        {
            n = n * 10 + s[i] - '0';
        }
        if (condition == 1)
        {
            f = f * 10 + s[i] - '0';
            aftreDecimalDigit++;
        }
        
    }
    number = n + f/pow(10,aftreDecimalDigit);
    cout << number << endl;
    return 0;
}
