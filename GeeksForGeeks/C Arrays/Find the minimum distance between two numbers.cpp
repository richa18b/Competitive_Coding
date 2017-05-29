 /* Find the minimum distance between two numbers
  [June 24, 2011] */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     int minDistance(int a[],int n,int x,int y)
  {
        int minD=n,dist=n,k=0,pos[2];
        for(int i=0;i<n;++i)
     {
           if(a[i]==x||a[i]==y)
        {
              if(k>0)
           {
                 if(a[i]!=a[pos[k-1]])
              {    pos[k]=i; k++; }
           }
              else { pos[k]=i; k++; }
        }
        
           if(k==2) 
        {    
              (pos[1]>pos[0])? dist=pos[1]-pos[0]:dist=pos[0]-pos[1]; 
              k=0; 
        }
  
           if(dist<minD)
              minD=dist;
     }
        return minD;
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
           cout<<minDistance(a,n,x,y)<<"\n";
     }
        return 0;
  
  }