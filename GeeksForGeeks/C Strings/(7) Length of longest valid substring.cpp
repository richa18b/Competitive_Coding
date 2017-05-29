/* Length of the longest valid substring
     [September 29, 2015]  */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     int findMaxLen(string s)
  {
        stack<int> stck;
        int result=0;
        stck.push(-1);
        for(int i=0;i<s.length();++i)
     {
           if(s[i]=='(')
              stck.push(i);
           else
        {
              stck.pop();
              if(!stck.empty())
                 result=max(result,i-stck.top());
              else stck.push(i);
        }
     }
        return result;
  }
  
     int main()
  {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        string s;
        while(t--)
     {
           cin>>s;
           int res=findMaxLen(s);
           c   out<<res<<"\n";
     }
        return 0;
  }