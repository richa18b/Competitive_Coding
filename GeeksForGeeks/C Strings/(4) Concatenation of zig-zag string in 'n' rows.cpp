/* Print Concatenation of Zig-Zag String in 'n' Rows
     [January 5, 2016] */
    
  
     #include<bits/stdc++.h>
     using namespace std;
  
     void printConcatZigZagString(string s,int n)
  {
         if(n==1)  //if number of rows is 1
         { cout<<s;return; }
         
         string arr[n];
         
         int row=0;
         bool down;
         
         for(int i=0;i<s.length();++i)
         {
             arr[row].push_back(s[i]);
             
             if(row==n-1)  //if last row is reached, change direction to 'up'
                 down=false;
             
             else if(row==0)  //if fi   rst row is reached, change direction to 'down'
                 down=true;
                 
             (down)? (row++):(row--);
         }
         for(int i=0;i<n;++i)
             cout<<arr[i];
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
             cin>>n;
             printConcatZigZagString(s,n);
         }
         return 0;
  }