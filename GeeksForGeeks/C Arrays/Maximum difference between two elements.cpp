/* Maximum difference between two elements such that larger element appears after the      smaller number 
[April 10, 2010] */    
 
#include<iostream> 
 using namespace std; 
      
    int maxDiff(int arr[], int size) 
    { 
        int max = arr[size-1], min = arr[size-1], max_diff = 0; 
        for(int i = size - 2; i >= 0; i--) 
        { 
            if(arr[i] > max) 
            { 
                max = arr[i]; 
                min = arr[i]; 
            } 
            else if(arr[i] < min) 
            { 
                min = arr[i]; 
                if(max - min > max_diff) 
                    max_diff = max - min; 
            } 
        } 
        return max_diff; 
    } 
      
    int main() 
    { 
        int arr[] = {8,9,10,1,2,7,9}; 
        int size = sizeof(arr)/sizeof(arr[0]); 
        printf("Maximum difference is %d \n",  maxDiff(arr, size)); 
        return 0; 
    }