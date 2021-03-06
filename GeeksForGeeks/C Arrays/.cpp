/* Array Rotation (The Reversal Algorithm) 
[November 10,2009] */
 
#include<bits/stdc++.h> 
using namespace std; 
 
void reverseArray(int a[],int start,int end) 
{ 
   int temp=0; 
   while(start<end) 
  { 
     temp=a[start]; 
     a[start]=a[end]; 
     a[end]=temp; 
     start++; 
     end--; 
  } 
} 
 
void leftRotate(int a[],int n,int d) 
  { 
   reverseArray(a,0,d-1); 
   reverseArray(a,d,n-1); 
   reverseArray(a,0,n-1); 
  } 
 
int main() 
  { 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n,d; 
   cin>>t; 
   while(t--) 
    { 
     cin>>n; 
     cin>>d; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     leftRotate(a,n,d); 
     for(int i=0;i<n;++i) 
       cout<<a[i]<<" "; 
     cout<<"\n"; 
    } 
   return 0; 
  } 