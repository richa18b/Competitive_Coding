/* Search an element in a sorted and rotated array 
[August 15, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int search(int a[],int l,int h,int x) 
{ 
   if(l>h) 
     return -1; 
   
   int mid=(l+h)/2; 
   
   if(x==a[mid]) 
     return mid; 
   
   if(a[l]<=a[mid]) //if a[0...mid] is sorted 
  { 
     if(x>=a[l]&&x<=a[mid]) 
       return search(a,l,mid-1,x); 
     
     return search(a,mid+1,h,x); 
  } 
   
   //if a[0...mid] is not sorted, then a[mid+1...h] must be sorted 
   if(x>=a[mid]&&x<=a[h]) 
     return search(a,mid+1,h,x); 
     
   return search(a,l,mid-1,x); 
} 
 
int main() 
{ 
   int a[]={4, 5, 6, 7, 8, 9, 1, 2, 3}; 
   int n=sizeof(a)/sizeof(a[0]); 
   int key=6; 
   int ans=search(a,0,n-1,key); 
   if(ans==-1) 
     cout<<"Element not found!"; 
   else cout<<"Element found at index "<<ans; 
   return 0; 
} 