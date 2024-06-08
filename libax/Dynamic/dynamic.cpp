#include <algorithm>
#include <string>

extern "C" __declspec(dllexport) bool IsPolindrome(const std::string& str)
{
    std::string temp_str = str;
    std::transform(temp_str.begin(), temp_str.end(), temp_str.begin(), ::tolower);
    std::string reversed_str = temp_str;
    std::reverse(reversed_str.begin(), reversed_str.end());

    return temp_str == reversed_str;
}