/* Print a given matrix in spiral form 
[August 20, 2011] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define row 4 
#define col 4 
 
void printSpiral(int a[][col]) 
{ 
   int top=0,bottom=row-1,left=0,right=col-1; 
   int i=top,j=left; 
   int count=0; 
   
   while(count!=row*col) 
  { 
     cout<<a[i][j]<<" "; 
     count++; 
     
     if(i==top&&j<right) 
    { 
       if(++j==right) 
         top++; 
    } 
     
     else if(j==right&&i<bottom) 
    { 
       if(++i==bottom) 
         right--; 
    } 
     
     else if(i==bottom&&j>left) 
    { 
       if(--j==left) 
         bottom--; 
    } 
     
     else if(j==left&&i>top) 
    { 
       if(--i==top) 
         left++; 
    } 
  } 
} 
 
int main() 
{ 
   int a[row][col]={ {1,2,3,4}, 
           {5,6,7,8}, 
           {9,10,11,12}, 
           {13,14,15,16} }; 
   printSpiral(a); 
   return 0; 
} 