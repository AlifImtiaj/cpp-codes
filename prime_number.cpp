#include <iostream>

int main() {

    unsigned long int num;
    int div = 2;

    std::cin >> num;

prime:
    if (div < num) {
        if (num % div == 0) {
            std::cout << "Non prime number" << std::endl;
        } else {
            div += 1;
            goto prime;
        }
    } else {
        std::cout << "Prime number" << std::endl;
    }

}