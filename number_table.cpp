#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number;
    cout << "Enter the number : ";
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " : " << number * i << endl;
    }

}