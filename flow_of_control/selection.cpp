#include <iostream>
using namespace std;
int main(){
    int x, y;
    x = 2;
    y = 3;
    // The if statements are executable with or without the curly brackets
    if (x == 1)
        cout << "Success " << endl;
    else 
        cout << "Not working" << endl;
    
    // This also works
    if (y == 3){
        cout << "Success " << endl;
    } else {
        cout << "Nothing " << endl;
    }
}