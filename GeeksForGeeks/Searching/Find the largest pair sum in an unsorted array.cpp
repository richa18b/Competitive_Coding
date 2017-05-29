/* Find the largest pair sum in an unsorted array 
[May 23, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
   int a[]={12, 34, 10, 6, 40}; 
   int n=sizeof a/sizeof a[0]; 
   
   sort(a,a+n); 
   cout<<a[n-1]+a[n-2]; 
   
   /* (OR) 
   int first,second; 
   if(a[0]>a[1]) 
  { first=a[0];  second=a[1]; } 
   else { first=a[1]; second=a[0]; } 
   for(int i=2;i<n;++i) 
  { 
     if(a[i]>first) 
    { 
       second=first; 
       first=a[i]; 
    } 
     else if(a[i]>second) 
       second=a[i]; 
  } 
   cout<<first+second;  
   */ 
   
   return 0; 
} 