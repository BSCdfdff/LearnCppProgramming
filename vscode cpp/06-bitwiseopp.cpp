/*
BitWise operators

Where needed: develop Device driver, system apps etc.

opeations on bits of data, not on data as whole
& and 
|or
^z-or
~ not
<< Left shift
>> right shift
------------
bit 1 & bit 2 (same as logical and)
0 0 =0
1 0 =0
0 1 =0
1 1 =1
--------
bit 1 | bit 2 
0 0 =0
1 0 =0
0 1 =0
1 1 =1
------
bit 1 ^ bit 2  (if one bits are 1(different), is 1, but 0 if both bits same)
0 0 =0
1 0 =1
0 1 =1
1 1 =0
------
bit 1 ~ bit 2  ()
0 0 =
1 0 =
0 1 =
1 1 =
------
bit 1 << bit 2  ()
0 0 =
1 0 =
0 1 =
1 1 =
------
bit 1 >> bit 2  ()
0 0 =
1 0 =
0 1 =
1 1 =
------

& and 
|or
^x-or
~ not
<< Left shift
>> right shift
*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    int x=11, y=5, z;
    //binary form
    //x=00001011 (11)
    //y 00000101 (3)
    //----------
    //z=00000001 (using & table above) (s)
   //if y = 7, z = 3 (00000011)
    z = x & y;
    cout<<z<<endl;

    
    z = x | y;    
    //x=00001011 (11)
    //y 00000111 (7)
    //----------
    //z=00001111 (using & table above)(15)  
    //=256-128-64-32-8-4-2-1 (how to add)
    cout<<z<<endl;

    z = x ^ y;   
    //x=00001011 (11)
    //y 00000111 (7)
    //----------s
    //z=00001100 (using & table above)(12)  

    char xx=5, yy;
    //binary form
    //5=00001101 (5)
    //y= () (opposite of what it is)
    //This is compliment or not of xs
    //covert up to 2's compliment (to ger negative number)
    //What is value in decimal form (conver to 2's compliment)
    //11110010
    //===========
    //00001101(convert 1's to 0, and 0s to 1)
    //       1(then add 1 to this number)
    //---------
    //00000110 (=-6) negative
    yy=~xx

    cout<<yy<<endl;
    
    //Left/Right shift
    int x10 = 5, y10;
    //x10 = 00000101
    //      00001010 (shift 1 spot to left all bits, so last spot is zero)
    //becomes 10 (i.e multiplied by 2)
    //i.e x << i (muliplied by 2)
    // or x << 2 *i (mulitplied by 4 etc)
    y10 = x10<<1 //left shift by 1
    
    //simarily - x>>i
    // x/(2*i) -s-bits will move to right
    //But remember sign bit is not included
    //if number is +ve, will remain so, or -ve will remain so




    
    system("pause");

    return 0;
}

 