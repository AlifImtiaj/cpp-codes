#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int row;
    cout << "Enter row : ";
    cin >> row;

    for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}