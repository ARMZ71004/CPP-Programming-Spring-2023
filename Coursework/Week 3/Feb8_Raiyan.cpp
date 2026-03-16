/*
String Methods
Atif Raiyan
Feb 6, 2023
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
//Example 1
    string word;
    int wordL;
    cout<<"---------- Example 1: length() ----------\n"<<endl;
    cout<<"Enter a word: "<<endl;
    cin>>word;
    wordL = word.length();
    cout<<"The word: "<<word<<" has "<<wordL<<" characters."<<endl;

//Example 2
    cout<<"\n---------- Example 2: substr() ----------\n"<<endl;
    // extract 3 characters from the second character
    string msg = "Queensborough";
    string extMSG = msg.substr(1,3);
    cout<<"The extracted characters are: "<<extMSG<<endl;

//Example 3
    cout<<"\n---------- Example 3: inster() ----------\n"<<endl;
    string insMSG = msg.insert(4, " -NY- "); //insert() method is also an suto-update method
    cout<<"Inserted string = "<<insMSG<<endl<<"... msg string = "<<msg<<endl;

//Example 4
    cout<<"\n---------- Example 4: append() ----------\n"<<endl;
    string appendMSG = msg.append(" ==> BAYSIDE"); //append() method auto-update
    cout<<"Append string = "<<appendMSG<<endl<<"... string msg = "<<msg<<endl<<"... insMSG = "<<insMSG<<endl;

//Example 5
    cout<<"\n---------- Example 5: replace() ----------\n"<<endl;
    string greeting = "Good morning!";
    // replace the word morning with night
    string rGreeting = greeting.replace(5,7,"night"); //auto-update --> direct method
    cout<<"Replace string = "<<rGreeting<<endl;
    cout<<"Original greeting string = "<<greeting<<endl;

//Example 6
    cout<<"\n---------- Example 6: erase() ----------\n"<<endl;
    string eGreeting = greeting.erase(7,3); // erase() auto-update --> direct method
    cout<<"Erase string = "<<eGreeting<<endl;
    cout<<"greeting string = "<<greeting<<endl;

//Example 7
    cout<<"\n---------- Example 7: find() ----------\n"<<endl;
    int findGreeting = greeting.find("o");// find() is an accessor method = propertry
    cout<<"find string = "<<findGreeting<<endl;
    cout<<"greeting string = "<<greeting<<endl;

//Example 8
    cout<<"\n---------- Example 8: Numerical Variables ----------\n"<<endl;
    const double PI = 3.1419, BASE = 0.35;//Method 1 to initialize value
    const char MONEY('$');//Method 2 to initialize value
    double rad, areaCircle, price;
    //promt message requesting user to type radius of the cake
    cout<<"Enter the radius, in inches, of a cake: ";
    //save radius in variable rad
    cin>>rad;
    //calculate the area of the cake and the total price
    areaCircle = PI*rad*rad;
    price = areaCircle*BASE;
    //prompt result
    cout<<"A round cake with radius: "<<rad<<" costs "<<MONEY<<price<<endl;

//Example 9
    cout<<"\n---------- Example 9: Assignment Operators ----------\n"<<endl;
    int num = 10;
    //
    cout<<"Original value = \t\t"<<num<<endl;
    //add or increase the original value with 11
    num += 11; // num = num + 11
    cout<<"Value incremented by 11 = \t"<<num<<endl;
    // subtract 8 to num
    num -= 8; // num = num - 8
    cout<<"Value decreased by 8 = \t\t"<<num<<endl;
    // double num
    num *= 2;
    cout<<"Value double = \t\t\t"<<num<<endl;
    // divide num by 3
    num /= 3;
    cout<<"Value divided by 3 = \t\t"<<num<<endl;
    // return the remainder when num is divided by 2
    num %=2;
    cout<<"Remainder of num divided by 2 = "<<num<<endl;

//Example 10
    cout<<"\n---------- Example 10: Comparison Operators ----------\n"<<endl;
    int x(5), y(2); // --> the same as --> integer x=5, y=2
    bool equalTo, greaterThan, lessThan, notEqual;
    // comparison operators
    equalTo = x==y; 
    lessThan = x<y;
    notEqual = x != y;
    // prompt result
    cout<<"Is x equal to y? \t\t"<<equalTo<<endl;
    cout<<"Is x greater then y? \t\t"<<greaterThan<<endl;
    cout<<"Is x less than y? \t\t"<<lessThan<<endl;
    cout<<"Is x not equal to y? \t\t"<<notEqual<<endl;

//Example 11
    cout<<"\n---------- Example 11: Logical Operators ----------\n"<<endl;
    cout<<"Is x greater than 4 but less than 10? "<<(x>4 && x<10)<<endl;
    cout<<"Is x greater than -3 or x is not equal to zero? "<<(x>-3 || x!=0)<<endl;
    return 0;
}