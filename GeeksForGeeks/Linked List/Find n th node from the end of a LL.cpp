/* Find n\rquote th node from the end of a Linked List 
[July 17, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void printNthFromLast(struct node* head,int n) 
{ 
   static int i=0; 
   if(head==NULL) 
     return; 
   printNthFromLast(head->next,n); 
   if(++i==n) 
     cout<<head->data; 
} 
 
void push(struct node*& head,int data) 
{ 
   struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
   
   newNode->data=data; 
   newNode->next=head; 
   head=newNode; 
} 
 
int main() 
{ 
   struct node* head=NULL; 
   
   push(head,1); 
   push(head,10); 
   push(head,12); 
   push(head,22); 
   push(head,18); 
   
   int n; 
   cin>>n; 
   
   printNthFromLast(head,n); 
   return 0; 
} 