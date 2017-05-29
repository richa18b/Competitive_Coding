/* Maximum sum such that no two elements are adjacent 
[November 26, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n,a[100]; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     for(int i=1;i<=n;++i) 
       cin>>a[i]; 
     a[0]=0; 
     for(int i=2;i<=n;++i) 
       a[i]=max(a[i]+a[i-2],a[i-1]); 
     cout<<a[n]<<"\n"; 
  } 
   return 0; 
} 