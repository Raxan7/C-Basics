#include <iostream>
using namespace std;
int main(){
    int n, i;
    n = 1;
    while (i < 5){
        n += i;
        i++;
    }
    cout << n << endl;
    cout << i << endl;
}