#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Calculator {
private:
    double num1, num2;
    char op;

    double Add(double n1, double n2) {
        return n1 + n2;
    }
    double Sub(double n1, double n2) {
        return n1 - n2;
    }
    double Multi(double n1, double n2) {
        return n1 * n2;
    }

    double Div(double n1, double n2) {
        return n1 / n2;
    }

public:

    void RunCalculator() {
        cout << "Enter first number : ";
        cin >> num1;

        cout << "Enter second number : ";
        cin >> num2;

        cout << "\'+\' for addition" << endl <<
        "\'-\' for substraction" << endl <<
        "\'*\' for multiplication" << endl <<
        "\'/\' for division" << endl <<
        "Input operation : ";

        cin >> op;

        cout << "Result is : ";

        switch (op)
        {
        case '+':
            cout << Add(num1, num2) << endl;
            break;
        
        case '-':
            cout << Sub(num1, num2) << endl;
            break;
        
        case '*':
            cout << Multi(num1, num2) << endl;
            break;
        
        case '/':
            cout << Div(num1, num2) << endl;
            break;
        
        default:
            cout << "Invalid" << endl;
            break;
        }
    }

    ~Calculator() {
        cout << "Task Ended" << endl;
    }
};

int main() {
    Calculator* calc = new Calculator();
    calc->RunCalculator();
    delete calc;

}