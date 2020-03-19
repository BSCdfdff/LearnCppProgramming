#include <iostream>
#include <climits>
#include <math.h>
#define INSERTION_OPERATOR operator<<
#define EXTRACTION_OPERATOR operator>>
#define ADDITION_OPERATOR operator+
using namespace std;


class Node{
public:
    int data;
    Node *next;
}*f=NULL;

class Queue{
private:
  Node *front;
  Node *rear;
    
public:
    Queue(){
        front = rear= NULL;
    }
    ~Queue(); 
    void Display();
    void EnQueue(int x);
    int DeQueue();
   
}

void Queue::EnQueue(int x){
  Node *t =  new Node;
 
  if (t==NULL)
     cout<<"Queue is FULL"<<endl;
  else
  {
    t->data = x;
    t->next = NULL;
    //if it is the only node
    if (front==NULL) front = rear = t;
    else{
       rear->next = t;
       rear =t;
    }
  }
}

int Queue::DeQueue (){
   int x = -1;
   Node *p;
 
   if (front==NULL)
      cout<<"Queue is Empty"<<endl;
   else
   {
     p = front;
     front = front->next;
     x = p->data;
     delete p;
   }
  return x;
}

Queue::~Queue(){
    Node *p=front;
    while(front)
    {
      front=front->next;
      delete p;
      p=front;
    }
}

void Queue::Display (){
  Node *p = front;
  for (int i = 0; p !=NULL; i++){
     cout<<p->data<<" ";
     p=p->next;
  }    
  cout<<endl;
}

int main()
{

	Queue q;
	q.EnQueue(10);
	q.EnQueue(20);
	q.EnQueue(30);
	q.EnQueue(40);
	q.Display();
	
	q.DeQueue();
	q.Display();
	
	q.DeQueue();
	q.Display();
	
	q.EnQueue(50);
	q.Display();
	
	q.EnQueue(60);
	q.Display();
	
	return 0;
}	