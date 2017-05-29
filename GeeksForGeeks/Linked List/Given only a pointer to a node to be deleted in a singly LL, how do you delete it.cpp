/* Given only a pointer/reference to a node to be deleted in a singly linked list, how do you delete it? 
[April 16, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void deleteNode(struct node* node_ptr) 
{ 
   struct node* temp=node_ptr->next; 
   node_ptr->data=temp->data; 
   node_ptr->next=temp->next; 
   free(temp); 
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
   cout<<"Before deleting:\n"; 
   printList(head); 
   deleteNode(head); 
   cout<<"After deleting:\n"; 
   printList(head); 
   return 0; 
} 