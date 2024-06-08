#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) continue;
        
        cout << i << " ";
    }
}