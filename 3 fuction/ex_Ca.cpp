/* write a program which calls a function called cls().This function should be capable of clearing
a part of the screen .If the function is called without any arguments then it should clear the entire
screen. Assume the maximum screen size to be of 25 rows x 80 columns */
#include <iostream>
using namespace std;
void cls(int rows = 5, int cols = 10);

int main()
{
    cout<<"ppppppppppppppppppppppp"<<endl;
    cout<<"aaaaaaaaaaaaaaaaaaaaaaa"<<endl;
    cls(2, 4);
    cout << "Cleared a part of the screen" << endl;
    cls();
    cout << "Cleared the entire screen" << endl;

    return 0;
}
void cls(int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << " ";
        }
        cout << endl;
    }
}
