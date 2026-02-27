#include <iostream>
#include <cmath> // Matematiksel fonksiyonlar için (sqrt, pow)

int main() {
    double x1, y1, x2, y2;

    std::cout << "Enter x1 and y1: ";
    std::cin >> x1 >> y1;

    std::cout << "Enter x2 and y2: ";
    std::cin >> x2 >> y2;

    // Öklid mesafesi formülü
    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    std::cout << "Distance: " << distance << std::endl;

    return 0;
}