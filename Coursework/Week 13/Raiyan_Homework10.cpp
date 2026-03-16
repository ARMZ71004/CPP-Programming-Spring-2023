/*
Atif Raiyan
Homework 10 - 2D array
May 11, 2023
*/
#include <iostream>
using namespace std;
const int SIZE = 3;
void randColorRange(int colorRange[SIZE][SIZE]){
    srand(time(0));
    for(int x = 0; x < SIZE; x++){  
        colorRange[0][x] = rand() % 256;   
    }
    for(int x = 0; x < SIZE; x++){  
        colorRange[1][x] = rand() % 256;   
    }
    for(int x = 0; x < SIZE; x++){  
        colorRange[2][x] = rand() % 256;   
    }
}

void printColorRange(int colorRange[SIZE][SIZE]){
    for(int x = 0; x < SIZE; x++){  
        cout<<colorRange[0][x]<<"\t";   
    }
    cout<<endl;
    for(int x = 0; x < SIZE; x++){  
        cout<<colorRange[1][x]<<"\t";   
    }
    cout<<endl;
    for(int x = 0; x < SIZE; x++){  
        cout<<colorRange[2][x]<<"\t";   
    }
    cout<<endl;
}

void sumRowCol(int colorRange[SIZE][SIZE]){
    cout<<"The Sum in column1: "<<colorRange[0][0]+colorRange[0][1]+colorRange[0][2]<<endl;
    cout<<"The Sum in column2: "<<colorRange[1][0]+colorRange[1][1]+colorRange[1][2]<<endl;
    cout<<"The Sum in column3: "<<colorRange[2][0]+colorRange[2][1]+colorRange[2][2]<<endl;
    cout<<"The Sum in row1: "<<colorRange[0][0]+colorRange[1][0]+colorRange[2][0]<<endl;
    cout<<"The Sum in row2: "<<colorRange[0][1]+colorRange[1][1]+colorRange[2][1]<<endl;
    cout<<"The Sum in row3: "<<colorRange[0][2]+colorRange[1][2]+colorRange[2][2]<<endl;
}

int main(){
    int colorRange[SIZE][SIZE];
    randColorRange(colorRange);
    printColorRange(colorRange);
    cout<<"----------------------------------------"<<endl;
    sumRowCol(colorRange);
    return 0;
}