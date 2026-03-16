/*
Class activity 4: Operators in numerical and random variables
by  Atif Raiyan
Feb 21, 2023
*/
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
    srand(time(0));
    cout<<"\n---------- Example 1) Psedo-Random Numbers ----------"<<endl;
    cout<<"Random Number 1 = "<<rand()<<endl;
    cout<<"Random Number 2 = "<<rand()<<endl;
    cout<<"Random Number 3 = "<<rand()<<endl;


    cout<<"\n---------- Example 2) Psedo-Random Numbers Between 0 and 20 (inclusive) ----------"<<endl;
    cout<<"Random Number 1 = "<<rand()%21<<endl;
    cout<<"Random Number 2 = "<<rand()%21<<endl;
    cout<<"Random Number 3 = "<<rand()%21<<endl;


    cout<<"\n---------- Example 3) Psedo-Random Numbers Between 50 and 100 (inclusive) ----------"<<endl;
    cout<<"Random Number 1 = "<<rand()%51+50<<endl;
    cout<<"Random Number 2 = "<<rand()%51+50<<endl;
    cout<<"Random Number 3 = "<<rand()%51+50<<endl;


    cout<<"\n---------- Example 4) If Statements ----------"<<endl;
    int number1, number2;
    cout<<"Enter number 1: ";
    cin>>number1;
    cout<<"Enter number 2: ";
    cin>>number2;
    // compare number1 and number 2
    if(number1>number2)
        cout<<number1<<" is GREATER than "<<number2<<endl;
    else if (number1<number2)
        cout<<number1<<" is LESS than "<<number2<<endl;
    else
        cout<<number1<<" is EQUAL to "<<number2<<endl;

        
    cout<<"\n---------- CLASS ACTIVITY 4 ----------\n"<<endl;
    // Step 1) Declare variables: randNum, max_number, min_number as integer
    int max_number, min_number;
    // Step 2) Prompt a message asking the user to enter a number between 100 and 1000
    cout<<"Enter a number between 100 and 1000: ";
    // Step 3) Collect the number from the keyword and store the value in variable max_number
    cin>>max_number;
    // Step 4) Prompt a message asking the user to enter a number less than the previous number, max_number
    cout<<"Enter a number LESS than the previous: ";
    // Step 5) Collect the number from the keyword and store the value in variable min_number
    cin>>min_number;
    // Step 6) Randomly generate a number between the min_number and the max_number. Save this random number in randNum
    int randNum = rand()%max_number+min_number;
    // Step 7) Prompt the random number
    cout<<"Generated Random Number: "<<randNum<<endl;
    // Step 8) Check if the random number is greater than or equal to 20 AND less than 100. Prompt result
    if(randNum>=20 && randNum<100)
        cout<<"the random number is greater than or equal to 20 AND less than 100."<<endl;
    else
        cout<<"the random number NOT is greater than or equal to 20 AND less than 100."<<endl;
    return 0;
}

