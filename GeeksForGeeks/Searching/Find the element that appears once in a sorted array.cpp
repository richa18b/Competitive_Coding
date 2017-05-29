/* Find the element that appears once in a sorted array 
[July 12, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void search(int a[],int l,int h) 
{ 
   if(l>h) 
     return; 
     
   if(l==h) 
  { cout<<a[l]; return; } 
     
   int mid=(l+h)/2; 
   
   if(mid%2==0) 
  { 
     if(a[mid]==a[mid+1]) 
       return search(a,mid+2,h); 
     
     return search(a,l,mid); 
  } 
   else 
  { 
     if(a[mid]==a[mid-1]) 
       return search(a,mid-2,h); 
       
     return search(a,l,mid-1); 
  } 
} 
 
int main() 
{ 
    int a[] = {1, 1, 2, 4, 4, 5, 5, 6, 6}; 
    int n = sizeof a / sizeof a[0]; 
    search(a,0,n-1); 
    return 0; 
} 