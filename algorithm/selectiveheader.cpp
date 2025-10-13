#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> v = {"Hello", "world"};
    for (const auto& s : v) std::cout << s << " ";
}
