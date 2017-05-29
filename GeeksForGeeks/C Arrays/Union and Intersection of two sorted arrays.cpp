/* Union and Intersection of two sorted arrays 
[April 27, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void reqdUnion(int a[],int m,int b[],int n) 
{ 
   vector<int> v; 
   int binMap[100000]; 
   memset(binMap,0,100000); 
   
   for(int i=0;i<m;++i) 
  { 
     if(binMap[a[i]]!=1) 
       v.push_back(a[i]); 
     binMap[a[i]]=1; 
  } 
   vector<int>::iterator it; 
   for(int i=0;i<n;++i) 
  { 
     it=find(v.begin(),v.end(),b[i]); 
     if(it!=v.end()) 
       continue; 
     else v.push_back(b[i]); 
  } 
   
   sort(v.begin(),v.end()); 
   
   for(it=v.begin();it!=v.end();++it) 
     cout<<*it<<" "; 
     
   cout<<"\n"; 
} 
 
void reqdIntersection(int a[],int m,int b[],int n) 
{ 
   vector<int> v; 
   int binMap[100000]; 
   memset(binMap,0,100000); 
   
   for(int i=0;i<m;++i) 
  { 
     if(binMap[a[i]]!=1) 
       v.push_back(a[i]); 
     binMap[a[i]]=1; 
  } 
   
   vector<int>::iterator it; 
   for(int i=0;i<n;++i) 
  { 
     it=find(v.begin(),v.end(),b[i]); 
     if(it!=v.end()) 
       cout<<b[i]<<" "; 
  } 
   
   cout<<"\n"; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,m,n; 
   cin>>t; 
   while(t--) 
  { 
     cin>>m; 
     int a[m]; 
     for(int i=0;i<m;++i) 
       cin>>a[i]; 
     cin>>n; 
     int b[n]; 
     for(int i=0;i<n;++i) 
       cin>>b[i]; 
     reqdUnion(a,m,b,n); 
     reqdIntersection(a,m,b,n); 
  } 
} 