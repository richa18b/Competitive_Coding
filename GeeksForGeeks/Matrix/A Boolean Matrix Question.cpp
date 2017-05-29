/* A Boolean Matrix Question
   [October 18, 2011] */

#include<bits/stdc++.h>
using namespace std;
  
     #define m 2
     #define n 3
  
     bool present(int a[],int len,int x)
  {
        for(int i=0;i<len;++i)
           if(a[i]==x)
              return true;
     
        return false;
  }
  
     int main()
  {
        ios_base::sync_with_stdio();
        cin.tie(0);
        int a[m][n],k=0,l=0,f_i[m-1],f_j[n-1];
     
        for(int i=0;i<m;++i)
           for(int j=0;j<n;++j)
        {    
              cin>>a[i][j];
               if(a[i][j]==1)
               { 
                  f_i[k]=i; k++;
                   f_j[l]=j; l++; 
               }
        }
           
        for(int i=0;i<m;++i)
        {
              for(int j=0;j<n;++j)
           {
                 if(a[i][j]==0&&(present(f_i,k,i)||present(f_j,l,j)))
                    cout<<"1"<<" ";
                 else cout<<a[i][j]<<" ";
           }
              cout<<"\n";
        }
        return 0;
  }