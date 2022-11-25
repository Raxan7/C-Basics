// A program to add even numbers in an array
#include <iostream>
using namespace std;
int main(){
    int arrays[6], n, sum;
    n = 0;
    for (int i = 0; i < 6; i++){
        if (i == 0){
            arrays[i] = n;
        } else {
            arrays[i] = n += 2;
        }
        sum += arrays[i];
    }
    // cout << arrays[i] << endl;
    cout << sum << endl;
}