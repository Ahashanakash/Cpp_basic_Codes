#include<iostream>
using namespace std;
int main() {
int a;
cout<<"enter an intiger number = ";
cin>>a;
if (a>0){
    cout<<"positive";
}
 else if (a<0){  //else if means if 1st condition is true, it will not go below
    cout<<"negetive";
}
else if(a==0){
    cout<<"zero";
}
  return 0;
}
