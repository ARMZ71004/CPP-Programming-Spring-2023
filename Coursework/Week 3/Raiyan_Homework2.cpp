/* 
Homework 2: strings, string methods, and numerical variables
Submitted date: Feb 12, 2023
Feb 5, 2023
*/
#include<iostream>
using namespace std;
int main(){
    //Activity 1
    cout<<"------------Activity 1------------\n";
    string A = "Welcome to ";
    string B = "New York City ";
    string C;
    cout<<"Enter Your Name:";
    cin>>C;
    string D = A + B + C;
    cout<<"\nEntered message:\t\t"<<D<<endl;
    int LenD = D.length();
    int FindD = D.find("to");
    string ReplaceD = D.replace(FindD, 2, "%---%");
    cout<<"Message Length:\t\t\t"<<LenD<<"\nIndex of Character 'to':\t"<<FindD<<"\nReplace 'to' with %---%:\t"<<ReplaceD<<endl;
    
    //Activity 2
    cout<<"\n------------Activity 2------------\n";
    const float pi =  3.1416;
    float Radius;
    float Height;
    cout<<"Enter Radius in cm:";
    cin>>Radius;
    cout<<"Enter height in cm:";
    cin>>Height;
    bool gt, et, ne;
    gt = Radius>Height;
    et = Radius == Height;
    ne = Radius != Height;
    float volume = pi * Radius * Radius * Height;
    cout<<"\nIs Radius Greater than Height?\t\t\t\t"<<gt<<"\nIs Radius equal to Height?\t\t\t\t"<<et<<endl;
    cout<<"Triple height =\t\t\t\t\t\t "<<Radius * 3<<"cm\nIncreased radius by 5 =\t\t\t\t\t "<<Height + 5<<"cm\nIs the radius not equal to and greater than height?\t"<<(ne && gt);
    cout<<"\nThe volume of a right cylinder with radius "<<Radius<<" and "<<Height<<" is = "<<volume<<"cm^3";
    return 0;
}