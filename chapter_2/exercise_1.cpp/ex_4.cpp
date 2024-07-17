/*In 	the	following	program	how	would	you	define	if	the	first	cout	is to	output	“Internet”	twice,
whereas,	the	second	cout	is	to	output “Intranet”	twice.*/
#include<iostream>
using namespace std;
int main ()
{
    char *p="Internet";
    char *q="Intranet";
    cout<<p<<endl<<q<<endl;
    cout<<p<<endl<<q<<endl;
}