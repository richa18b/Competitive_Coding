/* Remove spaces from a given string 
[June 18, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int t,i; 
    char s[1000]; 
    cin>>t; 
    while(t--) 
    {//this scanf() takes input from user until an enter is pressed by the user 
        scanf(" %[^\n]",s);    // the space between " and % tells us to ignore spaces between input 
        for(int j=0;s[j]!='\\0';++j) 
            if(s[j]!=' ') 
                cout<<s[j]; 
        cout<<"\n"; 
    } 
    return 0; 
} 