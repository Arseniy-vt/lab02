#include <iostream>
// main function
int main() {
    // user name
    std::string name;
    // request for name
    std::cout << "Enter your name: ";
    // read name
    std::cin >> name;
    // print greeting
    std::cout << "Hello World from " << name << std::endl;
    return 0;
}
