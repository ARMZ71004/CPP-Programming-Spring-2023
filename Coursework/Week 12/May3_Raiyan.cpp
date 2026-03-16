/*
Atif Raiyan
May 3, 2023
*/
#include <iostream>
using namespace std;
const int SIZE_ROW = 10, SIZE_COL = 5;
//Example 3
//calculate the product of the numbers in the row align with the column
void calculateTable(int t[][SIZE_COL]){
    for(int row = 1; row<SIZE_ROW; row++){
        for(int col = 1; col<SIZE_COL; col++){
            t[row][col] = row*col;
        }
    }
}

//print Function
void printTable(int t[][SIZE_COL]){
    for(int row = 1; row<SIZE_ROW; row++){
        for(int col = 1; col<SIZE_COL; col++){
            cout<<t[row][col]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"\n--------------Example 3----------------\n"<<endl;
    int product[SIZE_ROW][SIZE_COL] ={}; //empty 2-D array
    calculateTable(product);
    printTable(product);

    cout<<"\n--------------Example 1----------------\n"<<endl;
    int array[3][5]{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    cout<<"3rd value at the 1st row = "<<array[0][2]<<endl;
    //2-D array with initializer list can emit only leftmost length(rows)
    int num[][3]{
        {-9, -8},
        {-7, -7, -5},
        {-3},
        {-2, -1}
    };
    //you can't declare a 2-d array as int array[][]

    cout<<"\n--------------Example 2----------------\n"<<endl;
        for(int row = 0; row<3; row++){
            for(int col = 0; col<col; col++){
                cout<<array[row][col]<<endl;
        }
        cout<<endl;
    }
    return 0;
}