/*Define	a	Matrix	class	containing	a	3	x	3	matrix.	Define	overloaded
operators	int	this	class	to	carry	out	the	addition,	multiplication	and comparison	of	two	matrices.	Create	Matrix	objects	in	main()
and call	the	overloaded	functions	to	perform	the	matrix	operations	on them.*/
#include <iostream>
using namespace std;

class Matrix
{
private:
    int arr[3][3];

public:
    Matrix()
    {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                arr[i][j] = 0;
    }

    void enterValue()
    {
        cout << "Enter 9 values of the matrix: ";
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> arr[i][j];
    }

    void printValue() 
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator+(const Matrix &b) 
    {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                result.arr[i][j] = arr[i][j] + b.arr[i][j];
        return result;
    }

    Matrix operator*(const Matrix &b) 
    {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 3; ++k)
                    result.arr[i][j] = arr[i][j] * b.arr[j][k];
        return result;
    }

    bool operator==(const Matrix &b) const
    {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (arr[i][j] != b.arr[i][j])
                    return false;
        return true;
    }
};

int main()
{
    Matrix a, b, c;

    cout << "Enter values for the first matrix ==>" << endl;
    a.enterValue();

    cout << "Enter values for the second matrix==>" << endl;
    b.enterValue();

    cout << "The first matrix is  : " << endl;
    a.printValue();
    cout << "The second matrix is : " << endl;
    b.printValue();
    c = a + b;
    cout << "After addition of the two matrices:" << endl;
    c.printValue();

    c = a * b;
    cout << "After multiplication of the two matrices:" << endl;
    c.printValue();

    if (a == b)
        cout << "The two matrices are equal." << endl;
    else
        cout << "The two matrices are not equal." << endl;

    return 0;
}
