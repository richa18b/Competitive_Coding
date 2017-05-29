/* Majority Element (Moore's Voting Algorithm) 
     [May 30, 2009]   */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     bool isMajority(int a[],int size,int cand)
  {
        int count=0;
        for(int i=0;i<size;++i)
           if(a[i]==cand)
              count++;
        if(count>(size/2))
           return true;
        else return false;
  }
  
     int findCandidate(int a[],int size)
  {
        int maj_index=0,count=1;
        for(int i=1;i<size;++i)
     {
           if(a[i]==a[maj_index])
              count++;
           else count--;
           if(count==0)
        {
              maj_index=i;
              count=1;
        }
     }
        return a[maj_index];
  }
  
     void printMajority(int a[],int size)
  {
        int cand=findCandidate(a,size);
        if(isMajority(a,size,cand))
           cout<<cand;
        else cout<<"No Majority Element";
  }
  
     int main()
  {
        int a[100],size;
        cin>>size;
        for(int i=0;i<size;++i)
           cin>>a[i];
         printMajority(a, s   ize);
         return 0;
  }