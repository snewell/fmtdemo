#include <iostream>
#include <string>

#include <fmt/format.h>

int main() {
    std::string s = fmt::format("{}", 42);
    std::cout << s << '\n';
    return 0;
}
    
