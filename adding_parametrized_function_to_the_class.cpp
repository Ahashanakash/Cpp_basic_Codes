#include<iostream>
using namespace std;

class student 
{

    public :
        int age;
        double gpa;
    void display(){
        cout<<age<<"   "<<gpa<<endl;
    }
    void setValue(int x,double y){
            age=x;
            gpa=y;
        }

};

int main()
{

    student akash;
    akash.setValue(25,3.80);
    akash.display();

    return 0;
}