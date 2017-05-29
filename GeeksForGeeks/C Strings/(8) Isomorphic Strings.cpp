/* Check if two given strings are isomorphic to each other 
     [September 26, 2015] */ 
  
     #include<bits/stdc++.h>
     using namespace std;
  
     #define MAX_CHARS 256
  
     bool areIsomorphic(string s1,string s2)
  {
         if(s1.length()!=s2.length())
             return false;
             
         bool marked[MAX_CHARS]={false};
         
         int map[MAX_CHARS];
         memset(map,-1,sizeof map);
         
         for(int i=0;i<s1.length();++i)
         {
             if(map[s1[i]]==-1)
             {
                 if(marked[s2[i]]==true)
                     return false;
                            
                 marked[s2[i]]=true;
                 
                 map[s1[i]]=s2[i];
             }
             
             if(map[s1[i]]!=s2[i])
                 return false;
         }
         return true;
  }
  
     int main()
  {
         ios_base::sync_with_stdio(0);
         cin.tie(0);
         int t;
         cin>>t;
         string s1,s2;
         while(t--)
         {
             cin>>s1;
             cin>>s2;
             cout<<areIsomorphic(s1,s2)<<"\n";
         }
         return 0;
  }