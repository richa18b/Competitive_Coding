/* Divide a string in N equal parts 
[September 9, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
void output(string s,int n) 
{ 
   if(s.length()%n!=0) 
  {  
     cout<<s<<" cannot be divided into "<<n<<" equal parts!\n"; 
     return; 
  } 
   
   int part_size=s.length()/n; 
   for(int i=0;i<s.length();++i) 
  { 
     if(i%part_size==0) 
       cout<<"\n"; 
     cout<<s[i]; 
  } 
} 
 
int main() 
{ 
   int t,n; 
   string s; 
   cin>>t; 
   while(t--) 
  { 
     cin>>s; 
     cin>>n; 
     output(s,n); 
  } 
   return 0; 
} 