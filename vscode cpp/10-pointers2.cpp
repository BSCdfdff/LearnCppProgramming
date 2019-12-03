/*
Pointers:


*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
   int A[5]{2,4,6,8,10};
   int *p=A;
   //this will be 2
   cout<<*p<<endl;
   //using pointer arithmetic, so dont need to write *p
   p++;
   //this will be 4
   cout<<*p<<endl;
   p--;
   //this will be 2
   cout<<*p<<endl;

   //this will now reflect the addreses
   //Get the address 2 elements away
   cout<<p<<endl;
   cout<<p+2<<endl;
  
   //Get all elements of array
   for (int i = 0; i<5; i++){
       cout<<A[i]<<endl;
   }


   cout<<"The End" <<endl;
    
   system("pause");

   return 0;
}

 