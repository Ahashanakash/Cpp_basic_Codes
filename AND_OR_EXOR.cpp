#include<iostream>
using namespace std;

int main (){

    int a=0,b=0;
    cout<<"Enter Two numbers :"<<endl;
    cout<<"A = ";
    cin>>a;

    cout<<"B = ";
    cin>>b;

    cout<<"A & B = "<<(a&b)<<endl;    //binary multipication

    cout<<"A | B = "<<(a|b)<<endl;    //binary summation

    cout<<"A ^ B = "<<(a^b)<<endl;    //binary substraction
    return 0;
}