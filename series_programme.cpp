

//1+2+3+4+5+6+................+n =?

#include<iostream>
using namespace std;

int main() {
    int sum=0, n;
    cout<< "enter your number ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<sum<< " is your answer";

    return 0;
}
