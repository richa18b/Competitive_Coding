/* Transform One String to Another using Minimum Number of Given Operation  
[August 19, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define MAX_CHARS 256 
 
int canTransform(string s1,string s2) 
{ 
   int m=s1.length(); 
   int n=s2.length(); 
   
   if(m!=n) 
     return -1; 
     
   int count[MAX_CHARS]; 
   memset(count,0,sizeof count); 
   
   for(int i=0;i<m;++i) 
     count[s1[i]]++; 
   for(int i=0;i<n;++i) 
     count[s2[i]]--; 
   for(int i=0;i<MAX_CHARS;++i) 
     if(count[i]) 
       return -1; 
     
   int res=0;int i,j; 
   
   for( i=n-1, j=n-1;i>=0;) 
  { 
     while(i>=0&&s1[i]!=s2[j]) 
    { i--; res++; } 
       
     if(i>=0) 
    { i--; j--; } 
  } 
   return res; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t; 
   string s1,s2; 
   cin>>t; 
   while(t--) 
  { 
     cin>>s1; 
     cin>>s2; 
     cout<<canTransform(s1,s2)<<"\n"; 
  } 
   return 0; 
} 