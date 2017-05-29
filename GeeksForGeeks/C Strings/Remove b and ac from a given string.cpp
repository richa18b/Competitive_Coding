/* Remove b and ac from a given string  (Google Interview Question)
     [May 19, 2013] */

 #include<bits/stdc++.h>
 using namespace std;
  
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
             for(int i=0;i<s.length();++i)
             {
                 if(s[i]=='b')
                    continue;
                 else if(s[i]=='a'&&s[i+1]=='c')
                    continue;
                 else if(s[i]=='c'&&s[i-1]=='a')
                    continue;
                    else cout<<s[i];
             } 
             Cout<<'\n';
         }
     return 0;
  }