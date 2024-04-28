// #include<iostream>
// using namespace std;

// class student 
// {

//     public :
//         int age;
//         double gpa;
//     void display(){
//         cout<<age<<"   "<<gpa<<endl;
//     }
//     student(int x,double y){
//             age=x;
//             gpa=y;
//         }

// };

// int main()
// {

//     student akash(25,3.80);
//     akash.display();

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int clas;
    int roll;
    double gpa;
    student(int c, int r,double g){
        clas=c;
        roll=r;
        gpa=g;
    }
    void print(){
        cout<<clas<<" "<<roll<<" "<<gpa;
    }
};

int main (){
    student akash(9,10,5.01);
    akash.print();
return 0;
}