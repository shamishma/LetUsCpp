/*Difference through const*/
#include<iostream>
using namespace std;
void display(char*);
void display( const char*);
int main()

{
    char *ch1="hello";
    const char*ch2="Bye";
    display(ch1);
    display(ch2);
    return 0;
}
void display(char*p)
{
    cout<<p<<endl;
}

void display(const char*p)
{
    cout<<p<<endl;
}