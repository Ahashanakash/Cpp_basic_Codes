#include<bits/stdc++.h>
using namespace std;

int main (){
    int *pointer;

    //calling calloc() function for memory
    pointer = (int *)calloc(5,sizeof(int));
    
    if (pointer==NULL)
    {
        cout<<"No memory\n";
    }
    else cout<<"Memory allocated\n";

    //increasing memory by calling realloc() function
    realloc(pointer,sizeof(int)*5);
    cout<<"New memory allocated\n";

    //clearing memory by calling free( function)
    free(pointer);
    cout<<"Now the memory is empty\n";
    
return 0;
}
