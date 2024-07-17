/*Creat 	four	integers,	four	pointers	to	these	integers	and	four references	to	them.
Store	these	pointers	and	references	in	two arrays	and	print	out	the	values	of	four
integers	using	these	arrays.*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, c = 15, d = 20;

    int *p=&a;
    int *q=&b;
    int *r=&c;
    int *s=&d;

    int &w = *p;
    int &x = *q;
    int &y = *r;
    int &z = *s;
    int array[4]={w,y,x,z};
    std::cout<<"reference store in array!!"<<endl;
    for(int i=0;i<4;i++)
    {
        std::cout<<array[i]<<endl;
    }
    // cout << w << endl;
    // cout << x << endl;
    // cout << y << endl;
    // cout << z << endl;
    cout<<"pointer store in array !!"<<endl;

int *pointerArray[4] = {p, q, r, s};

    for (int i = 0; i < 4; i++)
    {
        std::cout << *(pointerArray[i]) << endl;
    }
    return 0;
}