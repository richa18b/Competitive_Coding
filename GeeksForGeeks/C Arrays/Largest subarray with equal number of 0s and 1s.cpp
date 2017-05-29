/* Largest subarray with equal number of 0s and 1s 
[June 26, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void reqdLargestSubarray(int a[],int n) 
{ 
   for(int i=0;i<n;++i) 
     a[i]= (a[i]==0)? -1:1; 
     
   map<int,int> m; 
   int maxLen=0,ending_index=-1,sum=0; 
   
   for(int i=0;i<n;++i) 
  { 
     sum+=a[i]; 
     
     if(sum==0) 
    { maxLen=i+1; ending_index=i; } 
     
     if(m.find(sum+n)!=m.end()) 
    { 
       if(maxLen<i-m[sum+n]) 
      { maxLen=i-m[sum+n]; ending_index=i; } 
    } 
     
     else m[sum+n]=i; 
  } 
   
   for(int i=0;i<n;++i) 
     a[i]= (a[i]==-1)? 0:1; 
     
   cout<<ending_index-maxLen+1<<","<<ending_index<<"\n"; 
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
     reqdLargestSubarray(a,n); 
  } 
   return 0; 
} 