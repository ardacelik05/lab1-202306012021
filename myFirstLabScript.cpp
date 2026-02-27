#include <iostream>
#include <string> // Metin (string) kullanmak için gerekli

int main() {
    std::string name;
    std::string studentID;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "." << std::endl;

    std::cout << "What is your Student ID?" << std::endl;
    std::cin >> studentID;
    std::cout << "Your ID is " << studentID << "." << std::endl;

    return 0;
}