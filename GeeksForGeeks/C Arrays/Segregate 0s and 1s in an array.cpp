 /* Segregate 0s and 1s in an array 
     [February 28, 2010] */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     int arr[]={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
     int size=sizeof(arr)/sizeof(arr[0]);
  
     void segregate0and1()
  {
        int zero,one;
        zero=0;
        one=0;
        for(int i=1;i<size;++i)
        {
           if(arr[i]==1)
              one=i;
           else if(arr[i]==0)
           {    swap(arr[zero+1],arr[i]); zero++; }
        }
  }
  
     int main()
  {
        segregate0and1();
        for(int i=0;i<size;++i)
           cout<<arr[i];
        return 0;
  }