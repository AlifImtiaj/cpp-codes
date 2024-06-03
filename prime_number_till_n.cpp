#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    unsigned long int n;
    
    unsigned long int number = 1;

    unsigned long int div = 2;

    cout << "Enter n-th number : ";
    cin >> n;
    
    cout << "Prime numbers are : ";

    while (number <= n) {
        prime:
        if (div < number) {
            if (number % div != 0) {
                div += 1;
                goto prime;
            }
        } else {
            cout << " " << number;
        }

        number += 1;
        div = 2;
    }


}