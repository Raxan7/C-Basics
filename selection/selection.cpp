#include <iostream>
#include <cmath>
using namespace std;

double cube(double num1){
    return num1 * num1 * num1;
}

int main(){
    double userInput;
    cout << "Input No: " << endl;
    cin >> userInput;
    cout << "The cube of " << userInput << " is " << cube(userInput) << endl;
    return 0;
}