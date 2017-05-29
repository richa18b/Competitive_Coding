/* Find the closest pair from two sorted arrays 
[November 11, 2014] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void findClosestPair(int a[],int b[],int m,int n,int x) 
{ 
   int di=INT_MAX; 
    int i=0,j=n-1,res_i=0,res_j=n-1; 
    while(i<m&&j>=0) 
    { 
       if(abs(a[i]+b[j]-x)<di) 
      { di=abs(a[i]+b[j]-x); res_i=i; res_j=j; } 
       else if(a[i]+b[j]<x) i++; 
       else j--; 
    } 
    cout<<a[res_i]<<" "<<b[res_j]; 
} 
 
int main() 
{ 
   int a1[]={1, 4, 5, 7}; 
    int a2[] = {10, 20, 30, 40}; 
        
    int m=sizeof(a1)/sizeof(a1[0]); 
    int n=sizeof(a2)/sizeof(a2[0]); 
     
    int x=32; 
    findClosestPair(a1,a2,m,n,x); 
     
   return 0; 
} 