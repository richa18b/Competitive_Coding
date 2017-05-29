/* Decimal Equivalent of Binary Linked List 
[June 10, 2016] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void binaryEq(struct node* head,struct node* temp) 
{ 
   static int sum=0,bin=1; 
   if(head==NULL) 
     return; 
   binaryEq(head->next,temp); 
   if(head->data==1) 
     sum+=bin; 
   bin*=2; 
   if(head==temp) 
     cout<<sum; 
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
   
   push(head,0); 
   push(head,1); 
   push(head,0); 
   push(head,0); 
   push(head,1); 
   push(head,1); 
 
   struct node* temp=head; 
   binaryEq(head,temp); 
   
   return 0; 
} 