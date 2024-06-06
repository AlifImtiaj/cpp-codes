#include <iostream>

using std::cout;
using std::endl;

int main() {
    
    // INTEGER
    // int i = 10;
    int i = 'A';
    cout << i << endl;

    // FLOAT
    float f = 3.14f;
    cout << f << endl;

    // DOUBLE
    double d = 5.00011555;
    cout << d << endl;

    // CHARACTER

    // char ch = 'A';
    char ch = 65;
    cout << ch << endl;

    // BOOLEAN
    // bool b = 1;
    bool b = true;
    cout << b << endl;


    // SIZE OF DATA TYPES
    cout << "Size of int is " << sizeof(int) << endl;
    cout << "Size of signed int is " << sizeof(signed int) << endl;
    cout << "Size of unsigned int is " << sizeof(unsigned int) << endl;
    cout << "Size of long int is " << sizeof(long int) << endl;
    cout << "Size of short int is " << sizeof(short int) << endl;
    cout << "Size of float is " << sizeof(float) << endl;
    cout << "Size of double is " << sizeof(double) << endl;
    cout << "Size of char is " << sizeof(char) << endl;
    cout << "Size of boolean is " << sizeof(bool) << endl;


}