#include <iostream>
using namespace std;

//the program looks for
//value of the divisor

int main(){
    int number1, number2, pos1, pos2, pos3, bigValue;
    int arrNumber1[100], arrNumber2[100], arrNumber3[100];

    //input number
    cout<<"Input first number: ";
    cin>>number1;
    cout<<"Input second number: ";
    cin>>number2;

    //find first number
    for(int i = 1; i <= number1; i++){
        if(number1 % i == 0 ){
            arrNumber1[pos1] = i;
            
            //pos maximum first value
            pos1++;
        }
    }

    //find second number
    for(int i = 1; i <= number2; i++){
        if(number2 % i == 0 ){
            arrNumber2[pos2] = i;

            //pos maximum second value
            pos2++;
        }
    }

    //find same value and save value
    for(int a = 0; a < pos1; a++){
        for(int b = 0; b < pos2; b++){
            if(arrNumber1[a] == arrNumber2[b]){
                arrNumber3[pos3] = arrNumber2[b];
                pos3++;
            }
            //break if second value higher from first value
            else if(arrNumber1[a] < arrNumber2[b]){
                break;
            }
        }
    }

    //view value same and find Big number
    for(int i = 0; i < pos3; i++){
        cout<<"divisor value same -"<<i+1<<" : "<<arrNumber3[i]<<endl;
        bigValue = arrNumber3[i];
    }
    cout<<"big divisor value: "<<bigValue<<endl;

}