/*
Atif Raiyan
March 22, 2023
Introduction to Functions
*/
#include<iostream>
using namespace std;

// Example 1: Define a function that doesn't return a value
void printHI(){
    cout<<"Hello C++"<<endl;
    return; // This is optional in void functions
}
// Example 2: Function that returns a value
int returnFive(){
    return 5;
}
// Exmple 3: Function line after the return
int print(){
    cout<<"A"<<endl;
    return 3;
    cout<<"B"<<endl;
}
// Example 4: Function that return a value
double areaSquare(){
    double side = 6.2;
    double area = side*side;
    return area;
}
// CLASS ACTIVITY
int nums(){
    int num1 = 23;
    int num2 = 10;
    bool check;
    num1 *=2;
    num2 -= 5;
    check = num1>=num2;
    return check;
}
int main(){
    cout<<"\n ---------- CLASS ACTIVITY ---------- "<<endl;
    /*
    CLASS ACTIVITY: define a function that when is called, it will return a bool value of the following expression
    num1 = 23
    num2 = 10
    num1 *=2
    num2 -= 5
    check = num1>=num2
    The function will return the "check" value
    */
    cout<<"Is Num1 greater or equal to Num2: "<<nums()<<endl;
    
    cout<<"\n ---------- Example 4) Function That Returns a Value ---------- "<<endl;
    cout<<areaSquare;
    double a = areaSquare();
    cout<<"Printing return value of areaSquare() "<<a<<endl;

    cout<<"\n ---------- Example 3) Function line after the return ---------- "<<endl;
    int three = print();
    cout<<three<<"   "<<(three*=2)<<endl;

    cout<<"\n ---------- Example 1) Void Function ---------- "<<endl;
    // call function printHI
    printHI();
    printHI();
    printHI();
    cout<<"\n ---------- Example 2) Function That Returns a Value ---------- "<<endl;
    cout<<returnFive()<<endl;
    int five = returnFive();
    five += 2;
    cout<<five<<endl;
    return 0;
}