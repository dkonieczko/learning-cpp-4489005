// Learning C++ 
// Exercise 02_09
// Strings, by Dan Konieczko 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;

    char aray_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";
    
    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's it going?";
    
    strncat(aray_str1, array_str2, LENGTH1);
    std::cout << aray_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
