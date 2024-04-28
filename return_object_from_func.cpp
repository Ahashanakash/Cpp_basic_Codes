#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll;
    int clas;
    double gpa;
    student (int roll,int clas,double gpa){
        this->roll=roll;
        this->clas=clas;
        this->gpa=gpa;
    }    
};

student *dmo(){
    student* akash=new student(10,9,5.01);
    return akash;
}

int main (){

    student* akash=dmo();
    cout<<akash->roll<<" "<<akash->clas<<" "<<akash->gpa<<endl;
    delete akash;
    cout<<akash->roll<<" "<<akash->clas<<" "<<akash->gpa;
    
    
return 0;
}
