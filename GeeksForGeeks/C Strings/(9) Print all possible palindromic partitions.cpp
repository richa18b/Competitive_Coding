/* Given a string, print all possible palindromic partitions 
     [September 20, 2015] */
     
 #include<bits/stdc++.h>
 using namespace std;
  
     void palin(bool p[][100],string s,int n)
  {
        int i,d,j;
        for(i=0;i<n;++i)
           p[i][i]=1;
        for(d=2;d<=n;++d)
     {
           for(i=0;i<n;++i)
        {
              j=i+d-1;
              if(d==2)
           {
                 if(s[i]==s[j])
                    p[i][j]=1;
           }
              else if(s[i]==s[j]&&p[i+1][j-1])
                 p[i][j]=1;
              else p[i][j]=0;
        }
     }
  }
  
     void allpart(string s,int n,int j,bool p[][100],vector<string> v)
  {
        int k;
        if(j==n)
     {
           for(k=0;k<v.size();++k)
              cout<<v[k]<<" ";
           cout<<"\n";
           return;
     }
     
        for(k=j;k<n;++k)
     {
           if(p[j][k])
        {
              v.push_back(string(s.begin()+j,s.begin()+k+1));
              allpart(s,n,k+1,p,v);
              v.pop_back();
        }
     }
  }
  
     int main()
  {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t,n;
        string s;
        cin>>t;
        while(t--)
     {
           cin>>s;
           n=s.length();
           bool p[100][100]={0};
           vector<string> v;
           palin(p,s,n);
           allpart(s,n,0,p,v);
     }
        return 0;
  }



  
#include<bits/stdc++.h>
using namespace std;
  
     bool isPalindrome(string str, int len)
  {   
        int i,j;
        i=0;j=len-1;
        while(i<j)
           if(str[i++]!=str[j--])
              return false;
           
        return true;
  }
  
     void printAllPalindromicPartitions(string s)
  {
        string str;int m;
        for(int i=0;i<s.length();++i)
     {
           for(int j=i;j<s.length();++j)
        {      m=0;
              for(int k=i;k<=j;++k)
           {    str[m]=s[k]; m++; }
              if(isPalindrome(str,m))
           {
                 for(int    n=0;n<m;++n)
                    cout<<str[n]<<" ";
           }
              cout<<"\n";
        }
     }
  }
  
     int main()
  {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        string s;
        cin>>t;
        while(t--)
     {
           cin>>s;
           printAllPalindromicPartitions(s);
     }
        return 0;
  }