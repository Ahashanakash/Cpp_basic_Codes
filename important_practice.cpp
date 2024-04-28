#include<bits\stdc++.h>
using namespace std;

int main (){

    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    if (a<c && c<b && b<d)
    {
        cout<<c<<" "<<b;
    }
    else if (a>c && a<d && b>d)
    {
        cout<<a<<" "<<d;
    }
    else if (a==c && b==d)
    {
        cout<<a<<" "<<b;
    }
    else if (a>c && a<b && b<d)
    {
        cout<<a<<" "<<b;
        }
     else if (a==c && a<b && b<d)
            {
            cout<<a<<" "<<b;
            }
    else if (a>c && a<b && b==d)
            {
            cout<<a<<" "<<b;
            }
    else if (a==b && a>c && b<d)
            {
                cout<<a<<" "<<b;
            }
    
    else if (a<c && c<d && d<b)
    {
        cout<<c<<" "<<d;
    }
    else if (a==c && c<d && b>d)
        {
            cout<<c<<" "<<d;
        }
    else if (a<c && c<d && b==d)
        {
            cout<<c<<" "<<d;
        }
    else if (c==d && a<c && b>d)
        {
            cout<<c<<" "<<d;
        }

    else if (a<b && b==c && c==d)
    {
        cout<<c<<" "<<d;
    }
    else if (a<b && a==c && c==d)
    {
        cout<<c<<" "<<d;
    }
    else if (a==b && a==c && c<d)
    {
        cout<<a<<" "<<b;
    }
    else if (a==b && d==b && c<d)
    {
        cout<<a<<" "<<b;
    }
    else if (a<b && b==c && c<d)
    {
        cout<<b<<" "<<c;
    }
    else if (c<a && a==d && b>d)
    {
        cout<<a<<" "<<d;
    }


        else {
        cout<<"-1";
        }

    return 0;
}
