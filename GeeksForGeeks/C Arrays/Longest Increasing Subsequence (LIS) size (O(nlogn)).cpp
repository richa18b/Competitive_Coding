/* Longest Increasing Subsequence Size (N log N) 
[May 18, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int ceilIndex(int t[],int l,int r,int x) 
{ 
   while(r-l>1) 
  { 
     int m=l+(r-l)/2; 
     if(x<=t[m]) 
       r=m; 
     else l=m; 
  } 
   return r; 
} 
 
int findLongestIncreasingSubsequenceSize(int a[],int n) 
{ 
   int *tailTable=new int[n]; 
   memset(tailTable,0,sizeof(tailTable[0])*n); 
   tailTable[0]=a[0]; 
   int len=1; 
   
   for(int i=1;i<n;++i) 
  { 
     if(a[i]<tailTable[0]) 
       tailTable[0]=a[i]; 
     else if(a[i]>tailTable[len-1]) 
       tailTable[len++]=a[i]; 
     else tailTable[ceilIndex(tailTable,-1,len-1,a[i])]=a[i]; 
  } 
   delete[] tailTable; 
   return len; 
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
     cout<<findLongestIncreasingSubsequenceSize(a,n)<<"\n"; 
  } 
   return 0; 
} 