/* Given an array A[] and a number x, check for pair in A[] with sum as x 
[Amazon Question, Care-Wale Queation] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n,x,flag; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     cin>>x; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     sort(a,a+n); 
     for(int i=0;i<n;++i) 
    { 
       for(int j=i+1;j<n;++j) 
         if((a[j]==x-a[i]||a[j]==a[i]-x)) 
           cout<<a[i]<<" "<<a[j]; 
    } 
  } 
   return 0; 
} 
 
//Better Solution: O(n) complexity (Using Hashing) 
 
#include <stdio.h> 
#define MAX 100000 
  
void printPairs(int arr[], int arr_size, int sum) 
{ 
  int i, temp; 
  bool binMap[MAX] = {0}; /*initialize hash map as 0*/ 
  
  for (i = 0; i < arr_size; i++) 
  { 
      temp = sum - arr[i]; 
      if (temp >= 0 && binMap[temp] == 1) 
         printf("Pair with given sum %d is (%d, %d) \n",  
                 sum, arr[i], temp); 
      binMap[arr[i]] = 1; 
  } 
} 
  
/* Driver program to test above function */ 
int main() 
{ 
    int A[] = {1, 4, 45, 6, 10, 8}; 
    int n = 16; 
    int arr_size = sizeof(A)/sizeof(A[0]); 
  
    printPairs(A, arr_size, n); 
  
    getchar(); 
    return 0; 
}