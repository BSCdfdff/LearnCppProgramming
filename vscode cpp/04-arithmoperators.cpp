/*
Arithmic Operators
*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    //Order of precedence (), *, /, % (modules, ie remainder), + , -
    int a = 13, b = 5, c;
    c=a/b;
    c=a%b;

    cout<<c<< endl;

    //float valuess
    float aa = 12.5f, bb=6.1f, cc;
    cc=aa/bb; 

    //cannot say cc=aa%bb (modulus)
    //ONLY works with INT and CHARs

    //Lets look at expressions
    //dont need parenthesis if you know order of precedence
    //k = (a+b)+(c*d)
    int a1=10, b1=2, c1=3, d1=10, k1;
    //[Get first into postfix form][Compiler]
    //Compiler will put brackets first (c*d), then (a+b), 
    //Then whole thing: ((a+b)+(c*d)), then order will be
    //first (a+b), then (c*d), and (a+b)+(c*d)
    //So (c*d) wont be first, but will get first()

    //Idea here: must put brackets if result wil be wrong
    k1 = a1+b1+c1*d1;
    cout<<k1<< endl;

    //Area of circle
    //pi*r ^2
    //3.1425*r*r
    float r, area;
    cout<<"Enter Radius:"<< endl;
    cin>>r;
    area = float(22/7) * r * r;
    cout<<"Area is:"<< area<< endl;

    
    //root of quadratic equation
    //Idea here: must put brackets if result wil be wrong (2*c)
    //root1=(-b+sqrt(b*b-4*a*c))/(2*c)
    int a3, b3, c3;
    float root1, root2;
    cout<<"Enter 3 values:"<<endl;
    cin>>a3>>b3>>c3;
    root1 = (-b3+sqrt(b3*b3-4*a3*c3))/(2*a3);
    root2 = (-b3-sqrt(b3*b3-4*a3*c3))/(2*a3);
    cout<<root1<<" "<<root2<<endl;

    system("pause");

    return 0;
}

 