#include <iostream>
// Основная фукнция:
// main function
int main() {
    // Имя пользователя
    // user name
    std::string name;
    // Запроси имени
    // request for name
    std::cout << "Enter your name: ";
    // Ввод имени
    // read name
    std::cin >> name;
    // Печать приветствия
    // print greeting
    std::cout << "Hello World from " << name << std::endl;
    return 0;
}
