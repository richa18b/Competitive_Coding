/* Online algorithm for checking palindrome in a stream (Used Rabin-Karp Algorithm) 
[May 14, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define d 256 
#define q 103 
 
void checkPalindromes(char s[]) 
{ 
   int N=strlen(s); 
   
   printf("%c Yes\n", s[0]); 
   
   if(N==1) 
     return; 
     
   int firstr=s[0]%q; 
   int second=s[1]%q; 
     
   int h=1,i,j; 
   
   for(i=1;i<N;++i) 
  { 
     if(firstr==second) 
    { 
       for(j=0;j<i/2;++j) 
         if(s[j]!=s[i-j]) 
           break; 
       (j==i/2)? printf("%c Yes\n", s[i]) : printf("%c No\n", s[i]); 
    } 
     else printf("%c No\n", s[i]); 
     
     if(i!=N-1) 
    { 
       if(i%2==0) 
      { 
         h=(h*d)%q; 
         firstr=(firstr+h*s[i/2])%q; 
         
         second=(second*d+s[i+1])%q; 
      } 
       else second=(d*(second+q-h*s[(i+1)/2])%q+s[i+1]%q); 
    } 
  } 
} 
 
int main() 
{ 
   char *txt="abcba"; 
   checkPalindromes(txt); 
   getchar(); 
   return 0; 
} 