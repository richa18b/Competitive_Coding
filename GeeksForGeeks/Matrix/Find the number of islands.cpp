/* Find the number of islands 
[October 17, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 5 
#define COL 5 
 
int isSafe(int a[][COL],int row,int col,bool visited[][COL]) 
{ 
   return (row>=0)&&(row<ROW)&& 
        (col>=0)&&(col<COL)&& 
        (a[row][col]&&!visited[row][col]); 
} 
 
void DFS(int a[][COL],int r,int c,bool visited[][COL]) 
{ 
   static int rowNumber[]={-1.-1,-1,0,0,0,1,1,1}; 
   static int colNumber[]={-1,0,1,-1,0,1,-1,0,1}; 
   
   visited[r][c]=true; 
   
   for(int k=0;k<8;++k) 
     if(isSafe(a,r+rowNumber[k],c+colNumber[k],visited)) 
       DFS(a,r+rowNumber[k],c+colNumber[k],visited); 
} 
 
int countIslands(int a[][COL]) 
{ 
   bool visited[ROW][COL]; 
   memset(visited,0,sizeof(visited)); 
   
   int count=0; 
   
   for(int i=0;i<ROW;++i) 
     for(int j=0;j<COL;++j) 
       if(a[i][j]&&!visited[i][j]) 
      { DFS(a,i,j,visited); ++count; } 
   return count; 
} 
 
int main() 
{ 
   int a[][COL]= {  {1, 1, 0, 0, 0}, 
                {0, 1, 0, 0, 1}, 
                {1, 0, 0, 1, 1}, 
                {0, 0, 0, 0, 0}, 
                {1, 0, 1, 0, 1} 
             }; 
    cout<<countIslands(a); 
   return 0; 
} 