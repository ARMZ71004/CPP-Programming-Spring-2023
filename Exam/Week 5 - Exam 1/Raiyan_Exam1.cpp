/* 
Exam 1
Atif Raiyan
March 6, 2023 
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n---------------------- Program 1: Ski course calculator ---------------------- \n"<<endl;
    int age;
    float cost = 0;
    string group;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    cout<<"-------------------- Group: "<<group<<"----------------------"<<endl;
    if( age <= 6 && age >= 3){
        cost = 95.60;
        group = "Green";
    }
    else if ( age <= 12 && age >= 7){
        cost = 90.50;
        group = "Orange";
    }
    else if ( age <= 29 && age >= 13){
        cost = 85.99;
        group = "Purple";
    }
    else if ( age <= 80 && age >= 30){
        cost = 79.99;
        group = "Blue";
    }
    else if ( age <= 2 && age >= 0 || age <= 100 && age >= 81){
        cout<<"We do not offer courses for this age range"<<endl;
    }
    else{
        cout<<"Cant determine cost"<<endl;
    }
    
    cout<<"The ski course's cost for the age of "<<age<<" is $"<<cost<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    cout<<"\n ---------------------- Program 2: TV channel ---------------------- \n"<<endl;
    cout<<"Select your TV channel"<<endl;
    cout<<"Type c or C for Cartoon Network\nType n or N for New York News\n";
    cout<<"Type t or T for Teen Channel\nType o or O for Other Channels"<<endl;
    char selection;
    cout<<"Type your Selection: ";
    cin>>selection;
    cout<<"-------------------------Result-------------------------"<<endl;
    switch(selection)
    {
        case 'c':
        case 'C':
            cout<<"You are listening to Cartoon NetWork"<<endl;
        break;

        case 'n':
        case 'N':
            cout<<"You are listening to New York News"<<endl;
        break;

        case 't':
        case 'T':
            cout<<"You are listening to Teen Channel"<<endl;
        break;
        
        case 'o':
        case 'O':
            cout<<"You are listening to Other Channels"<<endl;
        break;

        default:
            cout<<"You are watching nothing!"<<endl;
    }
    cout<<"--------------------------------------------------------"<<endl;
    return 0;
}