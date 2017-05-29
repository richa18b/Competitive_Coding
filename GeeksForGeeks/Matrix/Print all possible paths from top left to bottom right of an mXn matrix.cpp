/* Print all possible paths from top left to bottom right of a mXn matrix 
[December 22,2013] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
/* a:  Pointer to the starting of mXn matrix 
   i, j: Current position of the robot (For the first call use 0,0) 
   pi:   Next index to be filled in path array 
   *path[0..pi-1]: The path traversed by robot till now (Array to hold the 
                  path need to have space for at least m+n elements) */ 
 
void printAllPathsUtil(int *a,int i,int j,int m,int n,int *path,int pi) 
{ 
   // Reached the bottom of the matrix so we are left with only option to move right 
   if(i==m-1) 
  { 
     for(int k=j;k<n;++k) 
       path[pi+k-j]=*((a+i*n)+k); 
     for(int l=0;l<pi+n-j;++l) 
       cout<<path[l]<<" "; 
     cout<<"\n"; 
     return; 
  } 
   
// Reached the right corner of the matrix, we are left with only the downward movement 
   if(j==n-1) 
  { 
     for(int k=i;k<m;++k) 
       path[pi+k-i]=*((a+k*n)+j); 
     for(int l=0;l<pi+m-i;++l) 
       cout<<path[l]<<" "; 
     cout<<"\n"; 
     return; 
  } 
 
   // Add the current cell to the path being generated 
   path[pi]=*((a+i*n)+j); 
 
   // Print all the paths that are possible after moving down 
   printAllPathsUtil(a,i+1,j,m,n,path,pi+1); 
 
   // Print all the paths that are possible after moving right 
   printAllPathsUtil(a,i,j+1,m,n,path,pi+1); 
 
   // Print all the paths that are possible after moving diagonal 
       // printAllPathsUtil(mat, i+1, j+1, m, n, path, pi + 1); 
} 
 
void printAllPaths(int *a,int m,int n) 
{ 
   int *path=new int[m+n]; 
   printAllPathsUtil(a,0,0,m,n,path,0); 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,m,n; 
   cin>>t; 
   while(t--) 
  { 
     cin>>m>>n; 
     int a[m][n]; 
     for(int i=0;i<m;++i) 
       for(int j=0;j<n;++j) 
         cin>>a[i][j]; 
     printAllPaths(*a,m,n); 
  } 
   return 0; 
} 