/* Print unique rows in a given boolean matrix 
[September 28, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 4 
#define COL 5 
 
int temp[ROW]; 
 
bool occurredEarlier(int x,int pos) 
{ 
   for(int i=0;i<pos;++i) 
     if(temp[i]==x) 
     return true; 
     
   return false; 
} 
 
void printUniqueRows(int a[][COL]) 
{ 
   for(int i=0;i<ROW;++i) 
  { 
     int dec=0,base=1; 
     for(int j=COL-1;j>=0;--j) 
    { 
       if(a[i][j]==1) 
         dec+=base; 
       base*=2; 
    } 
     temp[i]=dec; 
  } 
   
   for(int i=0;i<ROW;++i) 
  { 
     if(!occurredEarlier(temp[i],i)) 
    { 
       for(int j=0;j<COL;++j) 
         cout<<a[i][j]<<" "; 
       cout<<"\n"; 
    } 
  } 
} 
 
int main() 
{ 
   int a[ROW][COL] = {{0, 1, 0, 0, 1}, 
                  {1, 0, 1, 1, 0}, 
                       {0, 1, 0, 0, 1}, 
                       {1, 0, 1, 0, 0} 
                      }; 
   printUniqueRows(a); 
   return 0; 
} 