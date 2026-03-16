/* 
Atif Raiyan
Homework 6: Loops 
March 26, 2023 
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"----------Question 1----------"<<endl;
    int x = 0;
   while(x<=9){
    cout<<"Enter a value that is greater than or equal to 10: ";
    cin>>x;
    if (x>=10){
        cout<<x<<" is valid"<<endl;
        break;
    }
   }
   cout<<"----------Question 2----------"<<endl;
   int z;
   do{
        cout<<"Enter a value that is less than -20: ";
        cin>>z;
        if (z<=-20){
            cout<<z<<" is valid"<<endl;
             break;
    }
   }
    while(z >= -20);
   cout<<"----------Question 3----------"<<endl;
   for(int v = 10; v>=1; --v){
        cout<<v<<endl;
        if(v==1){
            cout<<"Happy New Year!"<<endl;
        }
    }
   cout<<"----------Question 4----------"<<endl;
   srand(time(0));
    int max_number, min_number;
    cout<<"Enter a min value: ";
    cin>>min_number;
    cout<<"Enter a max value: ";
    cin>>max_number;
     for(min_number; min_number<=max_number; ++min_number){
        cout<<min_number<<"  ";}
    cout<<"\n----------Question 5----------"<<endl;
    const int DIMENSION = 11;
    for (int r = 0; r<DIMENSION; r++){
        for (int c = 0; c<DIMENSION; c++){
        if(c==3 &&  r>=2 || c == 4 &&  r>=2 || r<=4 && c<=6 &&  r>=3 && c>=5 ){
            cout<<"  #";
        }
        else{
            cout<<"  .";
        }
        }
        cout<<endl;
    }
    return 0;
}