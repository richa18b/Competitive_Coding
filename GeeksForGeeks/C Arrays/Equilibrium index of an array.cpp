/* Equilibrium index of an array
     [January 7, 2011] */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     int equilibriumIndex(int a[],int n)
  {
        int i=1,sum1=a[0],sum2=a[n-1];
        while(i<n)
        {
          if(sum1!=sum2)
          {    sum1+=a[i]; sum2+=a[n-1-i];    i++; }
          else    break;
        }
        return i;
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
           sort(a,a+n);
           cout<<equilibriumIndex(a,n)<<"\n";
     }
        return 0;
  }