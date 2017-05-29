/* Remove duplicates from an unsorted linked list 
[February 24, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
void remove(struct node*& current) 
{ 
   if(current->next!=NULL) 
  { 
     struct node* temp=current->next; 
     current->data=temp->data; 
     current->next=temp->next; 
  } 
   else current->data=NULL; 
} 
 
void removeDuplicates(struct node*& head) 
{ 
   struct node* current=head; 
   int flag=0; 
   map<int,int> m; 
   while(current!=NULL) 
  { 
     if(m.find(current->data)!=m.end()) 
    { remove(current); flag=1; } 
     else  
    { m.insert(pair<int,int> (current->data,1)); flag=0; } 
     if(!flag) 
       current=current->next; 
  } 
} 
 
void printList(struct node* node) 
{ 
   while(node!=NULL&&node->next!=NULL) 
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
   
   push(head,21); 
   push(head,43); 
   push(head,41); 
   push(head,21); 
   push(head,12); 
   push(head,11); 
   push(head,12); 
 
   cout<<"Original LL:\n"; 
   printList(head); 
   
   removeDuplicates(head); 
   
   cout<<"\nLL after removing duplicates:\n"; 
   printList(head); 
   
   return 0; 
} 