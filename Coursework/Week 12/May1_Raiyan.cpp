/*
Atif Raiyan
May 1, 2023
*/
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
//Example 1
//collecting non-negative numbers
void fillArray(int a[], int size, int numberUsed){
    int next, index=0;
    cout<<"Enter up to "<<size<<" non-negative numbers; ";
    cin>>next;
    while((next>=0)&&(index<size)){
        a[index] = next;
        index++;
        cin>>next;
    }
    numberUsed = index;
    cout<<"Inside of the Function "<<numberUsed<<endl;
}
int search(const int a[], int numberUsed, int& target){
    int index = 0;
    bool found = false;
    while((!found)&&(index<numberUsed)){
        if(target == a[index]){
            found = true;
        }
        else{
            index++;
        }
    }
    if(found)
        return index;
    else
        return -1;
}

// example 2 bubble sort
void bubblesort(int arr[], int length){
    // bubble largest number towards the right
    for(int i = length-1; i>0; i--){
        for (int j=0; j<i; j++){
            if (arr[j]>arr[j+1]){
                //swap the numbers
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void classactivity(int caarray[5]){
    cout << "\nEnter 5 numbers individually: \n";
    for(int i = 0; i < 5; i++){
        cin >> caarray[i];
    }
}

int main(){
    cout<<"\n--------------Example 1: Search--------------\n";
    int arr[ARRAY_SIZE] = {0}, listSize, target;
    //calling fillarray()
    fillArray(arr,ARRAY_SIZE,listSize);
    /*check print number in array:
    for(int n = 0; n<ARRAY_SIZE;n++){
        cout<<"Entered Numbers: "<<arr[n]<<"\t"<<endl;
    }
    cout<<"Last index: "<<listSize<<endl;*/
    int result;
    cout<<"Enter a number to seach for: ";
    cin>>target;
    result = search(arr,listSize,target);
    if(result == -1)
        cout<<target<<" is not in the list!"<<endl;
    else
        cout<<target<<" is stored in index"<<endl;

    cout<<"\n----------Example 2: Bubble Sort----------\n";
    int a[]={3,10,5,-1,2,0};
    bubblesort(a, 6);
    //print result in array a[]
    cout<<"Bubble sort: ";
    for(int i = 0; i<6; i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\n--------------Class Activity--------------\n";
    int carray[5];
    classactivity(carray);
    for(int o = 4; o >= 0; o--){
        cout << carray[o] << " ";
    }
    return 0;
}