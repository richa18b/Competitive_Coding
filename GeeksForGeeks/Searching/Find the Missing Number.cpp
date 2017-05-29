/* Find the Missing Number 
[June 22, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int miss(int a[],int n) 
{ 
   for(int i=1;i<n;++i) 
     if(a[i]!=a[i-1]+1) 
       return a[i-1]+1; 
} 
 
int main() 
{ 
   int a[]={1,2,4,5,6}; 
   int n=sizeof(a)/sizeof(a[0]); 
   sort(a,a+n); 
   cout<<miss(a,n); 
   return 0; 
} 