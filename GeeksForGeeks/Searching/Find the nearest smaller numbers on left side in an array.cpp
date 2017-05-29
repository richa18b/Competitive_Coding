/* Find the nearest smaller numbers on left side in an array 
[June 15, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void findNearest(int a[],int n) 
{ 
   stack<int> s; 
   for(int i=0;i<n;++i) 
  { 
     while(!s.empty()&&s.top()>a[i]) 
       s.pop(); 
     
     if(s.empty()) 
       cout<<"_ "; 
     else cout<<s.top()<<" "; 
     
     s.push(a[i]); 
  } 
} 
 
int main() 
{ 
   int a[]={1, 6, 4, 10, 2, 5}; 
   int n=sizeof a/sizeof a[0]; 
   findNearest(a,n); 
   return 0; 
} 