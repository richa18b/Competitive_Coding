/* Check if a given array can represent Preorder Traversal of Binary Search Tree 
[October 30, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool preOrderTraversalBST(int a[],int n) 
{ 
   stack<int> s; 
   int root=INT_MIN; 
   for(int i=0;i<n;++i) 
  { 
     if(a[i]<root) 
       return false; 
     
     while(!s.empty()&&a[i]>s.top()) 
    { 
       root=s.top(); 
       s.pop(); 
    } 
     
     s.push(a[i]);  
  } 
   return true; 
} 
 
int main() 
{ 
   int a[]={40,30,35,80,100}; 
   int n=sizeof(a)/sizeof(a[0]); 
   if(preOrderTraversalBST(a,n)) 
     cout<<"true"; 
   else cout<<"false"; 
   return 0; 
} 