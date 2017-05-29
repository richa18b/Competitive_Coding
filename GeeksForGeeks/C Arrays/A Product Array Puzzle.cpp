/* A Product Array Puzzle  [DE-Shaw Question]
[May 18, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void prodArrayPuzzle(int a[],int n) 
{ 
   
   int temp=1,prod[n]; 
   memset(prod,1,n); 
   
   for(int i=0;i<n;++i) 
  { 
     prod[i]=temp; 
     temp*=a[i]; 
  } 
   
   temp=1; 
   
   for(int i=n-1;i>=0;--i) 
  { 
     prod[i]*=temp; 
     temp*=a[i]; 
  } 
   
   for(int i=0;i<n;++i) 
     cout<<prod[i]<<" "; 
} 
 
int main() 
{ 
   int t,n; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     prodArrayPuzzle(a,n); 
     cout<<"\n"; 
  } 
   return 0; 
} 


