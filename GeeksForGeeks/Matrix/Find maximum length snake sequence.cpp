/* Find maximum length snake sequence 
[June 02, 2016] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 4 
#define COL 4 
 
struct Point 
{ 
   int x,y; 
}; 
 
list<Point> findPath(int grid[ROW][COL],int a[ROW][COL],int i,int j) 
{ 
   list<Point> path; 
   Point pt={i,j}; 
   path.push_front(pt); 
   
   while(grid[i][j]!=0) 
  { 
     if(i>0&&(grid[i][j]-1==grid[i-1][j])) 
    { pt={i-1,j}; path.push_front(pt); i--; } 
     
     else if(j>0&&(grid[i][j]-1==grid[i][j-1])) 
    { pt={i,j-1}; path.push_front(pt); j--; } 
  } 
   return path; 
} 
 
void printMaxLenSnakeSeq(int a[][COL]) 
{ 
   int lookup[ROW][COL]; 
   memset(lookup,0,sizeof lookup); 
   
   int max_len=0,max_row=0,max_col=0; 
   
   for(int i=0;i<ROW;++i) 
  { 
     for(int j=0;j<COL;++j) 
    { 
       if(i||j) //except for a[0][0] 
      { 
         //look above 
         if(i>0&&abs(a[i-1][j]-a[i][j])==1) 
           lookup[i][j]=max(lookup[i][j],lookup[i-1][j]+1); 
           
         //look left 
         if(j>0&&abs(a[i][j-1]-a[i][j])==1) 
           lookup[i][j]=max(lookup[i][j],lookup[i][j-1]+1); 
           
         if(lookup[i][j]>max_len) 
        { max_len=lookup[i][j]; max_row=i; max_col=j; } 
      } 
    } 
  } 
   
   cout<<"Maximum length: "<<max_len<<"\n"; 
   
   list<Point> path=findPath(lookup,a,max_row,max_col); 
   
   cout<<"Snake Sequence:\n"; 
   for(auto it=path.begin();it!=path.end();++it) 
     cout<<a[it->x][it->y]<<" ("<<it->x<<","<<it->y<<")\n"; 
} 
 
int main() 
{ 
   int a[ROW][COL]={{9, 6, 5, 2}, 
                  {8, 7, 6, 5}, 
                  {7, 3, 1, 6}, 
                    {1, 1, 1, 7}, 
               }; 
    printMaxLenSnakeSeq(a); 
    return 0; 
} 