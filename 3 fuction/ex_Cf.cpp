/* Declare	a	structure	called	matrix	containing	a	3	x	3	array	of integers.
Overload	the	+	operator	to	carry	out	addition	of	two matrices.*/
#include <iostream>
using namespace std;
struct matrix
{
    int arr[3][3];
};
matrix operator+(matrix &a, matrix &b);
void entervalue(matrix &x);
void printvalue(matrix &x);
int main()
{
    matrix a, b, c;
    entervalue(a);
    entervalue(b);
    cout<<"The first matrix is   :"<<endl;
    printvalue(a);
    cout << "---------------\n";
    cout<<"The second matrix is  :"<<endl;
    printvalue(b);
    cout << "---------------\n";
    c = a + b;
    cout<<"After the addition of two matrix  :"<<endl;
    printvalue(c);
     cout << "====================\n";
    return 0;
}
void printvalue(matrix &x)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << x.arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void entervalue(matrix &x)
{
    int i, j;
    cout << "Enter 9 values of matrix : ";
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            cin >> x.arr[i][j];
        }
    }
}

matrix operator+(matrix &a, matrix &b)
{

    matrix result;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result.arr[i][j] = a.arr[i][j] + b.arr[i][j];
        }
    }
    return result;
}
