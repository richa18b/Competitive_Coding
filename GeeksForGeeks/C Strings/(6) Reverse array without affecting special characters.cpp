/* Reverse an array without affecting special characters
     [October 27, 2015]   */
  
     #include<bits/stdc++.h>
     using namespace std;
  
     int main()
  {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t,j;
        string s,output;
        cin>>t;
        while(t--)
     {
           cin>>s;
           for(int i=0;i<s.length();++i)
              output[i]='\\0';
           for(int i=0;i<s.length();++i)
        {      // to fix the position of special characters in the output array,  first
              if((s[i]>='a'&&s[i]<='z')||(s[i]   >='A'&&s[i]<='Z'))
                 continue;
              else output[i]=s[i];
        }
           j=s.length()-1;
           for(int i=0;i<s.length();++i)
        {
              if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
           {
                 while(output[j]!='\\0')
                    j--;   
                 output[j]=s[i];
           }
        }
           for(int i=0;i<s.length();++i)
              cout<<output[i];
           cout<<"\n";
     }
           return 0;
  }

// Solution with O(n) time complexity

     #include<bits/stdc++.h>
     using namespace std;
  
     void swap(char &a,char &b)
  {
        char temp;
        temp=a; a=b; 
        b=temp;
  }
  
     int main()
  {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t,l,r;
        string s;
        cin>>t;
        while(t--)
     {
           cin>>s;
           l=0;r=s.length()-1;
           while(l<r)
        {
              if((s[l]>='a'&&s[l]<='z')||(s[l]>='A'&&s[l]<='Z'))
           {
                 if((s[r]>='a'&&s[r]<='z')||(s[r]>='A'&&s[r]<='Z'))
                 {    swap(s[l],s[r]); l++; r--; }

                 else   r--;
           }
              else l++;
        }
           cout<<s;
           cout<<"\n";
     }
        return 0;
  }