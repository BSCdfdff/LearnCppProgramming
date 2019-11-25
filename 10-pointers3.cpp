/*
Pointers:


*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{

    //data array variable
    //this variable will go directly into stack
    //normal variables can only go to
    // -main program code
    // -and stack
    int A[5] ={2,5,6,7,10}; //index:0 - 4

    cout<<A[1]<<endl;   //points to second element in array    [5]
    cout<<1[A]<<endl;   //same as above, just different sytax  [5]
    cout<<A<<endl;      //??? point to some address??          [0x7f5c617cf030]

    //To access heap:
    //Only pointers can access heap
    //[DECLARATION] and [INITIALIZATION] can be done in one line
    int *p= A;

    //p and A can be used interchangeably
    cout<<p<<endl;     //points to address of A
    cout<<*p<<endl;    //points to value of A, which defaults to first A[0] value
    cout<<p[1]<<endl;  //points to value of A[1]

    for (int i = 0; i<5; i++){
            cout<<"Value["<<i<<"]: "<<A[i]<<endl;
    }

    //Cannot resize array
    //But can resize heap memory
    //But first need to delete it
    //ths code crashes by ide (do in vscode)
    delete []p;
    p=nullptr;

    p = new int [20];
    cout<<p<<endl;
    cout<<sizeof(p)/sizeof(int)<<endl;

    for (int i = 0; i<(sizeof(p)/sizeof(int)); i++){
        cout<<"Value["<<i<<"]: "<<p[i]<<endl;
    }


   cout<<"The End" <<endl;
   system("pause");
   return 0;
}

 