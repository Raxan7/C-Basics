#include <iostream>
using namespace std;
int main(){
    char choice;
    cout << "Enter an abbreviation for an EA country" << endl;
    cin >> choice;
    switch (choice)
    {
    case 'T':
        cout << "You are from Tanzania" << endl;
        break;
    case 'U':
        cout << "You are from Uganda" << endl;
        break;
    case 'K':
        cout << "You are from Kenya" << endl;
        break;
    case 'B':
        cout << "You are from Burundi" << endl;
        break;
    
    default:
        cout << "That is not an abbreviation of an EA country" << endl;
        break;
    }
}