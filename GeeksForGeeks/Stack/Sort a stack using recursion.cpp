/* Sort a stack using recursion 
[October 2, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
stack<int> s; 
 
void insertSorted(int element) 
{ 
   if(s.empty()||element>s.top()) 
  { s.push(element); return; } 
   
   
   int temp=s.top(); 
   s.pop(); 
   insertSorted(element); 
     
   s.push(temp); 
} 
 
void sortStack() 
{ 
   if(s.empty()) 
     return; 
     
   int temp=s.top(); 
   s.pop(); 
   sortStack(); 
   
   insertSorted(temp); 
} 
 
void printStack() 
{ 
   stack<int> t=s; 
   while(!t.empty()) 
  {   
     cout<<t.top()<<"\n"; 
     t.pop(); 
  } 
} 
 
int main() 
{ 
   s.push(30); 
   s.push(-5); 
   s.push(18); 
   s.push(14); 
   s.push(-3); 
   
   cout<<"Original stack:\n"; 
   printStack(); 
 
   sortStack(); 
   
   cout<<"Sorted Stack:\n"; 
   printStack(); 
   
   return 0; 
}