{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main() \par
\{\par
    int n,k=0;\par
    cin>>n;\par
    int a[n],b[n]=\{0\};\par
    string s[n];\par
    int count[100]=\{0\};\par
    for(int i=0;i<n;++i)\par
    \{  cin>>a[i]>>s[i]; count[a[i]]++; \}\par
        \par
    for(int i=0;i<100;++i)\par
    \{\par
        if(count[i]!=0)\par
        \{ (k==0)? (b[k]+=count[i]):(b[k]=b[k-1]+count[i]); k++; \}\par
    \}\par
    \par
    for(int i=0;i<k-1;++i)\par
        cout<<b[i]<<" ";\par
    for(int i=1;i<=101-k;++i)\par
        cout<<b[k-1]<<" ";\par
    \par
    return 0;\par
\}\par
}
 