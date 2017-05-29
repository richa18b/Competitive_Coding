/* Search an element in an array where difference between adjacent elements is 1 
[August 1, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int search(int a[],int n,int x) 
{ 
   int i=0,difference; 
   while(i<n) 
  { 
     if(x==a[i]) 
       return i; 
     difference=abs(a[i]-x); 
     i+=difference; 
  } 
   return -1; 
} 
 
int main() 
{ 
    int a[] = {8, 7, 6, 7, 6, 5, 4, 3, 2, 3, 4, 3}; 
    int n = sizeof a / sizeof a[0]; 
    int x=3; 
    cout<<search(a, n, x); 
    return 0; 
} 