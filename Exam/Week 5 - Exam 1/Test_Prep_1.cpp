#include<iostream>
#include<string>
using namespace std;

int main(){
    //1
    //Write a single c+= line that will print the first letter of each word of the string name
    string name = "Peter Smith";
    /*Code*/
    cout<<name[0]<<'\t'<<name[6]<<endl;
    //2
    //Write a c++ program that with request a user to enter a character from the keyboard and print a message "The Character typed is:"
    /*Code*/

    //3
    //Write a c++ program that will ask the user to entertwo colors, then the program will concatenate both colors and save length of word
    string shipping = "shipping fee is Free per order";
    /*Code*/
    shipping = shipping.replace(16,4, "$5.99"); 
    cout<<shipping<<endl;
    //4
    //Write a single c++ line that will subtract the word community from the string college
    string msg = "Queensborough Community College";
    /*Code*/
    string extMSG = msg.substr(14,9);
    cout<<extMSG;
    //5
    //Write a single c++ line that will replace the word free with $5.99 in string shipping

    /*Code*/
    //6
    //Declare gravity as constant, using that calculate height of falling object with formula height = .5*gravity*time*time.
    //print with a decimal of 1
    
    /*Code*/
    const float gravity = 9.8;
    //7
    //What is the final value of f

    /*Code*/
    //8
    //Create a random value from 0 to 20 and check if the rabdin us greater than or equal to 10
    /*Code*/
    srand(time(0));
    int i = rand()%21;
    cout<<i;
    int check = i >= 10;
    cout<<"\t"<<check<<endl;
    //9
    //Write a c++ statement that will validate that i is even and not a muliple of 3

    /*Code*/
    return 0;
}

