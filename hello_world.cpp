#include <iostream>

// main function
int main() {
    // creating name
    std::string name;
    // request name
    std::cout << "Enter your name: ";
    // read name
    std::cin >> name;
    // print greeting
    std::cout << "Hello World from " << name << std::endl;
    return 0;
}
