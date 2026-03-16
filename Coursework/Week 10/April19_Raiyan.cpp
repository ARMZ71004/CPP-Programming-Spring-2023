/*
Atif Raiyan
April 19, 2023
*/
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>
using namespace std;
//example 5
int roundNum(double number){
    return floor(number+0.5);
}

//example 7 --> lottery
//function to generate a number between 0 and 99
int num(){
    int n = ceil(rand()%100);
    return n;
}

//function to print five random numbers 0<->99
void lottery(){
    srand(time(0));
    cout<<"Lucky numbers: \t";
    cout<<num()<<"\t"<<num()<<"\t"<<num()<<"\t"<<num()<<"\t"<<num()<<endl;
}

//example 8 - recursive function
void cheers(int n){
    if(n==1){
        cout<<"STOP!"<<endl;
    }
    else{
        cout<<"Keep ";
        cheers(n-1);
}
}

//example 9
int sumAll(int num){
    if(num!=0){
        return (num + sumAll(num-1));
    }
    else{
        return num;
    }
}
/*
call function  |    sumAll(int num)     |   if(num!=0)             |   else
1              |    sumAll(5)           |   True --> 5 + sumAll(4) |   Will not run
2              |    sumAll(4)           |   True --> 4 + sumAll(3) |   Will not run
3              |    sumAll(3)           |   True --> 3 + sumAll(2) |   Will not run
4              |    sumAll(2)           |   True --> 2 + sumAll(1) |   Will not run
5              |    sumAll(1)           |   True --> 1 + sumAll(0) |   Will not run
6              |    sumAll(0)           |   false                  |   return 0

total --> 5 + (4+(3+(2+(1+(0))))) = 15
*/


int main(){
    cout<<"\n------------------Example 8------------------\n";
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cheers(number);

    cout<<"\n------------------Example 9------------------\n";
    int total = sumAll(number);
    cout<<"The sum of all the numbers of "<<number<<" summation is "<<total<<endl;

    cout<<"\n------------------Example 7------------------\n";
    lottery();

    cout<<"\n------------------Example 5------------------\n";
    double doubleValue;
    char ans;
    do{
        cout<<"Enter a double value: ";
        cin>>doubleValue;
        cout<<"Rounded Number is "<<roundNum(doubleValue)<<endl;
        cout<<"Another run? (y/n): ";
        cin>>ans;
    }while(ans=='y'||ans=='Y');
    return 0;
}