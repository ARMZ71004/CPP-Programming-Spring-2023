/*
Atif Raiyan
Homework 9 - array in a function  
May 11, 2023
*/

#include <iostream>
using namespace std;
void randPopulate(int noise[], int arraySize){
    srand(time(0));
    for(int x = 0; x < arraySize; x++){  
        noise[x] = rand() % 21 + 10;   
    }
}

void print(int noise[], int arraySize){
    for(int x = 0; x < arraySize; x++){  
        cout << noise[x] << endl;    
    }
}

void reverse(int noise[], int arraySize){
    for(int x = 0; x < arraySize / 2; x++){ 
        int temp = noise[x];
        noise[x] = noise[arraySize - x - 1];
        noise[arraySize - x - 1] = temp;
    }   
}
int main(){
  int arraySize;
  cout<<"Enter an array size: ";
  cin>>arraySize;
  int noise[arraySize];
  randPopulate(noise, arraySize);
  cout<<"Original Set"<<endl;
  print(noise, arraySize);
  reverse(noise, arraySize);
  cout<<endl<<"Reversed Set"<<endl;
  print(noise, arraySize);
 
  return 0;
}