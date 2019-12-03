/*
Data types
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //Size in bytes
    //1 byte = 8 bits
    char x;
    cout<<sizeof(x)<<endl;
    cout<<CHAR_MIN<< " *** " << CHAR_MAX<< endl;

    unsigned char xx;
    cout<<sizeof(xx)<<endl;
    cout<<UCHAR_MAX<< endl;

    int y;
    cout<<sizeof(y)<<endl; 
    cout<<INT_MIN<< " *** " << INT_MAX<< endl;
   
    unsigned int yy;
    cout<<sizeof(yy)<<endl; 
    cout<<UINT_MAX<<endl; 

    float z;
    cout<<sizeof(z)<<endl;
    

    long a;
    cout<<sizeof(a)<<endl; 

    double b;
    cout<<sizeof(b)<<endl; 

    long long bg;
    cout<<sizeof(bg)<<endl; 

    long double c;
    cout<<sizeof(c)<<endl; 

    //Declare variables
    int m1,m2; 
    float f1,f2;
    
    //initialisation
    //1st one we know
    //rest introduced in C++11
    int day = 1;
    int day1(1);
    int day2=(1);
    int day3{1};
    int day4={1};

    //assignment
    //cab be used for int, short, long, long long, chars
    int a = 10;
    int a1 = 010; //octal -- =8
    int a2 = 0x10; //hexi --=16

    //long literals are followed by l
    long distance = 65839l;

    //float literal followed by f
    long price = 12.76f;
    long cost = 1.72e4f; //172000

    //double literal followed by l
    //can write l for double literal as well
    double weight = 75.4e7l;

    //for characters
    //must be in single quotes
    //otherwise it becomes a string
    char section = 'A';

    //below is same as well
    //since 65 is ascii for A
    char sectionA = 65;

    //now its a string
    char section1 = "A";
    
    //bool values
    bool yt = true;

    //this is same as above
    bool yt1 = 1; 

    //REMEMBEr string is not primitive data type
    //but class provided by c++
    //must be in double quptes
    //name is object, with initial value John
    string name = "John";


    return 0;
}

 