/* The next palindrome */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
char a[1000000]; 
long long int n; 
 
bool all_nine() 
{ 
   for(int i=0;i<n;++i) 
     if(a[i]!='9') 
       return false; 
   return true; 
} 
 
int main() 
{ 
   int t,flag; 
   long long int mid,i; 
   cin>>t; 
   while(t--) 
  { 
     flag=0; 
     scanf("%s[^\n]",a); 
     n=strlen(a); 
     
     if(all_nine()) 
    { 
       a[0]='1'; 
       for(i=1;i<n;++i) 
         a[i]='0'; 
       a[n]='1'; 
       a[n+1]='\\0'; 
    } 
     else 
    { 
       for(i=0;i<n/2;++i) 
      { 
         if(a[i]>a[n-1-i]) 
           flag=1; 
         else if(a[i]<a[n-1-i]) 
           flag=-1; 
         
         a[n-1-i]=a[i]; 
      } 
       
       if(n%2==0) 
         mid=n/2-1; 
       else mid=n/2; 
       
       if(flag==0||flag==-1) 
      { 
         i=0; 
         while(a[mid-i]=='9') 
        { 
           a[mid-i]='0'; 
           a[n-1-mid+i]='0'; 
           i++; 
        } 
         
         a[mid-i]++; 
         a[n-1-mid+i]=a[mid-i]; 
      } 
    } 
     printf("%s\n",a); 
  } 
   return 0; 
} 