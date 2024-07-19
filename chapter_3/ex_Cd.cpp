/* write 	overloaded	functions	to	convert	an	int	to	a	string	and	to convert	a	float	to	a	string.*/
#include <iostream>
using namespace std ;
std::string toString(int value)
{
return std::to_string(value);
}
std::string toString(float value){
    return std::to_string(value);
}
int main()
{
    int intValue = 41;
    float floatValue = 3.14f;
    std::string intString = toString(intValue);
    std::string floatString = toString(floatValue);
    std::cout<<"Integer as string  : "<<intString <<std :: endl;
    std::cout<<"Float as string    : "<<floatString <<std :: endl;
    return 0;
}