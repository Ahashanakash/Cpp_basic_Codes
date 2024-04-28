#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    float number;
};

int main (){

    int n;
    cin>>n;
    student st[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin,st[i].name);
        cin>>st[i].age>>st[i].number;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<st[i].name<<" "<<st[i].age<<" "<<st[i].number<<endl;
    }
    
    
return 0;
}