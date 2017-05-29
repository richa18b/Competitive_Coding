/* Find the smallest positive number missing from an unsorted array 
[May 22, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int findSmallestMissingPositiveNo(int a[],int n) 
{ 
   bool binMap[n]; 
   memset(binMap,0,n); 
   
   for(int i=0;i<n;++i) 
  { 
     if(a[i]>0) 
    { 
       if(a[i]-1>0&&binMap[a[i]-1]!=1) 
         return (a[i-1]+1<=a[i]-1&&a[i-1]+1>0)? a[i-1]+1:a[i]-1; 
    } 
     binMap[a[i]]=1; 
  } 
   return a[n-1]+1; 
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
     cout<<findSmallestMissingPositiveNo(a,n)<<"\n"; 
  } 
   return 0; 
} 