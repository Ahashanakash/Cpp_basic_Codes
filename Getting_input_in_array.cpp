#include<iostream>
using namespace std;
int main (){

    int mark[6],i;
    cout<< "enter marks ";
    for (int i=0; i<6; i++){
        
        cin>>mark[i];
    }
    cout<<"marks are ";
    for (i=0;i<6;i++){
        cout<<mark[i]<<" ";
    }
    return 0;
}
