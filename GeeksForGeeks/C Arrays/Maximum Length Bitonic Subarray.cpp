/* Maximum Length Bitonic Subarray 
[December 14, 2011] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int inc_dec_elements(int arr[],int n) 
{ 
   int flag=-1; 
   for(int i=1;i<n;++i) 
  { 
     if(arr[i]<arr[i-1]) 
    { flag=-1; break; } 
     else flag=0; 
  } 
       
   for(int i=n-2;i>=0;--i) 
  { 
     if(arr[i]<arr[i+1]) 
    { flag=-1; break; } 
     else flag=1; 
  } 
   return flag; 
} 
 
int maxElement(int arr[],int len) 
{ 
   int max=arr[0]; 
   for(int i=0;i<len;++i) 
     if(arr[i]>max) 
       max=arr[i]; 
       
   return max; 
} 
 
int maxLenBitonicSubarray(int a[],int n) 
{ 
   if(n==1) 
     return 1; 
   
   int flag=inc_dec_elements(a,n); 
   if(flag==0||flag==1) 
     return n; 
     
   int inc[n],dec[n]; 
   
   inc[0]=1; 
   dec[n-1]=1; 
   
   for(int i=1;i<n;++i) 
  { 
     if(a[i]>a[i-1]) 
       inc[i]=inc[i-1]+1; 
     else inc[i]=1; 
  } 
   
   for(int i=n-2;i>=0;--i) 
  { 
     if(a[i]>a[i+1]) 
       dec[i]=dec[i+1]+1; 
     else dec[i]=1; 
  } 
   return maxElement(inc,n)+maxElement(dec,n)-1; 
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
     cout<<maxLenBitonicSubarray(a,n); 
     cout<<"\n"; 
  } 
   return 0; 
 
} 