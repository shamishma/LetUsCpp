/* Difference in return type */
#include<iostream>
using namespace std;
int stringToNumber(char*);//correct way
// long int stringToNumber(char*);(incorrect way)
int main()
{
    int n1;
    long int n2;
    char*ptr1="155";
    char*ptr2="400000";
    n1=stringToNumber(ptr1);
    n2=stringToNumber(ptr2);
    cout<<n1<<endl<<n2;
    return 0;
}