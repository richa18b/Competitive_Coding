/* Fibonacci Search 
[December 9, 2015] */    
 
 #include<bits/stdc++.h> 
 using namespace std; 
      
 int fibonaccianSearch(int a[],int n,int x) 
  { 
       int fibMm2=0; 
       int fibMm1=1; 
       int fibM=fibMm2+fibMm1; 
      
       while(fibM<x) 
      { 
         fibMm2=fibMm1; 
         fibMm1=fibM; 
         fibM=fibMm2+fibMm1; 
      } 
      
       int offset=-1; 
      
       while(fibM>1) 
      { 
         int i=min(offset+fibMm2,n-1); 
      
         if(x>a[i]) 
        { 
           fibM=fibMm1; 
           fibMm1=fibMm2; 
           fibMm2=fibM-fibMm1; 
           offset=i; 
        } 
      
         else if(x<a[i]) 
        { 
           fibM=fibMm2; 
           fibMm1=fibMm1-fibMm2; 
           fibMm2=fibM-fibMm1; 
        } 
      
         else return i; 
      } 
      
       if(fibMm1&&x==a[offset+1])   //comparing the last element with x (or) if the array              //consists of only one element 
         return offset+1; 
      
       return -1; 
    } 
      
    int main() 
    { 
       int a[]={10, 22, 35, 40, 45, 50, 80, 82, 
                     85, 90, 100}; 
        int n=sizeof(a)/sizeof(a[0]); 
        int x=85; 
        cout<<fibonaccianSearch(a,n,x); 
        return 0; 
    } 