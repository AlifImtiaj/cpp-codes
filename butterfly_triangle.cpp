#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row * 2; j++) {
            if (j <= i || j > (row * 2 - i)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= row * 2; j++) {
            if (j <= i || j > (row * 2 - i)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }


}
