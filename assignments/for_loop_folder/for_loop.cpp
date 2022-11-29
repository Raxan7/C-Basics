// A code to add even numbers
#include <iostream>
using namespace std;
int main(){
    int i, n;
    n = 0;
    for (i = 0; i < 10; i++){
        if (i % 2 == 0){
            n += i;
        }
    }
    cout << "The value of n, which is the sum is : " << n << endl;
    cout << "The value of i is : " << i << endl;
}