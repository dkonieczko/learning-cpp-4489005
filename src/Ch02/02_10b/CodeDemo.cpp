// Learning C++ 
// Exercise 02_10
// Type Casting, by Dan Konieczko 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt;
    unsgn = sgn;

    std::cout << "float: " << flt << std::endl;
    std::cout << "int32: " << sgn << std::endl;
    std::cout << "uint32: " << unsgn << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
