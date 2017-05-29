/* Inplace M x N size matrix transpose 
[October 16, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define HASH_SIZE 128 
 
void print2DArray(int *a,int r,int c) 
{ 
   for(int i=0;i<r;++i) 
  { 
     for(int j=0;j<c;++j) 
       cout<<*(a+i*c+j)<<"    "; 
     cout<<"\n"; 
  } 
   cout<<"\n\n"; 
} 
 
void inplaceTranspose(int *a,int r,int c) 
{ 
   int t,next,cycleBegin; 
   
   bitset<HASH_SIZE> b; 
   b.reset(); 
   int size=r*c-1; 
   b[0]=b[size]=1; 
   
   int i=1; 
   while(i<size) 
  { 
     cycleBegin=i; 
     t=a[i]; 
     do 
    { 
       next=(i*r)%size; 
       swap(a[next],t); 
       b[i]=1; 
       i=next; 
    }while(i!=cycleBegin); 
     
     for(i=1;i<size&&b[i];++i); 
     
     cout<<"\n"; 
  } 
} 
 
int main() 
{ 
   int r=5,c=6; 
   int n=r*c; 
   
   int *a=new int[n]; 
   for(int i=0;i<n;++i) 
     a[i]=i+1; 
     
   print2DArray(a,r,c); 
   inplaceTranspose(a,r,c); 
   print2DArray(a,c,r); 
   return 0; 
} 