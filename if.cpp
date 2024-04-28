#include<iostream>
using namespace std;
int main() {
 int a;
 cout<<"Enter an intiger number = ";
 cin>>a;
 if (a<0){
    cout<<"negative";
 }
 else if (a>0){
    cout<<"positive";
 }
 else if (a==0){
    cout<<"zero";
 }
 return 0;
}
