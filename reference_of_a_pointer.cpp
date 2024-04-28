#include<bits/stdc++.h>
using namespace std;

void fun(int* &q){
    q=NULL;
    cout<<q<<endl;
}

int main (){
    
    int a=10;
    int * ptr = &a;
    fun(ptr);
    cout<<ptr;

return 0;
}