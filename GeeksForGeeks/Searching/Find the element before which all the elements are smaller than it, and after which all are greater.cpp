/* Find the element before which all the elements are smaller than it, and after which all are greater 
[October 24, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int findElement(int a[],int n) 
{ 
   int LMax[n],RMin[n]; 
   
   LMax[0]=a[0]; 
   for(int i=1;i<n;++i) 
  { 
     if(a[i]>LMax[i-1]) 
       LMax[i]=a[i]; 
     else LMax[i]=LMax[i-1]; 
  } 
       
   RMin[n-1]=a[n-1]; 
   for(int i=n-2;i>=0;--i) 
  { 
     if(a[i]<RMin[i+1]) 
       RMin[i]=a[i]; 
     else RMin[i]=RMin[i+1]; 
  } 
     
   for(int i=0;i<n;++i) 
     if(LMax[i]==RMin[i]) 
       return LMax[i]; 
} 
 
int main() 
{ 
   int a[]={5, 1, 4, 3, 6, 8, 10, 7, 9}; 
   int n=sizeof(a)/sizeof(a[0]); 
   cout<<findElement(a,n); 
   return 0; 
} 