/*
Data types
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // max size is -128 to 127
    //so char x = 130 not possible; 
    //it will over flow to -125 (on x++)
    //if 127 + 1 will overflow to -128
    char x = 127;
    x++;
    cout<<(int)x<< endl;
    //the same applies for -128 -1 = 127
    char y = -128;
    y--;
    y--;
    cout<<(int)y<< endl;

    //Do the same for int
    //max size = 2147483647
    int a = INT_MAX;
    cout<<(int)a<< endl;
    //will overflow (cyclic) to smallest value
    a++;
    cout<<(int)a<< endl;

    system("pause");


    return 0;
}

 