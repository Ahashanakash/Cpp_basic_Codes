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

};

int main()
{

    student akash;
    akash.age=22;
    akash.gpa=4.1645684;

    akash.display();

    return 0;
}