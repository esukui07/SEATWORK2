#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    char choice;
    double result;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> choice;

    switch(choice){
        case '+':
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << "The result of the operation is : " << n1 + n2;
            break;
        case '-':
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << "The result of the operation is : " << n1 - n2;
            break;
        case '*':
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << "The result of the operation is :" << n1 * n2;
            break;
        case '/':
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            result = n1 / n2;
            cout << "The result of the operation is : " << result;
            break;
        default:
            cout << "Invalid operation.";
    }
    return 0;
}