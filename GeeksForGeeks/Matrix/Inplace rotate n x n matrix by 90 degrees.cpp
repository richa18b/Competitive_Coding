/* Inplace rotate square matrix by 90 degrees */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define n 3 
 
void inPlaceRotate(int a[][n]) 
{ 
   for(int i=0;i<n;++i) 
     for(int j=0;j<n;++j) 
       if(i<j) 
         swap(a[i][j],a[j][i]); 
         
   for(int i=n-1;i>=0;--i) 
  { 
     for(int j=0;j<n;++j) 
       cout<<a[i][j]<<" "; 
     cout<<"\n"; 
  } 
} 
 
int main() 
{ 
   int a[][n]={ {1,2,3}, 
            {4,5,6}, 
            {7,8,9} }; 
   inPlaceRotate(a); 
   return 0; 
} 