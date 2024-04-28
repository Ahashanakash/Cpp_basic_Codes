/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
*/
/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<col%2<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/
/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
           cout<<row%2<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/
/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
           cout<<char('A'+row-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = n; row >= 1; row--)
    {
        for (col = n; col >= row; col--)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
*/
/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
*/
/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<char('A'+row-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<char('A'+col-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    for (int row = n-1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;

int main (){

    int n,row,col;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    for (int row = n-1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}