/* Merge an array of size n into another array of size m+n 
[September 05, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void merge(int a[],int b[],int m,int n) 
{ 
   int k=0,c[m+n],i=n,j=0; 
   while(k<m+n) 
  { 
     if(a[i]<b[j]||j==n) 
    { c[k]=a[i]; i++; } 
     else if(b[j]<a[i]||i==m+n) 
    { c[k]=b[j]; j++; } 
     k++; 
  } 
   for(i=0;i<m+n;++i) 
     cout<<c[i]<<" "; 
} 
 
void push_back_a(int a[],int size) 
{ 
   int last=size-1; 
   for(int i=size-1;i>=0;--i) 
  { 
     if(a[i]!=-1) 
    { swap(a[i],a[last]); last--; } 
  } 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n,m; 
   cin>>t; 
   while(t--) 
  { 
     cin>>m; 
     cin>>n; 
     int a[m+n];int b[n]; 
     for(int i=0;i<m+n;++i) 
       cin>>a[i]; 
     for(int i=0;i<n;++i) 
       cin>>b[i]; 
     push_back_a(a,m+n); 
     merge(a,b,m,n); 
     cout<<"\n"; 
  } 
   return 0; 
} 