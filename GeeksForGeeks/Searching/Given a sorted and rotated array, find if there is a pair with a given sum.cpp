/* Given a sorted and rotated array, find if there is a pair with a given sum 
[March 30, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
   int a[]={11, 15, 6, 8, 9, 10}; 
   int n=sizeof a/sizeof a[0]; 
   int x=16; 
   int pos; 
   for(int i=0;i<n-1;++i) 
     if(a[i]>a[i+1]) 
    { pos=i;break; } 
   int l=(pos+1)%n,r=pos; 
   while(l!=r) 
  { 
     if(a[l]+a[r]==x) 
       break; 
     else if(a[l]+a[r]<x) 
       l=(l+1)%n; 
     else r=(n+r-1)%n; 
  } 
   cout<<a[l]<<" "<<a[r]; 
   return 0; 
} 