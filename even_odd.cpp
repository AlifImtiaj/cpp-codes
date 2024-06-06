#include <iostream>

using std::cout;
using std::cin;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n%2==0)
        cout << "Even";
    else
        cout << "Odd";
}