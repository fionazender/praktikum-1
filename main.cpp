#include <iostream>
#include <string>
#include <format>

int main() {
    std::string name;
    std::cout << "Hi!" << std::endl;

    std::cin >> name;
    std::cout << std::format("Your name is: {}", name) << std::endl;

    return 0;
}