/*
Compound assignments
*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    int sum = 5, x = 2;
    //sum = sum + x;
    //+=, *=, /=, -=,%= 
    sum+=
    x= x +1 ;
    x+=1;
    //post increment
    //very important
    //x=5
    //j=++x (x:6, j:6), not same as j=x++ (x:6, y:5)
     x++;
    //same, but faster
    //just order of precedencea
    //preincrement
    ++x; 

    //example
    int i=5, j;
    // (2*6) + (2*5) = i=(5+1+1) j=(2*(5+1)=12 + (2*6)=12 =24 (??26)
    //reason missing 2, is that after first ++i, need increment need use this value of i in next i++
    // i=(5+1+1) j=(2*(5+1)=12 + (2*7)=14 =26
    j = 2* ++i +2 * i++;
    cout<<i<<" "<<j<<endl;
    
    int ii=5, jj;
    // (2*5) + (2*5) = ii=(5+1+1) jj=(2*(5)=10 + (2*5)=10 =20 (??22)
    //reason missing 2, is that after first ++i, need increment need use this value of i in next i++
    //ii=(5+1+1) jj=(2*(5)=10 + (2*6)=12 =22 (??22)
    cout<<ii<<" "<<jj<<endl;
    jj = 2* ii++ +2 * ii++;
    cout<<ii<<" "<<jj<<endl;
    
    
    system("pause");

    return 0;
}

 