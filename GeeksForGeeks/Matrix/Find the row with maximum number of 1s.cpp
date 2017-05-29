/* Find the row with maximum number of 1s 
[September 23, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 4 
#define COL 4 
 
int maxOnesRow(int a[][COL]) 
{ 
   int count,max_count=0,pos; 
   for(int i=0;i<ROW;++i) 
  { 
     count=0; 
     for(int j=0;j<COL;++j) 
       if(a[i][j]==1) 
         count++; 
         
     if(count>max_count) 
    { max_count=count; pos=i; } 
  } 
   return pos; 
} 
 
int main() 
{ 
   int a[ROW][COL] = {{0, 1, 1, 1}, 
                  {0, 0, 1, 1}, 
                       {1, 1, 1, 1}, 
                       {0, 0, 0, 0} 
                      }; 
   cout<<maxOnesRow(a); 
   return 0; 
} 