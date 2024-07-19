/*write 	overloaded	functions	to	convert	a	string	to	an	int	and	to convert	a	string	*/
#include <iostream>
#include <string>
#include <stdexcept>

// Function to convert string to int
int toInt(const std::string& value) {
    try {
        return std::stoi(value);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << '\n';
        return 0; // or some error value
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << '\n';
        return 0; // or some error value
    }
}

// Function to convert string to float
float toFloat(const std::string& value) {
    try {
        return std::stof(value);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << '\n';
        return 0.0f; // or some error value
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << '\n';
        return 0.0f; // or some error value
    }
}

int main() {
    std::string intString     =  "42";
    std::string floatString   =  "3.14159";

    int intValue = toInt(intString);
    float floatValue = toFloat(floatString);

    std::cout << "String to int     : " << intValue << std::endl;
    std::cout << "String to float   : " << floatValue << std::endl;

    return 0;
}
