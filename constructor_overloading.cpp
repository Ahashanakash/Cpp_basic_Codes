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
    student(int x,double y){
            age=x;
            gpa=y;
        }
    student(){
        cout<<"Default constructor"<<endl;
    }

};

int main()
{
    
    student akash(25,3.80);
    student ob;
    akash.display();

    return 0;
}