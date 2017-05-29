/* Count smaller elements on right side 
[January 23, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void countSmallerElements(int a[],int n) 
{ 
   int countSmaller[n]; 
   memset(countSmaller,0,sizeof(countSmaller[0])*n); 
   
   for(int i=0;i<n;++i) 
     for(int j=i+1;j<n;++j) 
       if(a[j]<a[i]) 
         countSmaller[i]++; 
   
   for(int i=0;i<n;++i) 
     cout<<countSmaller[i]<<" "; 
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
     countSmallerElements(a,n); 
     cout<<"\n"; 
  } 
   return 0; 
} 