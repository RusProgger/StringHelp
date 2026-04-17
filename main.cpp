#include <iostream>
#include <string>
#include "StringHelp.h"

int main() {

    std::string text {};

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    // Capitalize
    std::cout << Capitalize(text);

    // ToUpper
    std::cout << ToUpper(text);

    // ToLower
    std::cout << ToLower(text);


    // pause 
    std::cin.get();
    return 0;
}