#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int rows, cols;
    cout << "Enter rows and cols : ";
    cin >> rows >> cols;

    for (int i =1; i <= rows; i++) {
        for (int j = 1; j<=cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }


}