// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

#include <iostream>

using namespace std;

int main() {
    int num, sum;
    sum = 0;

    cout << "Enter a positive integer: " << endl;
    num = 5;

    for (int i = 1; i <= num; i++) {
        sum += i;
        cout << sum << endl;
    }

    // cout << "Sum = " << sum << endl;

    return 0;
}

// Code from https://www.programiz.com/cpp-programming/for-loop

