#include<bits/stdc++.h>
using namespace std;

int add(int *p1,int *p2){
    int sum=*p1+*p2;
    return sum;
}

int main (){
    int a=10,b=10;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int sum=add(p1,p2);
    cout<<sum;
return 0;
}