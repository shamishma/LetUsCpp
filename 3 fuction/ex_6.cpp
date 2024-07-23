#include<iostream>
using namespace std;
struct complex{
    double real,imag;
};
complex setComplex(double r,double i);
void printComplex(complex c);
complex operator+(complex c1,complex c2);
complex operator-(complex c1,complex c2);
int main()
{
    complex a,b,c,d;
    a=setComplex(1.0,1.0);
    b=setComplex(2.0,2.0);
    c=a+b;
    d=b+c-a;
    cout<<"c = ";
    printComplex(c);
    cout<<"d = ";
    printComplex(d);
    return 0;

    }
    complex setComplex(double r,double i)
    {
        complex temp;
        temp.real=r;
        temp.imag=i;
        return temp;
    }
    void printComplex(complex t)
    {
        cout<<"("<<t.real<<","<<t.imag<<")"<<endl;
    }
    complex operator+(complex c1,complex c2)
    {
        complex temp;
        temp.real =c1.real+c2.real;
        temp.imag=c1.imag+c2.imag;
        return temp;

    }
    complex operator-(complex c1,complex c2)
    {
        complex temp;
        temp.real=c1.real-c2.real;
        temp.imag=c1.imag-c2.imag;
        return temp;
    }

