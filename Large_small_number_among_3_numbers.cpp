#include<iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"enter 3 numbers ";
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1>num3){
        cout<<"large number is "<<num1;
    }
    else if (num2>num1 && num2>num3){
        cout<<"large number is "<<num2;
    }
    else if (num3>num2 && num3>num1){
        cout<<"large number is "<<num3;
    }
    return 0;
}
