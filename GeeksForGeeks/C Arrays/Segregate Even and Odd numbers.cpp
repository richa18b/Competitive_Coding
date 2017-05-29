/* Segregate Even and Odd numbers 
[June 7, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void segregateEvenOdd(int a[],int n) 
{ 
   int even=0,odd=0; 
   for(int i=1;i<n;++i) 
  { 
     if(a[i]%2!=0) 
       odd=i; 
     else if(a[i]%2==0) 
    { swap(a[even+1],a[i]); even++; } 
  } 
   for(int i=0;i<n;++i) 
     cout<<a[i]<<" "; 
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
     segregateEvenOdd(a,n); 
     cout<<"\n"; 
  } 
   return 0; 
} 