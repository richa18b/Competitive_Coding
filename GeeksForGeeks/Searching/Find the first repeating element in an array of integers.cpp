/* Find the first repeating element in an array of integers 
[September 15, 2014] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void repeatingElement(int a[],int n) 
{ 
   map<int,int> m; 
   map<int,int>::iterator it; 
   for(int i=0;i<n;++i) 
  { 
     if(m.find(a[i])!=m.end()) 
    { it=m.find(a[i]); it->second++;} 
     else m.insert(pair<int,int> (a[i],1)); 
  } 
   
   for(int i=0;i<n;++i) 
  { 
     it=m.find(a[i]); 
     if(it->second>1) 
    { cout<<it->first; break; } 
  } 
} 
 
int main() 
{ 
   int a[]={6, 10, 5, 4, 9, 120, 4, 6, 10}; 
    int n=sizeof(a)/sizeof(a[0]); 
     
    repeatingElement(a,n); 
     
   return 0; 
} 