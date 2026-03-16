/*
Atif Raiyan
Mar 15 - Nested Statements
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n---------- Example 1) Break Statement ----------"<<endl;
    int sum = 0, num;
    for(int count = 0; count<10; count++){
        cout<<"Enter a number to add, or 0 to exit: ";
        cin>>num;
        // exit loop if user enters 0
        if (num==0){
            break;
        }
        // add num value to the current sum value
        sum += num;
    }
    // prompt the result after the loop
    cout<<"The sum of all numbers entered is: "<<sum<<endl;
    cout<<"\n---------- Example 2) Break Statement ----------"<<endl;
    int number, summation = 0, count = 0;
    while (++count <=4)
    {
        cout<<"Enter four negative numbers: ";
        cin>>number;
        // exit the program if number is positive or zero
        if(number>=0){
            cout<<"ERROR: positive number of zero was entered!"<<endl;
            cout<<"Program end with count = "<<count<<endl;
            break;
        }
        // add the number to the current calue in summation
        summation += number;
    }
    // prompt the result after the loop
    cout<<summation<<" is the sum of the entered numbers."<<endl;
    cout<<"\n---------- Example 3) Break Statement in an Infinite Loop ----------"<<endl;
    int balance=1000, w=0;
    bool check; // to check if the user has enough balance to withdraw
    char cont; // to confirm if the user wants to continue with the transaction
    while (true)
    {
        cout<<"How much do you want to withdraw? ";
        cin>>w;
        // check if the withdrawn amount is more than the balance
        check = w>balance;
        if(check==true){
            cout<<"Can't withdraw $"<<w<<" because your balance is $"<<balance<<endl;
        }
        else{
            balance -=w;
            cout<<"Withdrawn $"<<w<<". Your new balance is $"<<balance<<endl;
        }
        cout<<"Do you want to continue? (Y,N): ";
        cin>>cont;
        if (cont=='N' || cont=='n'){
            break;
        }
    }
    // prompt a message after the while loop
    cout<<"\nThank you for your visit! Have a nice day!"<<endl;
    cout<<"\n---------- Example 4) Continue Statement ----------"<<endl;
    for (int count=0; count<10; count++)
    {
        if(count%4==0){
            continue;
        }
        cout<<"Count = "<<count<<endl;
    }
    /*
    Name: Atif Raiyan
    Partner: Muhammad Nadeem

    Predicted Output of A)
    Hello 20
    The sum is: 20
    The count is: 1
    ~~~~~~~~~~~~~~~~~~~~~~~~
    Reason being the second time the loop is run it breaks thus only allowing one Hello

    Predicted Output of B)
    i = 1
    i = 3
    i = 4
    Add = 8
    ~~~~~~~~~~~~~~~~~~~~~~~
    Reason being other than two the numbers under 5 is presented then added together*/
    return 0;
}