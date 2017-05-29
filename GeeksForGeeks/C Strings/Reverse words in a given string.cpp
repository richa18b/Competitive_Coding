/* Reverse words in a given string 
[May 3, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
   int t; 
   char s[1000]; 
   cin>>t; 
   while(t--) 
  { 
     scanf(" %[^\n]",s); 
     int temp=strlen(s); 
     for(int i=strlen(s)-1;i>=0;--i) 
    { 
       if(s[i]==' ') 
      { 
         for(int j=i;j<temp;j++) 
           cout<<s[j]; 
         temp=i; 
      } 
       if(i==0) 
      { 
         cout<<" "; 
         for(int j=i;j<temp;++j) 
           cout<<s[j]; 
      } 
    } 
  } 
   return 0; 
} 