#include<bits/stdc++.h>
using namespace std;
  
     #define ROW 5
     #define COL 5
  
     void findOrientation(char a[][COL],char pat[])
  {
       unsigned int i=0,j=0,k=0;
        vector<int> v,v2;
        while(k!=strlen(pat)||(i<ROW&&j<COL))
     {
           if(a[i][j]==pat[k])
        {
              v.push_back(i); v2.push_back(j);
              if(a[i][j+1]==pat[k+1])
           {    j++; k++; }
              else if(a[i+1][j]==pat[k+1])
           {    i++; k++; }
              else { v.pop_back(); v2.pop_back(); k--; }
        }
           if(i<ROW) j++;
           if(j==COL) { i++; j=0; }
     }
     
        vector<int>::iterator ii=v.   begin();
        vector<int>::iterator jj=v2.begin();
        unsigned int count_i=0,count_j=0;
     
        vector<int>::iterator it;
        for(it=v.begin()+1;it!=v.end();++it)
           if(*it==*ii)
              count_i++;
           
        if(count_i==v.size()-1)
     {    cout<<"Horizontal"; return; }
        
        for(it=v2.begin()+1;it!=v2.end();++it)
           if(*it==*jj)
              count_j++;
           
        if(count_j==v2.size()-1)
           cout<<"Vertical";
  }
  
     int main()
  {
        char a[ROW][COL]={ {'a', 'b', 'c', 'd', 'e'},
                    {'f', 'g', 'h', 'i', 'j'},
                    {'k', 'l', 'm', 'n', 'o'},
                    {'p', 'q', 'r', 's', 't'},
                    {'u', 'v', 'w', 'x', 'y'} };
        char pat[]={'p','q','r','s'};
        findOrientation(a,pat);
        return 0;
  }