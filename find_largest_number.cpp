#include <iostream>

using std::cout;
using std::cin;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3; // INPUT NUMBERS THEN SEPARATE THEM WITH SPACE

    cout << "Largest number is ";

    if (n1 > n2) {
        if (n1 > n3)
            cout << n1;
        else
            cout << n3;
    } else {
        if (n2 > n3)
            cout << n2;
        else
            cout << n3;
    }

}