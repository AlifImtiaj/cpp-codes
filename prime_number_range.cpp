#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned long int lowerLimit = 0;
    unsigned long int upperLimit = 1;

    cout << "Enter lower limit : ";
    cin >> lowerLimit;

    cout << "Enter upper limit : ";
    cin >> upperLimit;

    if (lowerLimit > upperLimit)
    {
        cout << "Error occured thus terminating the program !!!";
        return 0;
    }
    int div = 2;

    cout << "Prime numbers in this range are : ";
    while (lowerLimit <= upperLimit) {
        prime:
        if (div < lowerLimit) {
            if (lowerLimit % div != 0) {
                div += 1;
                goto prime;
            }
        } else {
            cout << " " << lowerLimit;
        }
        lowerLimit += 1;
        div = 2;
    }
    
}