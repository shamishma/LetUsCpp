/* A complex class*/
#include<iostream>
using namespace std;
class complex
{
    private :
    float real,imag;
    public :
    complex()
    {

    }
    complex(float r,float i)
    {
        real = r;
        imag = i;
    }
    void displayData()
    {
        cout<<"Real = "<<real<<" Imaginary = "<<imag<<endl;
    }
    void addComplex(complex x,complex y)
    {
        real = x.real + y.real;
        imag = x.imag + y.imag;
    }
    complex addComplex(complex y)
    {
        complex t;
        t.real = real + y.real;
        t.imag = imag + y.imag;
        return t;
    }
    complex operator+(complex y)
    {
        complex t;
        t.real = real+y.real;
        t.imag = imag+y.imag;
        return t;
    }
};
int main()
{
    complex c1(1.1f,2.2f),c2(3.5f,4.4f),c3,c4,c5;
    c3.addComplex(c1,c2);
    c3.displayData();
    c4=c1.addComplex(c2);
    c4.displayData();
    c5 =c1+c2;
    c5.displayData();
    return 0;
}