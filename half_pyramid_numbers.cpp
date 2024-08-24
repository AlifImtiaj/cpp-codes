#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

}