#include <iostream>
#include <string>
#include "StringHelp.h"

int main() {

    std::string text {};

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << text;

    return 0;
}