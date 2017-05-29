/* Implement Queue using Stacks 
[March 13, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
stack<int> s1; 
   
void print() 
{ 
   stack<int> s=s1; 
   while(!s.empty()) 
  { 
     cout<<s.top()<<" "; 
     s.pop(); 
  } 
   cout<<"\n"; 
} 
 
void enQueue(int data) 
{ 
   stack<int> s2; 
   while(!s1.empty()) 
  { 
     s2.push(s1.top()); 
     s1.pop(); 
  } 
   s1.push(4); 
   while(!s2.empty()) 
  { 
     s1.push(s2.top()); 
     s2.pop(); 
  } 
} 
 
void deQueue() 
{ 
   if(!s1.empty()) 
     s1.pop(); 
} 
 
int main() 
{ 
   s1.push(3); 
   s1.push(2); 
   s1.push(1); 
   
   cout<<"Original Queue:\n"; 
   print(); 
   
   enQueue(4); 
   cout<<"Queue after insertion:\n"; 
   print(); 
   
   deQueue(); 
   cout<<"Queue after deletion:\n"; 
   print(); 
   
   return 0; 
} 