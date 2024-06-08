#include <string>
#include "static.h"

int remove(std::basic_string<char, std::char_traits<char>, std::allocator<char>>::iterator iterator,
           std::basic_string<char, std::char_traits<char>, std::allocator<char>>::iterator iterator1, char i);

void RemoveSymbols(std::string& str, char symb)
{
    str.erase(std::remove(nullptr));
}

int remove(std::basic_string<char, std::char_traits<char>, std::allocator<char>>::iterator iterator,
           std::basic_string<char, std::char_traits<char>, std::allocator<char>>::iterator iterator1, char i) {
    return 0;
}
