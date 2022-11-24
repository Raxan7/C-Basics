// C++ Program to print numbers from 1 to 5

#include <iostream>

using namespace std;

int main() {
    int i = 1; 
    int n = 0;

    while (i <= 5) {
        n += i;
        i++;
    }
    cout << "The value of n is : " << n << endl;
    cout << "The value of i is : " << i << endl;
    
    return 0;
}