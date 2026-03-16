/*
Atif Raiyan
Activity 1C - input and output
monday, Jan 30
*/
#include<iostream>
using namespace std;
int main(){
    string fn = "Ant";
    int n1 = 18;
    string msg;
    cout<<"\n-------Ex 1-------\n";
    cout<<"Hello World!!\n\n";
    cout<<"\n-------Ex 2-------\n";
    cout<<"Type your name";
    cout<<"\nVaribles\n";
    cin>>msg;
    cout<<msg<<" was your Name";
    cout<<"\n---Activity 1C---\n";
    string ctry;
    int num;
    cout<<"Enter a Country and a Negative Number\n";
    cin>>ctry;
    cout<<"\n"<<endl;
    cin>>num;
    cout<<"Country:"<<ctry<<"\tNegative Number:"<<num<<endl;
    return 0;
}