/* 
Homework 1: string and numerical variables
by Atif Raiyan
Feb 5, 2023
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"--------------Part 1-----------\n";
    string firstname;
    string lastname;
    cout<<"Enter your First Name?\n";
    cin>>firstname;
    cout<<"Enter your Last Name?\n";
    cin>>lastname;
    string fullname = firstname + " " + lastname;
    cout<<"Welcome to C++ "<<fullname<<firstname[0]<<firstname[1]<<"."<<lastname[0]<<"."<<endl;
    cout<<"\n-------------Part 2----------\n";
    int height;
    int radius;
    cout<<"Enter a Height?\n";
    cin>>height;
    cout<<"Enter a Radius?\n";
    cin>>radius;
    float area = radius * radius * 3.1416;
    float volume = radius * radius * radius * 3.1416 * 4 / 3;
    cout<<"The area is "<<area<<" with radius "<<radius<<endl;
    cout<<"The volume of a sphere is "<<volume<<endl;
    return 0;
}