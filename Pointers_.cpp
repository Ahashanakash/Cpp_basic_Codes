#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x= 5;
    
    int* p_x =&x;

    cout<<*p_x<<endl;
    *p_x=7;
    cout<<*p_x;

    return 0;
}