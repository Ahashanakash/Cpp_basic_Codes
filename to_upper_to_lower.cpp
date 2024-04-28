#include<iostream>

using namespace std;

int main(){
  char ch;
cout<<"enter a charecter = ";
cin>>ch;
ch = toupper(ch);
if ( ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
   cout<<"vowel";
}
else {
   cout<<"consonent";
}
   return 0;
}


// char ch;
// cout<<"enter a charecter = ";
// cin>>ch;

// ch = tolower(ch);

// if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
//     cout<<"vowel";
// }
// else {
//     cout<<"consonent";
// }
// return 0;
// }

