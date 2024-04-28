#include<bits/stdc++.h>
using namespace std;

class student{
    public: 
    string name;
    int age;
    student(string name,int age){
        this->name=name;
        this->age=age;
    }
};

int main (){
    student* akash=new student("amr nam akash",22);
    student* niloy=new student("amr nam niloy",22);

    *akash=*niloy;
    delete niloy;
    cout<<akash->name<<" "<<akash->age;
return 0;
}