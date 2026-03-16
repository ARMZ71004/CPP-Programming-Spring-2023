#include<iostream>

using namespace std;

void randPick(int colorSize, string colors[], string pickColors[]){
    srand(time(0));
    for(int i = 0; i<colorSize; i++){
        int x = rand()%colorSize;
        pickColors[i] = colors[x];
    }
}

void printColor(int colorSize, string pickColors[]){
    for(int i = 0; i<colorSize; i++){
        cout<<pickColors[i]<<" ";
    }
    cout<<endl;
}

int main(){
    char choice = 'a'; // Initialize choice with a value other than 'a' or 'A'
    while(choice == 'a' || choice == 'A'){
        int colorSize = 4; 
        string colors[colorSize] ={"orange","blue","pink","magenta"}; 
        string pickColors[colorSize]; 

        randPick(colorSize, colors, pickColors);
        printColor(colorSize, pickColors);
        
        cout<<"\nDo you wish to continue? ";
        cin>>choice;
    }
    return 0;
}
