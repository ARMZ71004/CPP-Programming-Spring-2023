/*
...
Atif Raiyan
Feb 15, 2023
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"-------------------Example 1-------------------\n";
    //logic operators
    //Logic operator returns "1" for true comparision and 0 for false comparison
    //AND operator --> && --> returns "1" if all conditions are True
    //OR operator --> || --> returns "1" if ONE conditions are True
    //NOT logic --> !
    int x = -5;
    int check1 = x >= 0 && x <= 10;
    cout<<"is x in between 0 and 10(AND)?\t"<<check1<<endl;
    int check2 = x >= 0 || x <= 10;
    cout<<"is x in between 0 and 10(AND)?\t"<<check2<<endl;
    bool check3 = 0;//False
    cout<<"Check3 = \t"<<check3<<endl;
    cout<<"Check3(NOT) = \t"<<!check3<<endl;

    cout<<"\n-------------------Example 2-------------------\n";
    //bitwise operators are operators that work on int at the binary level
    //Meaning they look directly at binary digits or bits of an integer
    int y = 12;
    cout<<"is bitwise shifted to left by 3-bit >"<<(y<<3)<<endl;
    cout<<"is bitwise shifted to right by 2-bit >"<<(y<<2)<<endl;

    cout<<"\n-------------------Example 3------------------- ";
    //formatting decimal places in float or double
    float num = 3.33333333333333;
    cout<<"\n10/3(no format) >\t"<<num<<endl;
    cout.setf(ios::fixed);
    cout<<"\n10/3(with ios :: fixed) >\t"<<num<<endl;
    cout.precision(3);
    cout<<"\n10/3(with precision at 3) >\t"<<num<<endl;
    
    cout<<"\n-------------------Example 4------------------- ";
    //implict casting
    //before implicit casting
    int i;
    float f;
    double d;
    i = -123;
    f = 2.555555555;
    d = 10.6222;
    cout<<"\ni >\t"<<i<<endl;
    cout<<"\nf >\t"<<f<<endl;
    cout<<"\nd >\t"<<d<<endl;
    //after implicit casting
    f = i;
    d = i;
    cout<<"\ni >\t"<<i<<endl;
    cout<<"\nf >\t"<<f<<endl;
    cout<<"\nd >\t"<<d<<endl;

    cout<<"\n-------------------Example 5------------------- ";

    cout<<"\n-------------------Example 6------------------- ";
    return 0;
}
