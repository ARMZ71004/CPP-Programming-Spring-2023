/*Feb 1st Atif Raiyan*/

#include<iostream>
using namespace std;
int main(){
    cout<<"------Example 1------\n";
    char typeChar;
    cout<<"Enter a Character!:";
    cin>>typeChar;
    cout<<"Your Character is > "<<typeChar;
    
    cout<<"\n------Example 2------";
    string firstName;
    cout<<"\nType First name: "<<endl;
    cin>>firstName;
    cout<<"First Name is "<<firstName;
    
    cout<<"\n------Example 3------";
    //has to be first cin in lines for getline to work
    string msg;
    cout<<"\nEnter a line:\n";
    getline(cin,msg);
    cout<<"\nThe line was "<<msg;
    
    cout<<"\n------Example 4------";
    //concatination
    string all = typeChar + firstName;
    cout<<"\nConcatenated String is "<<all;
    
    cout<<"\n------Example 5------";
    //string index
    cout<<"\n3rd  character is "<<all[2];
    
    cout<<"\n------Example 6------";
    //integer multiplacation
    int height = 3, width = 5;
    int area = height*width;
    cout<<"Area is "<<area<<endl;

    cout<<"\n------Example 7------";
    //float
    float gpa, meter;
    //floats are rounded to the 6th number from the left
    gpa = 3.14;
    meter = 123456789;
    cout<<"\nGpa is "<<gpa;
    cout<<"\nmeter is "<<meter;

    cout<<"\n------Example 8------";
    const double EXP = 2.178;

    cout<<"\n------Example 9------";
    //calculate height
    const float GRAVITY = 9.8;
    float time, height1;
    cout<<"\nenter a time: ";
    cin>>time;
    height1 = 0.5*GRAVITY*time*time;
    cout<<"The height is = "<<height1<<endl;
    return 0;
}