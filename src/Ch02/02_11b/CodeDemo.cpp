// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Dan Konieczko 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 99;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "celsius   : " << celsius << std::endl;

    float weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float          : " << weight  << std::endl;
    std::cout << "Integer part   : " << (int) weight  << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000)  << std::endl;
    
    double weight1 = 10.99;

    std::cout << std::endl;
    std::cout << "Double         : " << weight1  << std::endl;
    std::cout << "Integer part   : " << (int) weight1  << std::endl;
    std::cout << "Fractional part: " << (int)((weight1 - (int)weight1) * 10000)  << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
