#include<iostream>
#include<algorithm>
using namespace std;
int main (){
int A,B,C,i;
cin>>A>>B>>C;

int sides[3]={A,B,C};

sort(sides, sides + 3 ,greater<int>());

for ( i = 0; i < 3; i++)
{
    cout<<sides[i]<<endl;
}
return 0;
}


/*
#include<iostream>
#include<algorithm>
using namespace std;
int main (){
int A,B,C,i;
cin>>A>>B>>C;

int sides[3]={A,B,C};

sort(sides, sides + 3 ,less<int>());

for ( i = 0; i < 3; i++)
{
    cout<<sides[i]<<endl;
}
return 0;
}
*/