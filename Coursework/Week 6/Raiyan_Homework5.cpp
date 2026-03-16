/* Homework 5
Atif Raiyan
Match 12, 2023 */
#include<iostream>
using namespace std;

int main(){
    int hello = 1;
    while(hello <= 5){
        cout<< hello << endl;
        hello++;
    }
    int index;
    cout<<"\nEnter a number under 10"<<endl;
    cin>>index;
    do{
        cout<<index<<endl;
        index++;
    }
    while(index <= 10);
    return 0;
}