/* Shortest path in a Binary Maze 
[May 16, 2016] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 9 
#define COL 10 
 
int rowNumber[]={0,-1,0,1}; 
int colNumber[]={-1,0,1,0}; 
 
int isValid(int x,int y) 
{ 
   return (x>=0)&&(x<ROW)&&(y>=0)&&(y<COL); 
} 
 
struct Point 
{ 
   int x,y; 
}; 
 
void BFSUtil(int a[][COL],bool visited[][COL],Point src,Point dest,int &min,int dist) 
{ 
   if(src.x==dest.x&&src.y==dest.y) 
  { 
     if(dist<min) 
       min=dist; 
       
     return; 
  } 
   
   for(int i=0;i<4;++i) 
  { 
     int r=src.x+rowNumber[i]; 
     int c=src.y+colNumber[i]; 
     
     if(isValid(r,c)&&a[r][c]==1&&!visited[r][c]) 
    { 
       Point p; 
       p.x=r; p.y=c; 
       visited[r][c]=true; 
       BFSUtil(a,visited,p,dest,min,dist+1); 
       visited[r][c]=false; 
    } 
  } 
} 
 
int BFS(int a[][COL],Point src,Point dest) 
{ 
   if(!a[src.x][src.y]||!a[dest.x][dest.y]) //if either the source or destination cell is 0 
     return INT_MAX; 
     
   bool visited[ROW][COL]; 
   memset(visited,false,sizeof visited); 
   
   visited[src.x][src.y]=true; 
   
   int min=INT_MAX; 
   
   BFSUtil(a,visited,src,dest,min,0); 
   return min; 
} 
 
int main() 
{ 
   int a[][COL]={ { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
                { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 }, 
                { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 }, 
                { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 }, 
                { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 }, 
                { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 }, 
                { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, 
                { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
                { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 } }; 
                 
   Point src={0,0}; 
   Point dest={3,4}; 
   
   int distance=BFS(a,src,dest); 
   
   if(distance!=INT_MAX) 
     cout<<"Shortest distance is "<<distance; 
   else cout<<"No shortest path exists"; 
   
   return 0; 
} 