/*find the error*/
#include<iostream>
using namespace std;
int fun(int ,int );
int fun(int ,int );
int main()
{
    int a;
    a=fun(10,30);
    cout<<a;
    return 0;
}
// void fun(int x,int y)
int fun(int x,int y)
{
    return x+y;
}