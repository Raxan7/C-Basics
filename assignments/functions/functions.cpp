#include <iostream>
using namespace std;

void sumArrays(int manyerere[6]){
    int sum = 0;
    for (int i = 0; i < 6; i++){
        sum += manyerere[i];
    }
    cout << "The sum of the elements in the array is : " << sum << endl;
}

void multArrays(int manyerere[6]){
    int ans = 1;
    for (int i = 0; i < 6; i++){   
        ans *= manyerere[i];
    }
    cout << "The multiple of the elements in the array is : " << ans << endl;
}

int main(){
    int manyerere[6];
    cout << "Enter the numbers that you want ot operate on : " << endl;
    for (int i = 0; i < 6; i++){
        
        cin >> manyerere[i];
    }
    sumArrays(manyerere);
    multArrays(manyerere);
    return 0;
}