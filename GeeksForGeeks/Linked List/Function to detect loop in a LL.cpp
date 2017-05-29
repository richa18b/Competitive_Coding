/* Write a program function to detect loop in a linked list 
[August 2, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
struct node 
{ 
   int data; 
   struct node* next; 
}; 
 
bool loopPresent(struct node* head) 
{ 
   struct node* current=head; 
   map<struct node*,int> m; 
   while(current!=NULL) 
  { 
     if(m.find(current)!=m.end()) 
       return true; 
     else m.insert(pair<struct node*,int> (current,1)); 
     current=current->next; 
  } 
   return false; 
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
   
   head->next->next->next->next->next=head; 
   
   if(loopPresent(head)) 
     cout<<"Loop present"; 
   else cout<<"Loop not present"; 
   
   return 0; 
} 