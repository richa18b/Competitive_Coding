/* Print n x n spiral matrix using O(1) extra space 
[May 25, 2016] */ 
 
//Solution with O(n*n) extra space:
 
#include<bits/stdc++.h> 
using namespace std; 
 
void printSpiralMatrix(int n) 
{ 
   int top=0,bottom=n-1,left=0,right=n-1; 
   int i=top,j=left; 
   int count=n*n,a[n][n]; 
   
   while(count!=0) 
  { 
     a[i][j]=count; 
     count--; 
     
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
   
   for(int i=0;i<n;++i) 
    {for(int j=0;j<n;++j) 
       cout<<a[i][j]<<"    "; 
     cout<<"\n";} 
} 
 
int main() 
{ 
   int n; 
   cin>>n; 
   printSpiralMatrix(n); 
   return 0; 
} 
 
//Solution with O(1) extra space: 

#include<bits/stdc++.h> 
using namespace std; 
 
void printSpiralMatrix(int n) 
{ 
   for(int i=0;i<n;++i) 
  { 
     for(int j=0;j<n;++j) 
    { 
       int x; 
       x=min(min(i,j),min(n-1-i,n-1-j)); 
       if(i<=j)     //for upper right triangle matrix 
         cout<<(n-2*x)*(n-2*x)-(i-x)-(j-x)<<" "; 
       else     //for lower left triangle matrix 
         cout<<(n-2*x-2)*(n-2*x-2)+(i-x)+(j-x)<<" "; 
    } 
     cout<<"\n"; 
  } 
} 
 
int main() 
{ 
   int n; 
   cin>>n; 
   printSpiralMatrix(n); 
   return 0; 
} 