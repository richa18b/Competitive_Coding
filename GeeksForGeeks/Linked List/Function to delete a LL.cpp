/* Write a function to delete a Linked List 
[July 18, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void deleteList(struct node*& head) 
{ 
   struct node* current=head; 
   struct node* next; 
   
   while(current!=NULL) 
  { 
     next=current->next; 
     free(current); 
     current=next; 
  } 
   head=NULL; 
} 
 
void printList(struct node* head) 
{ 
   struct node* current=head; 
   while(current!=NULL) 
  { 
     cout<<current->data<<" "; 
     current=current->next; 
  } 
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
   push(head,3); 
   push(head,1); 
   push(head,2); 
   push(head,1); 
   
   cout<<"LL:\n"; 
   printList(head); 
   
   deleteList(head); 
   cout<<"\nAfter deletion:\n"; 
   printList(head); 
   
   return 0; 
} 