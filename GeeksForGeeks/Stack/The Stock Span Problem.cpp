/* The Stock Span Problem 
[January 8, 2013] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void stockSpan(int a[],int n,int s[]) 
{ 
   stack<int> stack; 
   stack.push(0); 
   
   s[0]=1; 
   cout<<s[0]<<" "; 
   
   for(int i=1;i<n;++i) 
  { 
     while(!stack.empty()&&a[stack.top()]<=a[i]) 
       stack.pop(); 
     
     s[i]= (stack.empty())? i+1:i-stack.top(); 
     
     stack.push(i); 
     
     cout<<s[i]<<" "; 
  } 
} 
 
int main() 
{ 
   int a[]={100,80,60,70,60,75,85}; 
   int n=sizeof(a)/sizeof(a[0]); 
   int s[n]; 
   
   stockSpan(a,n,s); 
   return 0; 
} 