/*
Atif Raiyan
April 30, 2023
*/
#include <iostream>
using namespace std;
int array_max(int ar[], int s){
      int max = ar[0];
    //use loop to go through each element in array ar[] and return the highest number as max
    for(int i = 0; i<s; i++){
        if(ar[i]>max){
            max = ar[i];
        }
    }
    return max;
}
 
int array_min(int ar[], int s){
    int min = ar[0];
    //use loop to go through each element in array ar[] and return the lowest number as min
    for(int i = 0; i<s; i++){
        if(ar[i]<min){
            min = ar[i];
        }
    }
    return min;
}
 
int main(){
    int num;
    cout << "How many elements want in an array? ";
    // save number in variable num
    cin>>num;
    // initial an array with size num
    int arr[num];
// use loop to ask the user to enter each value of the array
    for(int i = 0; i<num; i++){
        cin>>arr[i];
    }
    cout<<"Maximum number: "<<array_max(arr,num)<<endl;
    cout<<"Minimum number: "<<array_min(arr,num)<<endl;
 
    return 0;}