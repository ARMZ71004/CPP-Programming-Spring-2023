/*
Name
April 19, 2023
*/
#include<iostream>
#include<cmath>
using namespace std;

int speed(){
    int s;
    cout<<"Enter speed: ";
    cin>>s;
    while (s < 0){
        cout<<"Enter a positive speed: ";
        cin>>s;
    }
    return s;
}
int temp(){
    int t;
    cout<<"Enter temp: ";
    cin>>t;
    while (t>10){
        cout<<"Enter a temperature below 10: ";
        cin>>t;
    }
    return t;
}
int windspeed(){
    int spe = speed();
    int tem = temp();
    double WCI = 33-(10*sqrt(spe)-spe+10.5)*(33-tem);
    return WCI;
}

int main(){
cout<<"\nPart 1"<<endl;
int* ptr;
int var = 7;
int foo = 21;
ptr = &var;
cout<<"Pointer 1 = "<<ptr<<endl;
cout<<"value 1 = "<<*ptr<<endl;
ptr = &foo;
cout<<"Pointer 2 = "<<ptr<<endl;
cout<<"value 2 = "<<*ptr<<endl;
int& ref = var;
cout<<"ref = "<<&ref<<endl;

cout<<"\nPart 2"<<endl;
    float windIndex = windspeed();
    cout<<"The wind index is: "<<windIndex<<endl; 
return 0;
}
