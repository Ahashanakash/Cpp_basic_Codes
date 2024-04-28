#include<bits/stdc++.h>
using namespace std;

void func(int * &p){
    p=NULL;
    // cout<<&p<<endl;
    cout<<"adress of p "<<p<<endl;
}

int main (){
    int value = 10;
    int * ptr = &value;
    func(ptr);
    cout<<"adress of ptr "<<ptr;
return 0;
}
