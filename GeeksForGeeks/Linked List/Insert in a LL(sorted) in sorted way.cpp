/* Given a linked list which is sorted, how will you insert in sorted way 
[September 17, 2009] */    
 
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
 
void printList(struct node* node) 
{ 
   while(node!=NULL) 
  { 
     cout<<node->data<<" "; 
     node=node->next; 
  } 
} 
 
void insert(struct node*& head,int n) 
{ 
   struct node* current=head; 
   while(current!=NULL) 
  { 
     struct node* temp=current->next; 
     if(current->data<n&&temp->data>n) 
    { 
       push(current->next,n); 
       break; 
       /*struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
       newNode->data=data; 
       newNode->next=current->next; 
       current->next=newNode;*/ 
    } 
     else current=current->next; 
  } 
} 
 
int main() 
{ 
   struct node* head=NULL; 
   
   push(head,15); 
   push(head,10); 
   push(head,7); 
   push(head,5); 
   push(head,2); 
   
   cout<<"Original sorted LL:\n"; 
   printList(head); 
   
   int n; 
   cin>>n; 
   
   insert(head,n); 
   
   cout<<"\nSorted LL after inserting "<<n<<" :\n"; 
   printList(head); 
   
   return 0; 
} 