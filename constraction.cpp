#include<bits/stdc++.h>
using namespace std;

    class student {
        public:
        int age;
        float gpa;
        student (int x,float y){
            age=x;
            gpa=y;
        }
        inline void display (){
            cout<<age<<"   "<<gpa<<endl;
        }
    };
    int main (){

        student akash(26,4.01),batash(22,3.90);
        akash.display();
        batash.display();

    return 0;
}