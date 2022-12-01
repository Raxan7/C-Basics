// A program to add elements in an array
#include <iostream>
using namespace std;
int main(){
    int arrays[6], sum;
    for (int i = 0; i < 6; i++){
        arrays[i] += i;
        sum += arrays[i];
        cout << sum << endl;
    }
    cout << "The sum of the elements in the array is : " << sum << endl;
}