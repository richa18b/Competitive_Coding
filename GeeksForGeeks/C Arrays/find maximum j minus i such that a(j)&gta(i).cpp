#include<bits/stdc++.h> 
using namespace std; 
 
bool inc_elements(int a[],int n) 
{ 
   for(int i=0;i<n;++i) 
     if(a[i]<a[i-1]) 
       return false; 
   
   return true; 
} 
 
bool dec_elements(int a[],int n) 
{ 
   for(int i=0;i<n;++i) 
     if(a[i]>a[i-1]) 
       return false; 
   
   return true; 
} 
 
int maxDistance(int a[],int n) 
{ 
   if(inc_elements(a,n)) 
     return n-1; 
     
   if(dec_elements(a,n)) 
     return -1; 
     
   int j=n-1,dist=0,maxD=0; 
   for(int i=0;i<n-1;++i) 
  { 
     while(j>i) 
    { 
       if(a[j]>a[i]) 
         dist=j-i; 
       if(dist>maxD) 
         maxD=dist; 
       j--; 
    } 
     j=n-1; 
  } 
   return maxD; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,n,x,y; 
   cin>>t; 
   while(t--) 
  { 
     cin>>n; 
     cin>>x>>y; 
     int a[n]; 
     for(int i=0;i<n;++i) 
       cin>>a[i]; 
     cout<<maxDistance(a,n)<<"\n"; 
  } 
   return 0; 
} 
 
//Efficient Solution: Time Complexity O(n) 
 
#include <stdio.h> 
 
int max(int x, int y) { return x > y? x : y; } 
int min(int x, int y){ return x < y? x : y; } 
  
int maxIndexDiff(int arr[], int n) 
{ 
    int *LMin = (int *)malloc(sizeof(int)*n); 
    int *RMax = (int *)malloc(sizeof(int)*n); 
  
   /* Construct LMin[] such that LMin[i] stores the minimum value 
       from (arr[0], arr[1], ... arr[i]) */ 
    LMin[0] = arr[0]; 
    for (i = 1; i < n; ++i) 
        LMin[i] = min(arr[i], LMin[i-1]); 
  
    /* Construct RMax[] such that RMax[j] stores the maximum value 
       from (arr[j], arr[j+1], ..arr[n-1]) */ 
    RMax[n-1] = arr[n-1]; 
    for (j = n-2; j >= 0; --j) 
        RMax[j] = max(arr[j], RMax[j+1]); 
  
    /* Traverse both arrays from left to right to find optimum j - i 
        This process is similar to merge() of MergeSort */ 
    int i = 0, j = 0, maxDiff = 0; 
    while (j < n && i < n) 
    { 
        if (LMin[i] < RMax[j]) 
        { 
            maxDiff = max(maxDiff, j-i); 
            j = j + 1; 
        } 
        else 
            i = i+1; 
    } 
  
    return maxDiff; 
} 
  
/* Driver program to test above functions */ 
int main() 
{ 
    int arr[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int maxDiff = maxIndexDiff(arr, n); 
    printf("\n %d", maxDiff); 
    getchar(); 
    return 0; 
} 