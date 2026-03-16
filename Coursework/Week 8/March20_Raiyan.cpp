/*
Atif Raiyan
Match 20, 2023 
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n-----------------------------Example 1-----------------------------\n";
    int i = 0;
    while(i<3){
        int k = 0;
        while(k<5){
            cout<<"\tk = "<<k<<endl;
            k++;
        }
        cout<<"i = "<<i<<endl;
        i++;
    }
    cout<<"\n-----------------------------Example 2-----------------------------\n";
    const int DIMENSION = 9;
    for (int r = 0; r<DIMENSION; r++){
        for (int c = 0; c<DIMENSION; c++){
        if(c==4 ||  r==4){
            cout<<"  X";
        }
        else{
            cout<<"  -";
        }
        }
        cout<<endl;
    }
    cout<<"\n-----------------------------Class Activity-----------------------------\n";
    const int DIM = 12;
    for (int z = 0; z<DIM; z++){
        for (int x = 0; x<DIM; x++){
        if(z<=2 && z>=1 && x<=9 && x>=2){
            cout<<"  $";
        }
        else if(z>=3 && x<=6 && x>=5){
            cout<<"  $";
        }
        else{
            cout<<"  -";
        }
        }
        cout<<endl;
    }
    return 0;
}