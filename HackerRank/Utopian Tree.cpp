{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int t;\par
    cin >> t;\par
    while(t--)\par
    \{\par
        int n;\par
        cin >> n;\par
        int flag=0,height=1;\par
        while(n--)    \par
        \{\par
            if(!flag)\par
            \{ height*=2; flag=1;\}\par
            else if(flag)\par
            \{ height++; flag=0;\}\par
        \}\par
        cout<<height<<"\\n";\par
    \}\par
    return 0;\par
\}\par
}
 