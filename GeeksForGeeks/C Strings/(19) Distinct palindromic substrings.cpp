/*  Find all distinct palindromic sub-strings of a given string
     [February 12, 2015] */
    
/* Note: Distinct - therefore, put all the palindromic substrings into a hash map and then print from it. */
  
     #include <iostream>
     #include <map>
     using namespace std;
  
     // Function to print all distinct palindrome sub-strings of s
     void palindromeSubStrs(string s)
  {
         int dp[s.size()][s.size()],st,end,i,j,len;
         map<string,bool> m;
         for(i=0;i<s.size();i++)
         {
         dp[i][i]=1;
         m[string(s.begin()+i,s.begin()+i+1)]=1;
         }
         for(i=0;i<s.size()-1;i++)
         if(s[i]==s[i+1])
         {
         dp[i][i+1]=1;
          m[str   ing(s.begin()+i,s.begin()+i+2)]=1;
         }
         else
         dp[i][i+1]=0;
         for(len=3;len<=s.size();len++)
         {
             for(st=0;st<=s.size()-len;st++)
             {
                 end=st+len-1;
                 if(s[st]==s[end]&&dp[st+1][end-1])
                 {
                 dp[st][end]=1;
                 m[string(s.begin()+st,s.begin()+end+1)]=1;
                 }
                 else
                 dp[st][end]=0;
             }
         }
       
         map<string,bool>::iterator it=m.begin();
         
         for(;it!=m.end();it++)
         cout<<it->first<   <endl;
  }
     // Driver program
     int main()
  {
        palindromeSubStrs("abaaa");
        return 0;
  }