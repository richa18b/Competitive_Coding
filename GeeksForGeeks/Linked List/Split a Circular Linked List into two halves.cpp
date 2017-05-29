/* Split a Circular Linked List into two halves 
[March 28, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void splitList(struct node*& head,struct node*& head1,struct node*& head2) 
{ 
   struct node *slow_ptr=head; 
   struct node *fast_ptr=head; 
   
   while(fast_ptr->next!=head&&fast_ptr->next->next!=head) 
  { 
     fast_ptr=fast_ptr->next->next; 
     slow_ptr=slow_ptr->next; 
  } 
   
   if(fast_ptr->next->next==head) 
     fast_ptr=fast_ptr->next; 
     
   head1=head; 
   
   if(head->next!=head) 
     head2=slow_ptr->next; 
   
   fast_ptr->next=slow_ptr->next; 
   
   slow_ptr->next=head; 
} 
 
void push(struct node*& head,int data) 
{ 
   struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
   struct node* temp=head; 
   newNode->data=data; 
   newNode->next=head; 
   
   if(head!=NULL) 
  { 
     while(temp->next!=head) 
       temp=temp->next; 
     temp->next=newNode; 
  } 
   else newNode->next=newNode; 
   
   head=newNode; 
} 
 
void printList(struct node* head) 
{ 
   struct node* current=head; 
   if(head!=NULL) 
  { 
     do 
    { 
       cout<<current->data<<" "; 
       current=current->next; 
    }while(current!=head); 
  } 
} 
 
 
int main() 
{ 
   struct node* head=NULL; 
   struct node* head1=NULL; 
   struct node* head2=NULL; 
   for(int i=5;i>0;--i) 
     push(head,i); 
   
   cout<<"Original circular LL:\n"; 
   printList(head); 
   
   splitList(head,head1,head2); 
   
   cout<<"\nFirst half of the LL:\n"; 
   printList(head1); 
   
   cout<<"\nSecond half of the LL:\n"; 
   printList(head2); 
   
   return 0; 
} 