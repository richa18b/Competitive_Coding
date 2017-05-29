/* Shortest Superstring Problem 
[July 4, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int findOverlappingPair(string s1,string s2,string &str) 
{ 
   int m=s1.length(); 
   int n=s2.length(); 
   int max=INT_MIN; 
   
   for(int i=1;i<=min(m,n);++i) 
  { 
     if(s1.compare(m-i,i,s2,0,i)==0) 
    { 
       if(max<i) 
      { max=i; str=s1+s2.substr(i); } 
    } 
  } 
   
   for(int i=1;i<=min(m,n);++i) 
  { 
     if(s1.compare(0,i,s2,n-i,i)==0) 
    { 
       if(max<i) 
      { max=i; str=s2+s1.substr(i); } 
    } 
  } 
   return max; 
} 
 
string findShortestSuperstring(string arr[],int len) 
{ 
   while(len!=1) 
  { 
     int max=INT_MIN; 
     string resStr; 
     int l,r; 
     
     for(int i=0;i<len;++i) 
    { 
       for(int j=i+1;j<len;++j) 
      { 
         string str; 
         int res=findOverlappingPair(arr[i],arr[j],str);   
         
         if(max<res) 
        { max=res; resStr.assign(str); l=i;r=j; } 
      } 
    } 
     
     len--; 
     
     if(max==INT_MIN) 
       arr[0]+=arr[len]; 
     else 
    { arr[l]=resStr; arr[r]=arr[len]; } 
  } 
   return arr[0]; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,len; 
   cin>>t; 
   while(t--) 
  { 
     cin>>len; 
     string arr[len]; 
     for(int i=0;i<len;++i) 
       cin>>arr[i]; 
     cout<<findShortestSuperstring(arr,len)<<"\n"; 
  } 
   return 0; 
} 