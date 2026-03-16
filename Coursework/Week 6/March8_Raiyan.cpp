/* 
For Loop
Atif Raiyan
March 8, 2023 
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"----------------------------Example 1----------------------------"<<endl;
    for(int action = 0; action<5; action++){
        cout<<"Hello"<<endl;
    }
    cout<<"----------------------------Example 2----------------------------"<<endl;
    int initial = 1;
    for(initial; initial<=10; ++initial){
        cout<<"Count ~ "<<initial<<endl;
    }
    cout<<"----------------------------Example 3----------------------------"<<endl;
    for(int count = 0; count<=20; count +=3){
        cout<<"Counting by 3 ~ "<<count<<endl;
    }
    cout<<"----------------------------Example 4----------------------------"<<endl;
    for(int y = 0; y<=30; y+=4){
        cout<<"Counting by 4 ~ "<<y<<endl;
        if(y%5==0 && y != 0){
            cout<<"Hello"<<endl;
        }
    }
    cout<<"----------------------------Example 5----------------------------"<<endl;
    int m =0; 
    for(int x=-10; x<=10; x += 3){
        cout<<"x = "<<x<<endl;
        if(x%5==0){
            m++;
        }
    }
    cout<<"x is multiple of 5 = "<<m<<endl;   
    cout<<"----------------------------Example 6----------------------------"<<endl;
    for(int z=10; z>=-5; z--){
        cout<<"z = "<<z<<endl;
    }
    cout<<"----------------------------Activity----------------------------"<<endl;
    /*
    Exercise 1) create loop that decrements 21 to -21 with a decrement of 5. Count number of times that the loop counter is a multiple of 2
    Exercise 2) create a program that will ask the user to input the start (initial value of the counter), after it, create a loop that 
    starts with the number entered by the user and count up to 30.
    Group Mate: Jameer Hartley
    */
    //exercise 1
    int xyz = 0, zx;
    for(zx=21; zx>=-21;zx-=5){
        cout<<zx<<'\n';
        if(zx%2==0){
            xyz++;
        }
    }
    cout<<"There are "<<xyz<<" Multiples of 2"<<endl;
    //exercise 2
    int num2;
    cout<<"Enter a number under 30: "<<endl;
    cin>>num2;
    for(num2 = num2; num2<=30; num2++){
        cout<<"num2 = "<<num2<<endl;
    }
    return 0;
}