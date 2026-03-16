/*
Atif Raiyan
Match 27, 2023
*/
#include<iostream>
using namespace std;

// Example 5) Define a function with two different numbers of parameters
int add(int x, int y){
    int sum = x+y;
    return sum;
}
// Example 6) Convert from Celcius to Fahrenheit
double fah(double celsius){
    double f = celsius*1.8+32;
    return f;
}
// Example 7) Check if a number is positive, negative or zero
void check(int num){
    if(num>0){
        cout<<num<<" is positive"<<endl;
    }
    else if(num<0){
        cout<<num<<" is negative"<<endl;
    }
    else{
        cout<<num<<" is zero"<<endl;
    }
}
// Class Activity) Check if a number is even and return a bool value
int CA(){
    int ca;
    bool cad;
    cout<<"Enter a number: ";
    cin>>ca;
    cout<<"Is "<<ca<<" even? ";
    if (ca%1==0){
        cad = ca%2==0;
    }
    return 0;
}
int main(){
   cout<<"\n ---------- Example 5) Function With Parameters ----------"<<endl;
    int a = add(-5,12);
    cout<<a<<endl;
    cout<<"\n ---------- Example 6) Convert from Celsius to Fahrenheit ----------"<<endl;
    double c,f;
    cout<<"Enter a Celsius: ";
    cin>>c;
    f = fah(c);
    cout<<c<<"C = "<<f<<"F"<<endl;
    cout<<"\n ---------- Example 7) Check a Number ----------"<<endl;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    check(n);
    cout<<"\n ---------- Class Activity ----------"<<endl; 
    cout<<CA()<<endl;
}