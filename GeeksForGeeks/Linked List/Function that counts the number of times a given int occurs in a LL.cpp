/* Write a function that counts the number of times a given int occurs in a Linked List 
[July 19, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
int countOccurrence(struct node* head,int n) 
{ 
   struct node* current=head; 
   int cnt=0; 
   while(current!=NULL) 
  { 
     if(current->data==n) 
       cnt++; 
     current=current->next; 
  } 
   return cnt; 
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
   push(head,2); 
   push(head,1); 
   
   int n; 
   cin>>n; 
   cout<<countOccurrence(head,n); 
   return 0; 
} 