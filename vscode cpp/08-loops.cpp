/*
Loops: 
while(){}
do{}while()
for (init, conditon, update){}
for (type x:collection array)

*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;


int main()
{
    //loop stops when i = 11
    //for(;;){]}- infinite loop
    for (int i =1; i<=10; i++)
    {
        cout<<i<<endl;    
    }

    int i = 1;
    while (i<=10){
        cout<<i<<endl;  
        i++  ;
    }

    do{
        cout<<i<<endl;  
        i++ ; 
    }while (i<=10);

    cout<<"Not Found"<<endl;
    
    system("pause");


    return 0;
}

 