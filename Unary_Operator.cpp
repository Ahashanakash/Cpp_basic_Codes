#include<iostream>
using namespace std;

int main() {
 int x= 4;
 int y= ++x; //prefix increment
cout<<x<<endl;
cout<<y<<endl;

 int a= 6;
 int b= a++;  // postfix increment
cout<<a<<endl;
cout<<b<<endl;

 int c= 8;
 int d= --c;  //prefix decrement
cout<<c<<endl;
cout<<d<<endl;


 int m= 11;
 int o= m--;  // postfix decrement
cout<<m<<endl;
cout<<o<<endl;

 return 0;
}
