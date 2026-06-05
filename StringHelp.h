#pragma once

#include <string>
#include <algorithm>
#include <cctype>

// UpperCase

inline std::string ToUpper(std::string text)
{
    std::transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c) {
            return std::toupper(c);
        });

    return text;
}


// LowerCase

inline std::string ToLower(std::string text)
{
    std::transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c) {
            return std::tolower(c);
        });

    return text;
}

// Capitalize

inline std::string Capitalize(std::string text)
{
    if (text.empty())
        return text;

    std::transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c) {
            return std::tolower(c);
        });

    text[0] = std::toupper(text[0]);

    return text;
}