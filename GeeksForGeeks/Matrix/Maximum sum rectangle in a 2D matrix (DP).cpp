/* Dynamic Programming | Set 27 (Maximum sum rectangle in a 2D matrix) 
[February 27,2013] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define ROW 4 
#define COL 5 
 
int kadane(int *a,int *start,int *finish,int n) 
{ 
   int sum=0,max_sum=INT_MIN; 
   
   *finish=-1; 
   
   int local_start=0; 
   
   for(int i=0;i<n;++i) 
  { 
     sum+=a[i]; 
     if(sum<0) 
    { sum=0; local_start=i+1; } 
     else if(sum>max_sum) 
    { 
       max_sum=sum; *start=local_start; *finish=i; 
    } 
  } 
   
   if(*finish!=-1) 
     return max_sum; 
     
   max_sum=a[0]; 
   *start=*finish=0; 
   
   for(int i=0;i<n;++i) 
     if(a[i]>max_sum) 
    { max_sum=a[i]; *start=*finish=i; } 
       
   return max_sum; 
} 
 
void findMaxSum(int a[][COL]) 
{ 
   int left,right,finalLeft,finalRight,finalTop,finalBottom; 
   int temp[ROW],i,start,finish; 
   
   int sum,max_sum=0; 
   
   for(left=0;left<COL;++left) 
  { 
     memset(temp,0,sizeof(temp)); 
     for(right=left;right<COL;++right) 
    { 
       for(i=0;i<ROW;++i) 
         temp[i]+=a[i][right]; 
         
       sum=kadane(temp,&start,&finish,ROW); 
       
       if(sum>max_sum) 
      { 
         max_sum=sum; 
         finalLeft=left; 
         finalRight=right; 
         finalTop=start; 
         finalBottom=finish; 
      } 
    } 
  } 
   
   cout<<"Maximum sum rectangle:\n"; 
   for(int k=finalLeft;k<=finalRight;++k) 
  { 
     for(int l=finalTop;l<=finalBottom;++l) 
       cout<<a[k][l]<<" "; 
     cout<<"\n"; 
  } 
   cout<<"Maximum sum: "<<max_sum; 
} 
 
int main() 
{ 
   int a[ROW][COL] = {{1, 2, -1, -4, -20}, 
                       {-8, -3, 4, 2, 1}, 
                       {3, 8, 10, 1, 3}, 
                       {-4, -1, 1, 7, -6} 
                      }; 
    findMaxSum(a); 
   return 0; 
} 