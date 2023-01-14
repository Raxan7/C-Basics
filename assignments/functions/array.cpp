#include<iostream>
using namespace std;
void sum_array(int matiko[6]){
int jumla=0;
cout<<"Enter the elements of array you need to operate"<<endl;
for(int b=0; b<6; b++){
 
  cin>>matiko[b] ;
  jumla+=matiko[b]; 
}
cout<<"sum of the array elements is "<<jumla<<endl;
}

void multiplication_array(int matiko[6]){
    int product=1;
    for(int b=0;b<6;b++){
        product*=matiko[b];
    }
cout<<"product of the array elements is "<<product<<endl;
    
}

int main(){
    int matiko[6];
    sum_array(matiko);
    multiplication_array(matiko);
    return 0;
}

