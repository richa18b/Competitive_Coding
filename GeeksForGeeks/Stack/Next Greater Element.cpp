/* Next Greater Element 
[March 17, 2011] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void printNGE(int a[],int n) 
{ 
   stack<int> myStack; 
   myStack.push(a[0]); 
   int element,next; 
   for(int i=1;i<n;++i) 
  { 
     next=a[i]; 
     if(!myStack.empty()) 
    { 
       element=myStack.top(); 
       myStack.pop(); 
       while(element<next) 
      { 
         cout<<element<<"-->"<<next<<"\n"; 
         if(myStack.empty()) 
           break; 
         element=myStack.top(); 
         myStack.pop(); 
      } 
       if(element>next) 
         myStack.push(element); 
    } 
     myStack.push(next); 
  } 
   while(!myStack.empty()) 
  { 
     element=myStack.top(); 
     myStack.pop(); 
     cout<<element<<"--> -1\n"; 
  } 
} 
 
int main() 
{ 
   int a[]={4,25,2,5}; 
   int n=sizeof(a)/sizeof(a[0]); 
   printNGE(a,n); 
   return 0; 
}