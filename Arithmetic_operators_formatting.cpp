#include<iostream>
#include<iomanip>
using namespace std;

int main() {
//sumation
float a,b; // showpoint, noshowpoint,setprecision,fixed, setw() use korar jonno int replace kore float korte hobe
cout<<setw(30)<<"enter numbers = "; // <<setw(30) eta cout er por likhte hoy ,ar etar kaj hocche, je lekhata ami output dekhabo sheta koy ghor jayga nibe. for example (enter + numbers = ) lekhata ami 30 ghor porjonto nite chai, tai bracket a 30 likhlam....
cin>>a>>b;


cout<<noshowpoint; //point na dekhar jonno math jekhan theke shuru hobe tar upore "cout<<showpoint dite hobe
cout<<showpoint; // point dekhar jonno math jekhan theke shuru hobe tar upore "cout<<showpoint dite hobe
cout<<fixed; // eta nicher setprecision() er age use korte hobe. etar kaj hocche shudhu doshomic er por koy ghor nibo. "cout<<fixed;" lekhar por niche "cout<<setprecision(10)" likhe bracket a shudu doshomic er por joto ghor nibo toto likhbo. for example shudu doshomic er por 10 ghor nite chai tai bracket a 10 likhlam...
cout<<setprecision(10);   //setprecision use korar jonno age #include<iomanip> ei hedar file dite hobe. etar kaj hocche doshomic koto ghor porjonto nibo sheta. for example "cout<<setprecision(10);" eta calculation shurur age likhte hobe. ar (10) lekhar karon doshomiker age shoho  10 ghor nite cacchi.......
float sum = a + b;


cout<<"Sum is = "<<sum<<endl;

//subtraction
float c,d;
cout<<"enter - numbers = ";

cin>>c>>d;

float sub = c - d;

cout<<"Sub is = "<<sub<<endl;

//multipication

float e,f;
cout<<"enter * numbers = ";

cin>>e>>f;

float mul = e * f;

cout<<"mul is = "<<mul<<endl;

//division

float g,h;
cout<<"enter / numbers = ";

cin>>g>>h;

float div = g / h;

cout<<"div is = "<<div<<endl;

//remainder

int i,j; // float data typer moddhe kokhono reminder ber kora jabe na. tai ekhane float use hoy nai
cout<<"enter % numbers = ";

cin>>i>>j;

int rem = i % j;

cout<<"rem is = "<<rem;

return 0;
}

