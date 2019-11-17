/*
Conditions
using relational operators
<
<=
>
>=
==
!=
Combine using logical operators
&& (and)
|| (or)
! (not)
=====
Dynamic Declaration
*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;





int main()
{

    if (true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    int roll;

    cout<<"Enter roll:"<<endl;
    cin>>roll;

    if (roll<=0)
    {
        cout<<"Invalid roll";
    }
    else
    {
        cout<<"Roll is "<<roll<<endl;
    }

    //Compound conditional statement
    int age;
    cout<<"Enter age:"<<endl;
    if (age>=12 && age<=50)
    {
        cout<<"Young";
    }
    else if (age>=7 && age <=11)
    {
        cout<<"You just a child"<<endl;
    }
    else
    {
        cout<<"Enjoy";
    }

    //Dynamic Declaration
    int pp=20;
    if (int k=12; pp < 20) //(same as &&)(only available with -std=c++17 or -std=gnu++17)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    //switch case 
    //same, no issues
    system("pause");



    return 0;
}

 