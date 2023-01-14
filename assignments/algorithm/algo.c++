#include <iostream>
using namespace std;


int checker(int userInput, int userCond){
    if (userInput == 0 || userInput < 0){
        userCond = 0;
    } else {
        userCond = 1;
    }
    return userCond;
}

int main(){
    int userInput;
    int userCond = 0;
    cout << "Enter your input: " << endl;
    cin >> userInput;
    userCond = checker(userInput, userCond);
    cout << userCond << endl;
    switch (userCond)
    {
    case 1:
        for (int i = 1; i < userInput; i++){
            if(userInput%i==0){
                cout << i << endl;
            }
        }
        main();
        break;
    
    default:
        break;
    }
    return 0;
}