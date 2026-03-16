/*
Atif Raiyan
April 26, 2023
*/
#include<iostream>
#include<iterator>
using namespace std;
//example 9
void fillUp(int size){
    int a[size];
    int max = 0;
    for(int i=0;i<size;i++){
        cout<<"Enter a number: ";
        cin>>a[i];
        if(a[i]>max){
        max = a[i];
        }
    }
    cout<<"The maximum number = "<<max<<endl;
}

//example 10
int arraySize(int num[]){
    return sizeof(num);
}

int main(){
    cout<<"\n---------- Example 10 ----------"<<endl;
    int n[]={3,-4,2,0,5,2,10};
    int sizes = arraySize(n);
    cout<<"The array size = "<<sizes<<endl;
    
    cout<<"\n---------- Example 9 ----------"<<endl;
    int s;
    cout<<"Enter a size: ";
    cin>>s;
    fillUp(s);

    cout<<"\n---------- Example 4 ----------"<<endl;
    int age_children[3] = {12,8,5};
    //pointer initialized with the address of variable sum
    cout<<"Memory address for age_children array: "<<age_children<<endl;
    int* ptr1 = &age_children[0];
    int* ptr2 = &age_children[1];
    int* ptr3 = &age_children[2];
    cout<<"Pointer 1 = "<<ptr1<<endl;
    cout<<"Pointer 2 = "<<ptr2<<endl;
    cout<<"Pointer 3 = "<<ptr3<<endl;

    //use dereference operator to print the value address ptr is holding
    cout<<"Dereference to Pointer 1 = "<<*ptr1<<endl;
    cout<<"Dereference to Pointer 2 = "<<*ptr2<<endl;
    cout<<"Dereference to Pointer 3 = "<<*ptr3<<endl;

    cout<<"\n---------- Example 5 ----------"<<endl;
    int score[5], max = 0;
    cout<<"Enter 5 scores ~ \n";
    for(int i = 0; i<s; i++){
        cin>>score[i];
        if(score[i]>max){
            max = score[i];
        }
    }
    cout<<"The highest score is: "<<max<<endl;
    for(int i = 0; i<s; i++){
        cout<<score[i]<<" off by "<<(max-score[i])<<endl;
    }

    cout<<"\n---------- Example 6 ----------"<<endl;
    int array_num[5]= {-10,5,30,10,23};
    for(int n = 0; n<s; n++){
        cout<<"n"<<n<<" = "<<array_num[n]<<endl;
    }
    char array_char[4]= {'%'};
    for(int c = 0; c<s; c++){
        cout<<"n"<<n<<" = "<<array_char[c]<<endl;
    }

    cout<<"\n---------- Example 7 ----------"<<endl;
    int array_len,min;
    cout<<"Enter the length of the array: ";
    cin>>array_len;
    int num[array_len];
    for(int z = 0; z<s; z++){
        cout<<"Enter a number: ";
        cin>>num[z];
        if(z==0){
            min = num[0];
        }
        if(num[z]<min){
            min = num[z];
        }
    }
    cout<<"\n---------- Example 8 ----------"<<endl;
    cout<<"array_num had: "<<size(array_num)<<" elements "<<endl;
    cout<<"num has: "<<sizeof(num)<<" elements "<<endl;
    return 0;
} 
                                                                                    