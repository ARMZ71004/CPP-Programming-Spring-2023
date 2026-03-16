/*
Atif Raiyan
May 8, 2023
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    cout<<"\n ---------------Class Activity-------------\n";
    fstream ca;
    string lineca;
    
    ca.open("data.txt");
    ca<<"This is my output file - Atif.Raiyan\n";

    ca.close();

    //part 2
    ca.open("data.txt");
    while(getline(ca, lineca)){
        cout<<lineca<<endl;
    }
    ca.close();

    ca.open("data.txt", ios::app);
    ca<<"Additional text.\n"<<endl;
    
    ca.close();

    ca.open("data.txt");
    while(getline(ca, lineca)){
        cout<<lineca<<endl;
    }
    ca.close();

    cout<<"\n ---------------Example 4-------------\n";
    ifstream fin;
    string line;
    
    fin.open("SampleInput.txt");
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();

    cout<<"\n ---------------Example 5-------------\n";
    ofstream fout;
    fout.open("SampleOutput.txt");
    for(int p; p<5; p++){
        fout<<"Line "<<p<<" Hello World! "<<endl;
    }
    fout.close();
    fout.open("SampleOutput.txt", ios::app);
    for(int o; o<5; o++){
        fout<<"Line "<<o<<" appended text. "<<endl;
    }
    fout.close();


    cout<<"\n ---------------Example 1-------------\n";
    cout<<"Enter a Number: ";
    int num;
    cin>>num;
    if(cin.fail()){
        cout<<cin.fail()<<"\tError: input type mismatch!"<<endl;
    }
    else{
        cout<<cin.fail()<<"\tEntered number "<<num<<endl;
    }
    cin.clear();
    cin.ignore(10000,'\n');
    
    int i;
    cout<<"Enter a number: ";
    cin>>i;
    if(cin.fail()){
        cout<<"\tError: input type mismatch!"<<endl;
    }
    else{
        cout<<"\tEntered number "<<i<<endl;
    }
    cin.clear();
    cin.ignore(10000,'\n');
    
    cout<<"\n ---------------Example 2-------------\n";
    int n;
    bool isNotVaild = cin.fail();
    do{
        cout<<"Enter an interger: ";
        cin>>n;
        isNotVaild = cin.fail();
        cin.clear();
        cin.ignore(10000,'\n');
    }while (isNotVaild);
    cout<<"Entered number "<<n<<endl;

    
    return 0;
}