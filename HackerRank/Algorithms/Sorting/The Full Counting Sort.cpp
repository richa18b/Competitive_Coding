{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main() \par
\{\par
    int n;\par
    cin>>n;\par
    \par
    int a[n];\par
    string s[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i]>>s[i]; \par
       \par
    int c[100];\par
    for(int i=0;i<100;++i)\par
        c[i]=0;\par
    for(int i=0;i<n;++i)\par
        c[a[i]]++;\par
    \par
    for(int i=1;i<100;++i)\par
        if(c[i]!=0&&c[i-1]!=0)\par
            c[i]+=c[i-1];\par
        \par
    string b[n];\par
    for(int i=0;i<n;++i)\par
        b[i]="-";\par
    \par
    for(int i=n-1;i>=n/2;--i)\par
    \{\par
        b[c[a[i]]-1]=s[i];\par
        c[a[i]]=c[a[i]]-1;\par
    \}\par
    \par
    for(int i=0;i<n;++i)\par
       cout<<b[i]<<" ";\par
        \par
    return 0;\par
\}\par
}
 