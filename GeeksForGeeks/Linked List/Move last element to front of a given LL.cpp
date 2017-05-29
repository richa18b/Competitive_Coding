/* Move last element to front of a given Linked List 
[April 22, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void push(struct node*& head,int data) 
{ 
   struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
   
   newNode->data=data; 
   newNode->next=head; 
   head=newNode; 
} 
 
void moveLastToFront(struct node*& head) 
{ 
   struct node* current=head; 
   while(current->next!=NULL) 
     current=current->next; 
   push(head,current->data); 
   struct node* temp=head; 
   while(temp->next->next!=NULL) 
     temp=temp->next; 
   temp->next=NULL; 
} 
 
void printList(struct node* head) 
{ 
   struct node* current=head; 
   while(current!=NULL) 
  { 
     cout<<current->data<<"->"; 
     current=current->next; 
  } 
   cout<<"NULL\n"; 
} 
 
int main() 
{ 
   struct node* head=NULL; 
   for(int i=5;i>0;--i) 
     push(head,i); 
   printList(head); 
   moveLastToFront(head); 
   cout<<"After Change:\n"; 
   printList(head); 
   return 0; 
} 