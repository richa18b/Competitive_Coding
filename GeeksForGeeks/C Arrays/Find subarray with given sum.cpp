/* Find subarray with given sum   [Google Interview Question] 
[May 13, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool subarraySum(int a[],int n,int sum) 
{ 
   int curr_sum=a[0],start=0; 
   
   for(int i=1;i<n;++i) 
  { 
     while(curr_sum>sum&&start<i-1) 
    { curr_sum-=a[start]; start++; } 
     
     if(curr_sum==sum) 
    { cout<<"Required Subarray: "<<a[start]<<" to "<<a[i-1]<<"\n"; return true; } 
     else curr_sum+=a[i]; 
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
     cin>>x; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     if(!subarraySum(a,n,x)) 
       cout<<"No such subarray\n"; 
  } 
   return 0; 
} 