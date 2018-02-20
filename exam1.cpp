#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to CLI Calculator V1.00 " << endl;

    float a, b, Result, cmd;
    char n;
    do {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;


    cout << "Menu" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cout << "5. quit" << endl;
    cout << "Please Enter Number: ";
    cin >> cmd;

    if (cmd == 1) {
        Result = a + b;
        cout << Result << endl << endl;
    } else if (cmd == 2) {
        Result = a - b;
        cout << Result << endl << endl;
    } else if (cmd == 3) {
        Result = a * b;
        cout << Result << endl << endl;
    } else if (cmd == 4) {
        Result = a / b;
        cout << Result << endl << endl;
    } else {
        break;
    }

    } while(1);



        return 0;
}
