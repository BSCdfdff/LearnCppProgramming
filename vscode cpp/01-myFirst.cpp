// Include this lib in program
#include <iostream>

//std lib, using cout
//instead of writing std::cout
using namespace std;

// starting point of program
int main()
{
    // declare variables
    int a,b,c;
    string username, addressLine;
    
    //cout is to display something on screen
    //<< - called INSERTION operator
    //To remember: Going to left, "out" of traffic
    // cout << "Enter two numbers:" ;

    //cint is to READ from keyboard
    //>> - called EXTRACTION operator
    //To remember: Going to right, "in" to traffic
    cin >> a >> b;
    c=a+b;
    cout << "Sum is: " << c << endl;

   
    
    cout << "Please enter your name:" << endl;
    cin >> username;
    cout << "Hi there, " << username << endl;

    cout << "Please enter your address:" << endl;
    getline(cin, addressLine);

    cout << "You stay at:, " << addressLine << endl;

    return 0;
}

 