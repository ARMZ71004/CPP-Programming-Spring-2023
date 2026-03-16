/*
Atif Raiyan
April 3, 2023
*/
#include<iostream>
using namespace std;

int taxed(double price){
    const float RATE = 8.16;
    double done = price * RATE;
    return done;
}


int main(){
//Question 1
int n = 0, sum = 0;
for (int r = -17; r<37; r++){
    n++;
    cout<<"n"<<n<<" = "<<r<<endl;
    if(r%5 == 0){
        sum+=r;
    }
}
cout<<"The total sum is = "<<sum;


//Question 2
double pricee;
cout<<"\n\n\nEnter the Price: ";
cin>>pricee;
double tax = 0.01 * taxed(pricee);
cout.setf(ios::fixed);
cout.precision(2);
cout<<"\n--------- Receipt ---------\nPrice\t$"<<pricee<<"\nTax\t$"<<tax<<"\ntotal\t$"<<pricee + tax<<endl;
return 0;
}
