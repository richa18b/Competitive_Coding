/* Check if array elements are consecutive 
[April 6, 2011] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool whetherConsecutive(int a[],int n) 
{ 
   int count=a[0]; 
   for(int i=1;i<n;++i) 
     if(a[i]!=++count) 
       return false; 
   
   return true; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     sort(a,a+n); 
     cout<<whetherConsecutive(a,n)<<"\n"; 
  } 
   return 0; 
} 