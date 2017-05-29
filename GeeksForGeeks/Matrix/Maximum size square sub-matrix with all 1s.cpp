/* Maximum size square sub-matrix with all 1s 
[April 4, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 6 
#define COL 5 
 
int findMax(int temp[][COL]) 
{ 
   int max=temp[0][0]; 
   for(int i=0;i<ROW;++i) 
     for(int j=0;j<COL;++j) 
       if(temp[i][j]>max) 
         max=temp[i][j]; 
   
   return max; 
} 
 
int min(int a,int b,int c) 
{ 
   if(a<b) 
  { return (a<c)? a:c; } 
   else 
  { return (b<c)? b:c; } 
} 
 
void maxSubMatrixOfOnes(int a[][COL]) 
{ 
   int s[ROW][COL]; 
   s[0][0]=a[0][0]; 
   
   for(int i=1;i<ROW;++i) 
     s[i][0]=a[i][0]; 
   
   for(int j=1;j<COL;++j) 
     s[0][j]=a[0][j]; 
     
   for(int i=1;i<ROW;++i) 
     for(int j=1;j<COL;++j) 
    { 
       if(a[i][j]==1) 
         s[i][j]=min(s[i-1][j],s[i][j-1],s[i-1][j-1])+1; 
       else s[i][j]=0; 
    } 
   
   int max=findMax(s); 
   
   for(int i=0;i<max;++i) 
  { 
     for(int j=0;j<max;++j) 
       cout<<"1 "; 
     cout<<"\n"; 
  } 
} 
 
int main() 
{ 
   int a[][COL]= {{0, 1, 1, 0, 1},  
                   {1, 1, 0, 1, 0},  
                   {0, 1, 1, 1, 0}, 
                   {1, 1, 1, 1, 0}, 
                   {1, 1, 1, 1, 1}, 
                   {0, 0, 0, 0, 0}}; 
    maxSubMatrixOfOnes(a); 
   return 0; 
} 