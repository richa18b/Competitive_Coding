/* Reverse a stack using recursion 
[April 27, 2010] */    
 
#include <bits/stdc++.h> 
using namespace std; 
 
stack<int> s; 
         
void print() 
{ 
    stack<int>  t = s; 
    while(!t.empty()) 
    { 
        cout<<t.top()<<"\n"; 
        t.pop(); 
    } 
} 
 
void recursivePush(int x) 
{ 
    if(s.empty()) 
    { s.push(x); return; } 
             
    int temp = s.top();  
    s.pop(); 
    recursivePush(x); 
             
    s.push(temp); 
} 
 
void reverse() 
{ 
    if(s.empty())  
       return; 
             
    int  element=s.top();  
    s.pop(); 
    reverse(); 
     
    recursivePush(element); 
} 
          
int main()  
{ 
   
    s.push(3); 
    s.push(2); 
    s.push(1); 
     
    cout<<"Original Stack\n"; 
    print(); 
     
    reverse(); 
     
    cout<<"\nReversed Stack:\n"; 
    print(); 
     
    return 0; 
}