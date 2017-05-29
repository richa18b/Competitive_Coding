/* A matrix probability question 
[June 01, 2016] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int isSafe(int m,int n,int x,int y) 
{ 
   return (x>=0&&x<m&&y>=0&&y<n); 
} 
 
double findProbability(int m,int n,int x,int y,int N) 
{ 
   if(!isSafe(m,n,x,y)) 
     return 0.0; 
     
   if(N==0) 
     return 1.0; 
   
   double prob=0; 
   
   prob+=findProbability(m,n,x,y-1,N-1)*0.25; 
   prob+=findProbability(m,n,x-1,y,N-1)*0.25; 
   prob+=findProbability(m,n,x,y+1,N-1)*0.25; 
   prob+=findProbability(m,n,x+1,y,N-1)*0.25; 
   
   return prob; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int m,n,N,i,j; 
   cin>>m>>n; 
   cin>>i>>j; 
   cin>>N; 
   cout<<findProbability(m,n,i,j,N); 
   return 0; 
} 