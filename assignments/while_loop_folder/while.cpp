#include <iostream>
using namespace std;
int main(){
    int n, i;
    n = 1;
    while (i < 5){
        n += i;
        i++;
    }
    cout << "The value of n is : " << n << endl;
    cout << "The value of i is : " << i << endl;
}