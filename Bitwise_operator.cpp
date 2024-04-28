//Bitwise operator

#include<iostream>
using namespace std;
int main(){

    int a,b,c,d,e;

    cout<<"Enter two numbers = ";
    cin>>a>>b;

    c=a&b;
    d=a|b;
    e=a^b;
   cout<<"Bitwise (AND)& = "<<c<<endl;
   cout<<"Bitwise (OR)| = "<<d<<endl;
   cout<<"Bitwise XOR(^) = "<<e<<endl;

    return 0;
}
