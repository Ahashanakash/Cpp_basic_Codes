#include<bits/stdc++.h>
using namespace std;

namespace akash
{
    string name="akash";
    int age=21;
    void print(){
        cout<<"akash namespace "<<endl;
    }
} 
namespace niloy {
    string name= "amar nam niloy";
    int age=22;
    void print(){
        cout<<"niloy namespace "<<endl;
    }
}
//using namespace akash;
using namespace niloy;
int main (){
    //akash::name="amar name akash";
    //akash::age=22;
    //cout<<akash::name<<" "<<akash::age;
    cout<<name<<" "<<age<<endl;
    print();
return 0;
}