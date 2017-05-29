/* Find duplicates in O(n) time and O(1) extra space
     [January 4, 2011]*/
  
     #include<bits/stdc++.h>
     using namespace std;
  
     void findDuplicates(int a[],int n)
  {
        map<int,int> m;
        for(int i=0;i<n;++i)
     {
           if(m.find(a[i])!=m.end())
              cout<<a[i]<<" ";
           else m.insert(pair<int,int> (a[i],1));
     }
        cout<<"\n";
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
           findDuplicates(a,n);
     }
        return 0;
  }
  
// Solution with O(1) extra space:

     #include<bits/stdc++.h>
     using namespace std;
      
     void printRepeating(int a[], int size)
  {
       for (int i = 0; i < size; i++)
       {
         if (a[abs(a[i])] >= 0)
           a[abs(a[i])] = -a[abs(a[i])];
         else
           cout<<abs(a[i]));
       }
  }
      
     int main()
  {
       int a[] = {1, 2, 3, 1, 3, 6, 6};
       int n= sizeof(a)/sizeof(a[0]);
       printRepeating(a,n);
       getchar();
       return 0;
  }