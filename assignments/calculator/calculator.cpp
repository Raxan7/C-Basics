#include <iostream>
using namespace std;

int calculator(int num1, int num2, char oper){
    int ans;
    switch(oper){
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            ans = num1 / num2;
            break;
    }
    return ans;
}

int main(){
    string condition;
    cout << "Do you want to perform the calculations?" << endl;
    cout << "Enter Yes if you wish to continue, to terminate the program enter any other thing" << endl;
    cin >> condition;
    if (condition == "Yes" || condition == "yes" || condition == "YES"){
        int num1, num2;
        char oper;
        cout << "Enter the first number" << endl;
        cin >> num1;
        cout << "Enter the second number" << endl;
        cin >> num2;
        cout << "Enter the operation" << endl;
        cin >> oper;
        cout << "The answer is " << calculator(num1, num2, oper) << endl;
        main();
    } else {
        cout << "Terminating the Program" << endl;
        return 0;
    }
}