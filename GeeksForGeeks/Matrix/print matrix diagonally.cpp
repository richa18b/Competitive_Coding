/* Print matrix diagonally 
[March 14, 2013] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define r 5 
#define c 4 
 
bool isValid(int i,int j) 
{ 
   if(i<0||i>=r||j<0||j>=c) 
     return false; 
     
   return true; 
} 
 
void printDiagonally(int a[][c]) 
{ 
   int i,j; 
   
   for(int k=0;k<r;++k) 
  { 
     cout<<a[k][0]<<" "; 
     i=k-1; 
     j=1; 
     
     while(isValid(i,j)) 
    { 
       cout<<a[i][j]<<" "; 
       i--; 
       j++; 
    } 
     cout<<"\n"; 
  } 
   
   for(int k=1;k<c;++k) 
  { 
     cout<<a[r-1][k]<<" "; 
     i=r-2; 
     j=k+1; 
     
     while(isValid(i,j)) 
    { 
       cout<<a[i][j]<<" "; 
       i--; 
       j++; 
    } 
     cout<<"\n"; 
  } 
} 
 
int main() 
{ 
   int a[][c] = {{1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}, 
        {17, 18, 19, 20} 
    }; 
    printDiagonally(a); 
   return 0; 
} 