/* Find a sorted subsequence of size 3 in linear time    [Amazon Interview Question] 
[June 8, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void find3Numbers(int a[],int n) 
{ 
   int min=0,max=n-1; 
   
   int *smaller=new int[n]; 
   smaller[0]=-1; 
   
   for(int i=1;i<n;++i) 
  { 
     if(a[i]<a[min]) 
    { smaller[i]=-1; min=i; } 
     else smaller[i]=min; 
  } 
   
   int *greater=new int[n]; 
   greater[n-1]=-1; 
   
   for(int i=n-2;i>=0;--i) 
  { 
     if(a[i]>a[max]) 
    { greater[i]=-1; max=i; } 
     else greater[i]=max; 
  } 
   
   for(int i=0;i<n;++i) 
  { 
     if(smaller[i]!=-1&&greater[i]!=-1) 
       cout<<a[smaller[i]]<<" "<<a[i]<<" "<<a[greater[i]]<<"\n"; 
     return; 
  } 
   
   cout<<"No such Triplet\n"; 
   
   delete[] smaller; 
   delete[] greater; 
   
   return; 
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
     find3Numbers(a,n); 
  } 
   return 0; 
} 