#include<iostream>
using namespace std;

/*
char mystery(int first, int second){
    if (first >= second){
        return 'W';
    }
    else{
        return 'H';
    }
}
 
int main()
{
       char m = mystery(-3, 1);
       cout<<"mystery returns = "<<m<<endl;
}

Example 1 should return the character "H"
Thus the full line should output mystery returns = H */

/*
int main(){
int sum=0, count=0;
    for (int n = -10; n< 10; n+=3){
        if (n%4 ==0){
            count++;
            continue;
        }
        sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;
    return 0;
}

Example 2 should return 
The sum is: -11
The count is: 3 
*/

/*
int num1 = 23, num2 = 6, tensCount = 0, loopCount = 0;      |num1 = 23  num2 = 6
                                                            |
  while (num1 > 5 and num2<30){                             |Activates if num1 is greater than 5 and num2 is less than 30
                                                            |
   if(num1%2 or num2>10){                                   |
                                                            |
      tensCount ++; }                                       |tenscount = tenscount + 1
                                                            |
    num1 -= 5;                                              |num1 = num1 - 5
                                                            |
   num2 += 5;                                               |num 2 = num2 +5 when true
                                                            |
 cout<<"num1 = "<<num1<<"num2 = "<<num2<<endl;              |num1 = 18, 13, 8, 3  num2 = 11, 16, 21, 26
                                                            |    
                                                            | 
loopCount ++; }                                             |loopcount = loopcount + 1 when true
                                                            | 
cout<<"ten counter = "<<tensCount<<endl;                    |ten counter = 3
                                                            | 
cout<<"loop counter = "<<loopCount<<endl;                   |loop counter = 4
*/
