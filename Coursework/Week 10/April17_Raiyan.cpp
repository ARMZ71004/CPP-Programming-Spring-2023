/*
Atif Raiyan
April 17, 2023
*/
#include<iostream>
using namespace std;

//GLOBAL VARIABLES
int number;
const double PI = 3.14159;

//Example: Multiple Functions
void doB(){
    cout<<"In doB()\n";
}

void doA(){
    cout<<"Starting doA()\n";
    doB();
    cout<<"Ending doA()\n";
}

//Example 8
int getNum(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}
int tripleNumber(int n){
    return n*3;
}
void printMath(int x, int y){
    cout<<x<<" tripled is "<<tripleNumber(x)<<endl;
    cout<<y<<" tripled is "<<tripleNumber(y)<<endl;
}
//Example 1 - Chapter 9
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

//Example 3 - Chapter 9
void doSomething(){
    //Call global variable num
    number = -20;
    cout<<"number in doSomething() function "<<number<<endl;
}

//Example 4 - Chapter 9
double area(double radius){
    return (PI*radius*radius); //Return the area of a circle
}
double volume(double radius){
    return ((4.0/3.0)*PI*radius*radius*radius);
}

int main(){
    cout<<"\n ---------- Example 4 - Chapter 9 ---------- \n"<<endl;
    double radiusOfBoth, areaOfCircle, volumeOfSphere;
    cout<<"Enter a radius: ";
    cin>>radiusOfBoth;

    areaOfCircle = area(radiusOfBoth);
    volumeOfSphere = volume(radiusOfBoth);

    cout<<"The area of circle is "<<areaOfCircle<<endl;
    cout<<"The volume of sphere is "<<volumeOfSphere<<endl;
    
    cout<<"\n ---------- Example 3 - Chapter 9 ---------- \n"<<endl;
    //Call global number variable
    number = 88;
    cout<<"number in main() function "<<number<<endl;

    cout<<"\n ---------- Example 1 - Chapter 9 ---------- \n"<<endl;
    int n1 = getNum();
    int n2 = getNum();
    int sum;
    cout<<"The sum is: "<<add(n1, n2)<<endl;
    sum = add(n1, n2) + add(n1, n2); 
    cout<<"Double the sum is: "<<sum<<endl;

    cout<<"\n ---------- Example 8 ---------- \n"<<endl;
    int num1 = getNum();
    int num2 = getNum();
    printMath(num1, num2);

    cout<<"\n ---------- Example: Multiple Functions ---------- \n"<<endl;
    cout<<"Starting main()\n";
    doA();
    cout<<"Ending main()\n";
    return 0;
}