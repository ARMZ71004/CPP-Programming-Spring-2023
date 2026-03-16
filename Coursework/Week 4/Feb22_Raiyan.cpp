/*
Atif Raiyan
Feb 22
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    //example 1
    cout<<"------------------------------Nested If------------------------------\n";
    //ask the user to select from the following chart (movie tickets)
    //a) child (0 to 17 yrs) -> $10 -> discount 5 to 10 tear olds $2
    //b) adult (18 to 65 yrs) -> $15
    //c) elderly (66 and above) -> $10 
    //prompt total price with tax
    char selection;
    float ticket, total, tax;
    int age;
    const float TAX_NY = 8.875;
    string catagory;
    cout<<"Choices:\nChild (0 to 17 yrs)\nAdult (18 to 65 yrs)\nElderly (66 and above)\nPlease enter a, b or c to select:"<<endl;
    cin>>selection;
    if(selection=='a'){
        catagory = "Child";
        ticket = 10;
        cout<<"How Old is the Child? "<<endl;
        cin>>age;
        if (age>=5 && age<=10){
            ticket -= 2;
        }
    }
    else if (selection =='b'){
        ticket = 15;
        catagory = "Adult";
    }
    else if (selection =='c'){
        ticket = 10;
        catagory = "Elderly";
    }
    else{
        cout<<"Invalid!"<<endl;
        ticket = 0;
    }
    cout.precision(3);
    tax = ticket*(TAX_NY/100);
    total = ticket + tax;

    cout<<"------------------------------Receipt Hello Movie------------------------------\n";
    cout<<"Ticket "<<catagory<<"\t$"<<ticket<<endl;
    cout<<"Tax "<<TAX_NY<<"\t$"<<tax<<endl;
    cout<<"\t\t___________"<<endl;
    cout<<"\nTotal Price\t$"<<total<<endl;
    
    //example 2
    cout<<"------------------------------Switch Statement------------------------------\n"<<endl;
    //bridge toll
    int vehicleClass;
    float toll;
    cout<<"---------Toll Price---------"<<endl;
    cout<<"1) Truck\t\t $35\n2) Bus\t\t\t $25.5\n3) Passenger Car\t $20.5\nSelect Vechile Class: "<<endl;
    cin>>vehicleClass;
    switch(vehicleClass)
    {
        case 1:
            cout<<"\nVehicle Class : Truck"<<endl;
            toll = 35;
            break;
        case 2:
            cout<<"\nVehicle Class : Bus"<<endl;
            toll = 25.5;
            break;
        case 3:
            cout<<"\nVehicle Class : Passenger Car"<<endl;
            toll = 20.5;
            break;
        default:
            cout<<"\nUnknown Vehicle Class!"<<endl;
            toll = 0;
        cout<<"Total Toll \t$"<<toll<<endl;
    }

    //example 3
    cout<<"------------------------------Switch Statement------------------------------\n"<<endl;
    char gender;
    cout<<"Type a character for gender, f(female), m(male) or o(other): ";
    cin>>gender;

    switch(gender)
    {
        case 'm':
        case 'M':
            cout<<"Gender: Male"<<endl;
        break;

        case 'f':
        case 'F':
            cout<<"Gender: Female"<<endl;
        break;

        case 'o':
        case 'O':
            cout<<"Gender: Other"<<endl;
        break;

        default:
            cout<<"Invalid!"<<endl;
    }

    return 0;
}

