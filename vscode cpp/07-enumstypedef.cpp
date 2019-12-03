/*
Enums and typedef
to make the program more readable
*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

enum day {mon, tues, wed, thurs, fri, sat, sun};

typedef int marks


int main()
{
    day d;
    d=mon;
    
    cout<<d<<endl;


    marks m1, m2;
    m1=50;
    m2=90;
    cout<<m1<<m2<<endl;

    system("pause");



    return 0;
}

 