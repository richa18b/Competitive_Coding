{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 /* Minimum Distances \par
[Easy] */\par
\par
#include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    ios_base::sync_with_stdio(0);\par
    cin.tie(0);\par
    int n,dist=1000;\par
    cin>>n;\par
    int a[n];\par
    map<int,int> m;\par
    for(int i=0;i<n;++i)\par
    \{\par
        cin>>a[i];\par
        if(m.find(a[i])!=m.end())\par
        \{\tab\par
            map<int,int>::iterator it;\par
            it=m.find(a[i]);\par
            if(abs(i-(it->second))<dist)\par
                dist=abs(i-(it->second));\par
        \}\par
        else m.insert(pair<int,int> (a[i],i));\par
    \}\par
    if(dist!=1000)\par
        cout<<dist;\par
    else cout<<"-1";\par
    return 0;\par
\}\par
}
 