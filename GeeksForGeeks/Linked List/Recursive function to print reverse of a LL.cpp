/* Write a recursive function to print reverse of a Linked List 
[December 19, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void reverse(struct node* head) 
{ 
   if(head==NULL) 
     return; 
     
   reverse(head->next); 
   
   cout<<head->data<<" "; 
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
   newNode->next=head; 
     
   head=newNode; 
} 
 
int main() 
{ 
   struct node* head=NULL; 
   
   for(int i=5;i>0;--i) 
     push(head,i); 
     
   cout<<"Original LL:\n"; 
   printList(head); 
   
   cout<<"\nReversed LL:\n"; 
   reverse(head); 
   
   return 0; 
} 