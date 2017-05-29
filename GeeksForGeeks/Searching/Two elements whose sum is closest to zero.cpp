/* Two elements whose sum is closest to zero 
[January 10, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
   int a[]={1, 60, -10, 70, -80, 85}; 
   int n=sizeof(a)/sizeof(a[0]); 
   
   sort(a,a+n); 
   
   int l=0,r=n-1,min=INT_MAX,num1_index=l,num2_index=r; 
   
   while(l<r) 
  { 
     int sum=a[l]+a[r]; 
     if(abs(sum)<min) 
    {  
       min=abs(sum);  
       num1_index=l;  
       num2_index=r;  
    } 
     
     (sum<0)? l++:r--; 
  } 
   cout<<a[num1_index]<<" "<<a[num2_index]; 
   return 0; 
} 