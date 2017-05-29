/* Write a program to reverse an array or string 
[October 30, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void reverseArray(int a[],int n) 
{ 
   int start=0,end=n-1,temp=0; 
   while(start<end) 
  { 
     temp=a[start]; 
     a[start]=a[end]; 
     a[end]=temp; 
     start++; 
     end--; 
  } 
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
     reverseArray(a,n); 
     for(int i=0;i<n;++i) 
       cout<<a[i]<<" "; 
     cout<<"\n"; 
  } 
   return 0; 
} 