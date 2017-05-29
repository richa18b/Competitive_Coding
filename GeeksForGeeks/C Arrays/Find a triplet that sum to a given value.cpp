/* Find a triplet that sum to a given value 
[Amazon Question, Care-Wale Question] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool printReqdTriplet(int a[],int n,int x) 
{ 
   int l,r; 
   for(int i=0;i<n-2;++i) 
  { 
     l=i+1; 
     r=n-1; 
     while(l<r) 
    { 
       if(a[i]+a[l]+a[r]==x) 
      { cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<"\n"; return true; } 
       else if(a[i]+a[l]+a[r]<x) 
         l++; 
       else r--; 
    } 
  } 
   return false; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n,x; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     int a[n]; 
     cin>>x; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     sort(a,a+n); 
     if(!printReqdTriplet(a,n,x)) 
       cout<<"No such pair\n"; 
  } 
   return 0; 
} 
