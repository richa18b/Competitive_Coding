/* Reverse a Doubly Linked List 
[March 22, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
   struct node* prev; 
}; 
 
void reverse(struct node*& head) 
{ 
   struct node* temp=NULL; 
   struct node* current=head; 
   
   //swap the prev and next pointers 
   while(current!=NULL) 
  { 
     temp=current->prev; 
     current->prev=current->next; 
     current->next=temp; 
     current=current->prev; 
  } 
   
   if(temp!=NULL) 
     head=temp->prev; 
} 
 
void printList(struct node* node) 
{ 
   while(node!=NULL) 
  { 
     cout<<node->data<<" "; 
     node=node->next; 
  } 
} 
 
void push(struct node*& head,int data) 
{ 
   struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
   newNode->data=data; 
   
   newNode->prev=NULL; 
   newNode->next=head; 
   
   if(head!=NULL) 
     head->prev=newNode; 
     
   head=newNode; 
} 
 
int main() 
{ 
   struct node* head=NULL; 
   for(int i=5;i>0;--i) 
     push(head,i); 
   cout<<"Original doubly LL:\n"; 
   printList(head); 
   
   reverse(head); 
   
   cout<<"\nReversed Doubly LL:\n"; 
   printList(head); 
   
   return 0; 
} 