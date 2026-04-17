#include <iostream>
#include <string>
#include "StringHelp.h"

int main() {

    std::string text {};

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    // Capitalize
    std::cout << Capitalize(text) << "\n";

    // ToUpper
    std::cout << ToUpper(text) << "\n";

    // ToLower
    std::cout << ToLower(text) << "\n";

    std::cout << "Please press any key to exit...";
    // pause 
    
    std::cin.get();
    return 0;
}