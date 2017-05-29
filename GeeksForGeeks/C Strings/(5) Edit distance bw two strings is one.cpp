/* Check if edit distance between two strings is one 
     [November 17, 2015]  */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     void checkEditDistance(string s1,string s2)
  {
        int flag=0;
        int len1=s1.length();
        int len2=s2.length();
        if(len1-len2==0)
     {
           for(int i=0;i<len1;++i)
              if(s1[i]==s2[i])
                 flag++;
        
           if(flag==(len1)-1)
              cout<<"yes\n";
           else cout<<"no\n";
     }
        else if(len1-len2==1||len2-len1==1)
     {
           if(len1<len2)
        {
              for(int i=0;i<len1;++i)
                 if(s1[i]==s2[i])
                    flag++;
           
              if(fla   g==len1)
                 cout<<"yes\n";
              else cout<<"no\n";
        }
           else if(len2<len1)
        {
              for(int i=0;i<len2;++i)
                 if(s1[i]==s2[i])
                    flag++;
                 
              if(flag==len2)
                 cout<<"yes\n";
              else cout<<"no\n";
        }
     }
        else cout<<"no\n";
  }
  
     int main()
  {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        string s1,s2;
        cin>>t;
        while(t--)
     {
           cin>>s1;
           cin>>s2;
           checkEditDistance(s1,s2);
     }
        return 0;
  }
  
  