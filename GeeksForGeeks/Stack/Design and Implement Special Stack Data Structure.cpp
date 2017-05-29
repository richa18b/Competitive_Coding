/* Design and Implement Special Stack Data Structure 
[September 16, 2011] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
class Stack 
{ 
   static const int max=100; 
   int a[max]; 
   int top; 
   public: 
     Stack() { top=-1; } 
     void push(int x); 
     int pop(); 
     bool isEmpty(); 
     bool isFull(); 
     void printStack(); 
}; 
 
bool Stack::isEmpty() 
{ 
   if(top==-1) 
     return true; 
   return false; 
} 
 
bool Stack::isFull() 
{ 
   if(top==max-1) 
     return true; 
   return false; 
} 
 
int Stack::pop() 
{ 
   if(isEmpty()) 
  { 
     cout<<"\nStack Underflow\n"; 
     abort(); 
  } 
   int x=a[top]; 
   top--; 
   return x; 
} 
 
void Stack::push(int x) 
{ 
   if(isFull()) 
  { 
     cout<<"\nStack Overflow\n"; 
     abort(); 
  } 
   top++; 
   a[top]=x; 
} 
 
void Stack::printStack() 
{ 
   for(int i=top;i>=0;--i) 
     cout<<a[i]<<"\n"; 
} 
 
class SpecialStack:public Stack 
{ 
   Stack min; 
   public: 
     int pop(); 
     void push(int x); 
     int getMin(); 
}; 
 
void SpecialStack::push(int x) 
{ 
   if(isEmpty()) 
  { 
     Stack::push(x); 
     min.push(x); 
  } 
   else 
  { 
     Stack::push(x); 
     int y=min.pop(); 
     min.push(y); 
     if(x<y) 
       min.push(x); 
     else min.push(y); 
  } 
 
} 
 
int SpecialStack::pop() 
{ 
   int x=Stack::pop(); 
   min.pop(); 
   return x; 
} 
 
int SpecialStack::getMin() 
{ 
   int x=min.pop(); 
   min.push(x); 
   return x; 
} 
 
int main() 
{ 
   SpecialStack s; 
   s.push(30); 
   s.push(10); 
   s.push(20); 
   s.push(5); 
   s.push(100); 
   cout<<"Original Stack:\n"; 
   s.printStack(); 
   cout<<"Minimum element: "<<s.getMin(); 
   s.pop(); 
   cout<<"\nStack after popping one element:\n"; 
   s.printStack(); 
   return 0; 
} 