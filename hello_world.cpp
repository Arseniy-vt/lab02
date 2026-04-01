#include <iostream>
// Основная фукнция
int main() {
    // Имя пользователя
    std::string name;
    // Запроси имени
    std::cout << "Enter your name: ";
    // Ввод имени
    std::cin >> name;
    // Печать приветствия
    std::cout << "Hello World from " << name << std::endl;
    return 0;
}
