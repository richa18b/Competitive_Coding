{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main() \{\par
    int n,v;\par
    cin>>v;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
    \{\par
        cin>>a[i];\par
        if(a[i]==v)\par
            cout<<i;\par
    \}\par
    \par
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \par
    return 0;\par
\}\par
}
 