/* 1's and 2's complement of a Binary Number
     [February 4, 2016]  */
 
     #include<bits/stdc++.h>
     using namespace std;
  
     void printTwosComplement(string s)
  {
         int l=s.length();
         int comp2[l],carry[l],res[l];
         memset(comp2,0,sizeof(comp2)-1);
         comp2[l-1]=1;
         memset(carry,0,sizeof carry);
         memset(res,0,sizeof res);
         for(int i=l-1;i>=0;--i)
         {
             if(carry[i]==0)
             {
                 if(s[i]=='0'&&comp2[i]==0)
                     res[i]=0;
                 else if((s[i]=='0'&&comp2[i]==1)||(s[i]=='1'&&c   omp2[i]==0))
                     res[i]=1;
                 else
                 {
                     res[i]=0;
                     carry[i-1]=1;
                 }
             }
             else if(carry[i]==1)
             {
                 if(s[i]=='0'&&comp2[i]==0)
                     res[i]=carry[i];
                 if((s[i]=='0'&&comp2[i]==1)||(s[i]=='1'&&comp2[i]==0))
                     {res[i]=0;carry[i-1]=1;}
                 if(s[i]=='1'&&comp2[i]==1)
                     {res[i]=1;carry[i-1]=1;}
             }
         }
         for(int i=0;i<l   ;++i)
             cout<<res[i];
  }
  
     int main()
  {
         ios_base::sync_with_stdio(0);
         cin.tie(0);
         int t,flag;
         string s;
         cin>>t;
         while(t--)
         {
             flag=0;
             cin>>s;
     //to calculate one's complement
             for(int i=0;i<s.length();++   i)
             {
                 if(s[i]=='0')
                     s[i]='1';
                 else s[i]='0';
             }
      //to check if all the digits are '1'
             for(int i=0;i<s.length();++i)
             {
                 if(s[i]=='0')
                     break;
                 flag++;
             }
             if(flag==s.length())
             {
     //for cases like 00 --1's--> 11 --2's--> 100
                     cout<<"1";
                 for(int i=0;i<s.length();++i)
                     cout<<"0";
             }
             else printTwosComplement(s);
             cout<<"\n"   ;
         }
         return 0;
  }