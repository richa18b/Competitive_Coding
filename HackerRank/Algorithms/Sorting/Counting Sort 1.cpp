{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main() \par
\{\par
    int n;\par
    cin>>n;\par
    int a[n];\par
    int count[100]=\{0\};\par
    for(int i=0;i<n;++i)\par
    \{\par
        cin>>a[i];\par
        count[a[i]]++;\par
    \}\par
    for(int i=0;i<100;++i)\par
        cout<<count[i]<<" ";\par
    return 0;\par
\}\par
}
 