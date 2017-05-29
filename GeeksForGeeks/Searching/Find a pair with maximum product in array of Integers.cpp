/* Find a pair with maximum product in array of Integers 
[July 9, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool all_positive(int a[],int n) 
{ 
   for(int i=0;i<n;++i) 
     if(a[i]<0) 
       return false; 
   
   return true; 
} 
 
void maxProduct(int a[],int n) 
{ 
   if(all_positive(a,n)) 
     cout<<a[n-2]<<" "<<a[n-1]; 
   else 
  { 
     int maxP=max((a[0]*a[1]),(a[n-2]*a[n-1])); 
     if(maxP==a[0]*a[1]) 
       cout<<a[0]<<" "<<a[1]; 
     else cout<<a[n-2]<<" "<<a[n-1]; 
  } 
} 
 
int main() 
{ 
    int a[] = {-1, -3, -4, 2, 0, -5} ; 
    int n = sizeof a / sizeof a[0]; 
    sort(a,a+n); 
    maxProduct(a,n); 
    return 0; 
} 