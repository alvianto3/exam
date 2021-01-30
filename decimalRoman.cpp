#include <iostream>
using namespace std;

//program convert number
//from decimal to roman

int main(){
    int number1;
    
    //input number
    cout<<"Input Value: ";
    cin>>number1;

    //convert real number
    //maximum char code M roman
    while(number1!=0){
        if(number1 >= 1000){
            cout<<"M";
            number1 -= 1000;
        }
        else if(number1 == 999){
            cout<<"IM";
            number1 -= 999;
        }
        else if(number1 >= 500){
            cout<<"D";
            number1 -= 500;
        }
        else if(number1 == 499){
            cout<<"ID";
            number1 -= 499;
        }
        else if(number1 >= 100){
            cout<<"C";
            number1 -= 100;
        }
        else if(number1 == 99){
            cout<<"IC";
            number1 -= 99;
        }
        else if(number1 >= 50){
            cout<<"L";
            number1 -= 50;
        }
        else if(number1 == 49){
            cout<<"IC";
            number1 -= 49;
        }
        else if(number1 >= 10){
            cout<<"X";
            number1 -= 10;
        }
        else if(number1 == 9){
            cout<<"IX";
            number1 -= 9;
        }
        else if(number1 >= 5){
            cout<<"V";
            number1 -= 5;
        }
        else if(number1 == 4){
            cout<<"IV";
            number1 -= 4;
        }
        else {
            while(number1>=1){
                cout<<"I";
                number1 -= 1;
            }
        }
    }
    return 0;
}