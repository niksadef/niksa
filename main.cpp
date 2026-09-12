#include <iostream>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(5, 7);
    std::cout << "Сумма: " << result << std::endl; 
    return 0;
}