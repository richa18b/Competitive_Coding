{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int n,i,j;\par
    cin >> n;\par
    for(i=1;i<=n;++i)\par
    \{\par
        for(j=1;j<=(n-i);++j)\par
            cout<<" ";\par
        for(;j<=n;++j)\par
            cout<<"#";\par
        cout<<"\\n";\par
    \}\par
    return 0;\par
\}\par
}
 