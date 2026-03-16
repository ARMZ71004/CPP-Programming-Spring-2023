/* 
Atif Raiyan
Match 13, 2023 
*/
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
    cout<<"----------------------------Example 1----------------------------\n"<<endl;
    int x = 0;
    while(x<= 10){
    cout<<"x = "<<x<<endl;
    x++;
    }
    cout<<"\n----------------------------Example 2----------------------------\n"<<endl;
    int count = 3, counter = 3;
    while(count-- > 0){
        cout<<"count = "<<count<<endl;
    }
    cout<<endl;
    while(--counter > 0){
        cout<<"counter = "<<counter<<endl;
    }
    cout<<"\n----------------------------Example 3----------------------------\n"<<endl;
    int number;
    cout<<"Enter a number between 10 and 20: ";
    cin>>number;
    while(number<10 || number>20){
        cout<<number<<" is invalid!"<<endl;
        cout<<"Enter a number between 10 and 20: ";
        cin>>number;
    }
    cout<<"you entered: "<<number<<endl;
    cout<<"\n----------------------------Example 4----------------------------\n"<<endl;
    int index;
    cout<<"enter a number less than 10"<<endl;
    cin>>index;
    do{
        cout<<"index = "<<index<<endl;
        index++;

    }while(index<=10);
    cout<<"\n----------------------------Activity----------------------------\n"<<endl;
    /*
    --> modify example 4, so it can validate if the number is the reqested number is within range.. use do-while loop
    --> Exercise 1: create a program that will ask the user to enter a color and run the loop if the user wants it to run. Use character 'Y' to run or 'N' to stop while loop
    */
    cout<<"Part 1\n";
    int index1;
    cout<<"enter a number less than 10"<<endl;
    cin>>index1;
    do{
        if(index1>10){
            cout<<"Number has reached 10 or above";
            cin>>index1;
            break;
        }
        else{
            cout<<"index = "<<index1<<endl;
            index1++;}
        
    }while(index1<=10);
    cout<<"\nPart 2\n";
    string color;
    char ask = 'Y';
    while(ask == 'Y'){
        cout<<"Enter a color: ";
        cin>>color;
        cout<<"\nEnter Y if you want to loop and N to finalize color: ";
        cin>>ask;
    }
    cout<<"\nFinal Color is: "<<color;
    return 0;
}