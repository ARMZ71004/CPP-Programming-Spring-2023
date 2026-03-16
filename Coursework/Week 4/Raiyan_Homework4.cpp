/* 
Homework 4: Branching
Atif Raiyan
Feb 26, 2023 
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"PART 1 - IF ELSE-IF, ELSE STATEMENT: GPA CALCULATOR"<<endl;
    //variables for grades
    float mid, final, lab;
    //float as variables are included
    //Asking to enter values
    cout<<"Enter the grades of the Midterm, Final and Lab"<<endl;
    cin>>mid;
    cin>>final;
    cin>>lab;
    //cin to store values entered
    //formula for GPA
    float finalgrade = (mid * 0.25) + (final * 0.4)+ (lab * 0.35);
    //Result Display
    //Varaible to hold GPA
    string GPA;
    cout<<"-------------------------Result-------------------------"<<endl;
    //If, if else and else code
    if(finalgrade <= 100 && finalgrade >= 90){
        GPA = "A";
    }
    else if (finalgrade <= 89 && finalgrade >= 80){
        GPA = "B";
    }
    else if (finalgrade <= 79 && finalgrade >= 70){
        GPA = "C";
    }
    else if (finalgrade <= 69 && finalgrade >= 60){
        GPA = "D";
    }
    else if (finalgrade <= 59 && finalgrade >= 0){
        GPA = "Fail!";
    }
    else{
        GPA = "Invalid!";
    }
    //Precision
    cout.precision(3);
    //OUTPUT
    cout<<"Final Grade "<<finalgrade<<", GPA = "<<GPA<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    //PART 2 - SWITCH STATMENT: RADIO STATION
    cout<<"New York Radio Station"<<endl;
    //Choices
    cout<<"Select your radio station\nType a or A for ESPN New York station\nType b or B for Z100 New York station\n";
    cout<<"Type c or C for La Mega Station\nType d or D for Classic Rock Station\nType e or E for WCBS News station\n"<<endl;
    //selection
    char selection;
    cout<<"Type your Selection: ";
    cin>>selection;
    //Display
    cout<<"-------------------------Result-------------------------"<<endl;
    //switch statment
    switch(selection)
    {
        case 'a':
        case 'A':
            cout<<"You are listening to ESPN New York station"<<endl;
        break;

        case 'b':
        case 'B':
            cout<<"You are listening to Z100 New York station"<<endl;
        break;

        case 'c':
        case 'C':
            cout<<"You are listening to La Mega Station"<<endl;
        break;
        
        case 'd':
        case 'D':
            cout<<"You are listening to Classic Rock Station"<<endl;
        break;
        case 'e':
        case 'E':
            cout<<"You are listening to WCBS News station"<<endl;
        break;

        default:
            cout<<"Invalid!"<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    return 0;
}