/*
Atif Raiyan
April 24, 2023
*/
#include<iostream>
using namespace std;

void printByValue(string val){
    cout<<val<<endl;
}

void printByReference(const string& REF){
    cout<<REF<<endl;
}

void printByAddress(const string* ptr){
    cout<<ptr<<endl;
}

int main(){
    cout<<"\n----------------------Example 4--------------------------\n";
    string str = "Hello, World!";
    printByValue(str);
    printByReference(str);
    printByAddress(&str);
    cout<<"\n----------------------Example 1--------------------------\n";
    int num = 12;
    char c = 'T';
    string name = "Peter";

    //uninitialized pointer. Holds a temporary address
    int* ptr; // null pointer
    char* ptr1;
    string* ptr2;
    /*
    cout<<"ptr pointer = "<<ptr<<endl;
    cout<<"ptr1 pointer = "<<ptr1<<endl;
    cout<<"ptr2 pointer = "<<ptr2<<endl;
    */
    ptr = &num;
    ptr1 = &c;
    ptr2 = &name;

    //pointer initialized with the address of variable sum
    cout<<"Reference to ptr = "<<ptr<<endl;
    cout<<"Reference to ptr1 = "<<ptr1<<endl;
    cout<<"Reference to ptr2 = "<<ptr2<<endl;

    //use dereference operator to print the value address ptr is holding
    cout<<"Dereference to ptr = "<<*ptr<<endl;
    cout<<"Dereference to ptr1 = "<<*ptr1<<endl;
    cout<<"Dereference to ptr2 = "<<*ptr2<<endl;

    cout<<"\n----------------------Example 2--------------------------\n";
    const int X = 5;
    const int* PTR = &X;
    cout<<"Reference to X = "<<PTR<<endl;
    cout<<"Dereference to X = "<<*PTR<<endl;
    const int Y = -10;
    PTR = &Y;
    cout<<"Reference to Y = "<<PTR<<endl;
    cout<<"\n----------------------Arrays--------------------------\n";
    cout<<"\n----------------------Ex 1--------------------------\n";
    int score[5];
    cout<<score<<endl;
    score[0] = 60;
    score[1] = 30;
    score[2] = 75;
    score[3] = 89;
    score[4] = 98;
    cout<<"3rd element = "<<score[2]<<endl;
    int avg = (score[0]+score[1]+score[2]+score[3]+score[4])/5;
    cout<<"The average is "<<avg<<endl;

    cout<<"\n----------------------Ex 2--------------------------\n";
    char sym[3];
    sym[0] = '%';
    sym[1] = 'A';
    sym[2] = '$';
    cout<<"2nd symbol = "<<sym[1]<<endl;

    cout<<"\n----------------------Ex 3--------------------------\n";
    int age_children[3] = {12, 8, 5};
    cout<<"Age of first Child = "<<age_children[1]<<endl;
    for(int i = 0; i<3; i++){
        cout<<"index = "<<i<<endl;
        cout<<"element value = "<<age_children[i]<<endl;
    }
    return 0;
}