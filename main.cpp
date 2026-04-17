#include <iostream>
#include <string>
#include "StringHelp.h"

int main() {

    std::string text {};

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << Capitalize(text);
    std::cout << ToUpper(text);
    std::cout << ToLower(text);
    return 0;
}