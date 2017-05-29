/* Leaders in an array 
[December 07, 2009] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool isLeader(int x,int arr[],int size) 
{ 
   for(int i=x+1;i<size;++i) 
     if(arr[x]<arr[i]) 
       return false; 
       
   return true; 
} 
 
int main() 
{ 
   ios_base::sync_with_stdio(0); 
   cin.tie(0); 
   int t,arr[100],size,k,res[100]; 
   cin>>t; 
   while(t--) 
  { 
     cin>>size; 
     for(int i=0;i<size;++i) 
       cin>>arr[i]; 
       
     memset(res,0,100); 
     res[0]=arr[size-1]; 
     k=1; 
     
     for(int i=size-2;i>=0;--i) 
       if(isLeader(i,arr,size)) 
      { res[k]=arr[i]; k++; } 
       
     for(int i=k-1;i>=0;--i) 
       cout<<res[i]<<" "; 
  } 
   return 0; 
} 
 
\ul\b Efficient Solution:\ulnone      O(n) complexity\ul\b 
\ulnone    #include <iostream> 
using namespace std; 
  
void printLeaders(int arr[], int size) 
{ 
    int max_from_right =  arr[size-1]; 
    cout << max_from_right << " "; 
      
    for (int i = size-2; i >= 0; i--) 
    { 
        if (max_from_right < arr[i]) 
        {            
            max_from_right = arr[i]; 
            cout << max_from_right << " "; 
        } 
    }     
} 
  
int main() 
{ 
    int arr[] = {16, 17, 4, 3, 5, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printLeaders(arr, n); 
    return 0; 
}     