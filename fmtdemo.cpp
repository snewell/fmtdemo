#include <iostream>
#include <string>

#include <fmt/format.h>

int main() {
    std::string s = fmt::format(fmt("{}"), 42);
    std::cout << s << '\n';
    return 0;
}
    
