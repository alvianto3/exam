#include <iostream>
using namespace std;

int main(){
    char value[10];
    int saveValue;

    //input roman value
    cout<<"input roman value :";
    cin>>value;

    //convert value
    for(int i=0; i<=10; i++){
        if(value[i]=='X'){
            saveValue += 10;
        }
        else if(value[i]=='V'){
            saveValue += 5;
        }
        else if(value[i]=='I' && value[i+1]=='X'){
            saveValue += 9;
            break;
        }
        else if(value[i]=='I' && value[i+1]=='V'){
            saveValue += 4;
            break;
        }
        else if(value[i]=='I'){
            saveValue += 1;
        }
    }
    
    //show values convert
    cout<<saveValue<<endl;
    
}