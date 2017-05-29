/* Find the two numbers with odd occurrences in an unsorted array 
[May 24, 2012] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int convertToBinary(unsigned int n) 
{ 
    if (n / 2 != 0) 
        convertToBinary(n / 2); 
    return n%2; 
} 
 
void find2OddOccurrences(int a[],int n) 
{ 
   unsigned int res=0,num1=0,num2=0; 
   for(int i=0;i<n;++i) 
     res^=a[i]; 
   int last_digit=convertToBinary(res); 
   for(int i=0;i<n;++i) 
  { 
     if(last_digit==convertToBinary(a[i])) 
       num1^=a[i]; 
     else num2^=a[i]; 
  } 
   cout<<num1<<" and "<<num2<<"\n"; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     find2OddOccurrences(a,n); 
  } 
   return 0; 
} 