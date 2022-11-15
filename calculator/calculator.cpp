// Calculator Program
#include <iostream>
#include <cmath>
using namespace std;

double calc(double num1, char operation, double num2){
    char ops[] = {'+', '-', '*', '/'};
    double result;
    if (operation == ops[0]){
        result = num1 + num2;
    } else if (operation == ops[1]){
        result = num1 - num2;
    } else if (operation == ops[2]){
        result = num1 * num2;
    } else if (operation == ops[3]){
        result = num1 / num2;
    } else {
        result = 0.0;
    }
    return result;
}

int main(){
    // User input
    double num1;
    double num2;
    char operation;;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the operation: ";
    cin >> operation;
    cout << "ENter the second no: " << endl;
    cin >> num2;

    // Calculate
    double answer = calc(num1, operation, num2);
    cout << "The answer is: " << answer << endl;
    return 0;
}
