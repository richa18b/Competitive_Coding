/* Find the middle of a given linked list 
[July 16, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void printMiddleElement(struct node* head) 
{ 
   struct node *slow_ptr=head; 
   struct node *fast_ptr=head; 
   
   if(head!=NULL) 
  { 
     while(fast_ptr->next!=NULL) 
    { 
       fast_ptr=fast_ptr->next->next; 
       slow_ptr=slow_ptr->next; 
    } 
     cout<<slow_ptr->data; 
  } 
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
   printList(head); 
   cout<<"Middle Element: "; 
   printMiddleElement(head); 
} 