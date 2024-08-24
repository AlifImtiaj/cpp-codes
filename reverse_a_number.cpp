#include <iostream>

int main() {
    int num, lastDigit;
    int rev = 0;

    std::cin >> num;

    while (num > 0) {
        lastDigit = num % 10;
        rev = rev* 10 +lastDigit;
        num /= 10;
    }

    std::cout << "Reverse : " << rev;

}