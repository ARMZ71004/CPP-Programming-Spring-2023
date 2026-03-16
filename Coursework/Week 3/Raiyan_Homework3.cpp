/* 
Homework 3: Video Based
Submitted date: Feb 19, 2023
Atif Raiyan
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a > 100) {
    cout << "Your number is greater than 100!"<<endl;
    }  else if (a > 50) {
        cout << "Greater than 50!" << endl;
    }  else if (a > 10) {
        cout << "Greater than 10!" << endl;
    }  else if (a == 0) {
        cout << "Equal to 0!" << endl;
    }  else if (a < 10) {
        cout << "Less than 10!" << endl;
    }

    return 0;
}
