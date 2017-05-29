/* Minimum number of palindromic subsequences to be removed to empty a binary string 
     [   May 8, 2016   ]   
*/
  
     #include<bits/stdc++.h>
     using namespace std;
  
     bool isPalindrome(char s[],int n)
  {
         int i=0,j=n-1;
         while(i<j)
             if(s[i++]!=s[j--])
                 return false;
         return true;
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
             char s[n];
                for(int i=0;i<n;++i)
                 cin>>s[i];
     //if string is empty
             if(s[0]=='\\0') 
                 cout<<"0\n";
     //if string is palindrome
             else if(isPalindrome(s,n))  
                     cout<<"1\n";
             else
     //if string is not-palindrome
                     cout<<"2\n";  
         }
     return 0;
  }