/* Write a function to get Nth node in a Linked List 
[March 26, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void getNth(struct node* head,int n) 
{ 
   struct node* current=head; 
   int count=0; 
   while(count!=n) 
  { 
     count++; 
     current=current->next; 
  } 
   cout<<current->data; 
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
   int n; 
   cin>>n; 
   cout<<"Node at index "<<n<<" : "; 
   getNth(head,n); 
   return 0; 
} 