/*
Arrays:
Ideal for storing collection of elements

*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;


int main()
{
    //Type (int) and size(5) of array(0 - 4)
    int A[5];
    int B[5]={1,3,5,2,6};
    //size is determined by number of elements in it
    int C[]={3,4,5,6};
    //missing elements einitialized to zero
    int D[5]={3,4};
    //must be enclosed in single types
    char E[5]={'a','b', 'e','f','g'};

    for(int x : D){
        cout<<x<<endl;
    }

    //matrix operation    
    int X[2][3]={3,3,3,3,3,3};
    int Y[2][3]={1,1,1,1,1,1};
    int Z[2][3];

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            Z[i][j]=X[i][j] + Y[i][j]; 
        }
    }    

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<Z[i][j]<< " ";
        }
        cout<<endl;
    }


    cout<<"Not Found"<<endl;
    system("pause");


    return 0;
}

 