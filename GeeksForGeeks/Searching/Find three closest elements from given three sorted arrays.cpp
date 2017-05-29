/* Find three closest elements from given three sorted arrays 
[October 9, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void findClosest(int a[],int b[],int c[],int p,int q,int r) 
{ 
   int difference=INT_MAX; 
   int res_i=0,res_j=0,res_k=0; 
   
   int i=0,j=0,k=0; 
   while(i<p&&j<q&&k<r) 
  { 
     int minimum=min(a[i],min(b[j],c[k])); 
     int maximum=max(a[i],max(b[j],c[k])); 
     
     if(maximum-minimum<difference) 
    { 
       difference=maximum-minimum; 
       res_i=i;res_j=j;res_k=k; 
    } 
     
     if(difference==0) 
       break; 
       
     if(minimum==a[i]) i++; 
     else if(minimum==b[j]) j++; 
     else k++; 
  } 
   cout<<a[res_i]<<" "<<b[res_j]<<" "<<c[res_k]; 
} 
 
int main() 
{ 
    int a[] = {1, 4, 10}; 
    int b[] = {2, 15, 20}; 
    int c[] = {10, 12}; 
  
    int p = sizeof a / sizeof a[0]; 
    int q = sizeof b / sizeof b[0]; 
    int r = sizeof c / sizeof c[0]; 
  
    findClosest(a, b, c, p, q, r); 
    return 0; 
} 