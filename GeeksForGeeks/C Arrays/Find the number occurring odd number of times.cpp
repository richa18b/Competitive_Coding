/* Find the Number Occurring Odd Number of Times 
[June 22, 2009] */ 
 
//Better Solution: O(n) time but takes extra space for hashing 
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool occurredEarlier(int x, int temp[],int n) 
{ 
   for(int i=0;i<n;++i) 
     if(temp[i]==x) 
       return true; 
       
   return false; 
} 
 
int countOddOccurrences(int a[],int n) 
{ 
   int k=0,temp[n]; 
   memset(temp,-1,n); 
   map<int,int> m; 
   for(int i=0;i<n;++i) 
  { 
     if(!occurredEarlier(a[i],temp,n)) 
    { m.insert(pair<int,int> (a[i],1)); temp[k]=a[i]; k++; } 
     else 
       m.find(a[i])->second++; 
  } 
   for(int i=0;i<k;++i) 
     if((m.find(a[i])->second)%2!=0) 
       return m.find(a[i])->first; 
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
     int res=countOddOccurrences(a,n); 
     cout<<res<<"\n"; 
  } 
   return 0; 
} 
 
//Best Solution: Using XOR b/w all elements. Takes O(n) time and constant space. 
 
#include<bits/stdc++.h> 
using namespace std; 
 
int countOddOccurrences(int a[],int n) 
{ 
   int res=0; 
   for(int i=0;i<n;++i) 
     res^=a[i]; 
   return res; 
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
     int res=countOddOccurrences(a,n); 
     cout<<res<<"\n"; 
  } 
   return 0; 
}