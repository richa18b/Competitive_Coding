/* Find position of an element in a sorted array of infinite numbers 
[February 22, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int binarySearch(int a[],int l,int h,int x) 
{ 
   if(l>h) 
     return -1; 
     
   int mid=(l+h)/2; 
   if(x==a[mid]) 
     return mid; 
   else if(x>a[mid]) 
     return binarySearch(a,mid+1,h,x); 
   else return binarySearch(a,l,mid-1,x); 
} 
 
int findPos(int a[],int x) 
{ 
   int l=0,h=1; 
   
   while(a[h]<x) 
  { l=h; h=2*h; } 
   
   return binarySearch(a,l,h,x); 
} 
 
int main() 
{ 
   int a[]={3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170}; 
   int ans=findPos(a,10); 
   if(ans!=-1) 
     cout<<ans; 
   else cout<<"element not found"; 
   return 0; 
} 