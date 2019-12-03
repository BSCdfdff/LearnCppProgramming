/*
Pointers:
storing the address of data

*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;


int main()
{
    //* refers to an address variable (where p is pointing to)
    //& refers to the address of data variable, ie. x
    //p just hold the value of &
    //&p is teh address of p
    //*p is pointer of the address of data variable, which is value of x
    //Summary
    //Declaration: int *p
    //Initialisation: p=&x
    //Dereferencing: cout<<*p
    int x = 10;
    int *p;
    p=&x;


    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;


    //When memory is allocated in Heap
    int *q=new int [5];
    q[0]=12;
    q[1]=13;
    cout<<q[1]<<endl;

    delete []q;
    q=nullptr;
    //Create dynamic array in heap
    //this not possible in creating it in stack
    
    //normal array
    // int size1;
    // cout<<"Please enter size:"<<endl;
    // cin>>size1;

    // int aRR1[size1];
    // cout<<sizeof aRR1 <<endl;
    //now cannto resize

    //now create the array in heap
    //and we can change the size
    int *aRR = new int[20];
    cout<<sizeof aRR <<endl;

    //but what happens to old array?
    //best it to delete p
    //otherwise memory leak
    p=new int[40];

    aRR = new int[40];
    cout<<sizeof aRR <<endl;
    


    
s


    system("pause");

    return 0;
}

 