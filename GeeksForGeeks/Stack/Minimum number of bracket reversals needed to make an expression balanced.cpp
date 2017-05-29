/* Minimum number of bracket reversals needed to make an expression balanced 
[October 27, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int minBracketReversals(char a[],int len) 
{ 
   if(len%2) 
     return -1; 
   
   stack<char> s; 
   for(int i=0;i<len;++i) 
  { 
     if(a[i]=='}'&&!s.empty()) 
    { 
       if(s.top()=='{') 
         s.pop(); 
       else s.push(a[i]); 
    } 
     else s.push(a[i]); 
  } 
   if(s.empty()) 
     return 0; 
   
   int m=0,n=0; 
   while(!s.empty()) 
  { 
     if(s.top()=='{') 
    { n++; s.pop(); } 
     else if(s.top()=='}') 
    { m++; s.pop(); } 
  } 
   return (((m+n)/2) + (n%2));//=ceil(m/2)+ceil(n/2) when m+n is even 
} 
 
int main() 
{   
   char a[]={  '}' , '{' , '{' , '}' , '}' , '{' , '{' , '{' }; 
   int n=sizeof(a)/sizeof(a[0]); 
   cout<<minBracketReversals(a,n); 
   return 0; 
} 