/* Pairwise swap elements of a given linked list 
[April 29, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void swap(int *a,int *b) 
{ 
   int temp; 
   temp=*a; 
   *a=*b; 
   *b=temp; 
} 
 
void pairwiseSwap(struct node* head) 
{ 
   struct node* temp=head; 
   while(temp!=NULL&&temp->next!=NULL) 
  { 
     swap(&(temp->data),&(temp->next->data)); 
     temp=temp->next->next; 
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
   for(int i=6;i>0;--i) 
     push(head,i); 
   printList(head); 
   pairwiseSwap(head); 
   cout<<"After swapping the elements pairwise:\n"; 
   printList(head); 
   return 0; 
} 