{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int n,m;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
    sort(a,a+n);\par
    cin>>m;\par
    int b[m];\par
    for(int i=0;i<m;++i)\par
        cin>>b[i];\par
    sort(b,b+m);\par
    \par
    map<int,int> m1;\par
    map<int,int> m2;\par
    map<int,int>::iterator it;\par
    map<int,int>::iterator it2;\par
    \par
    for(int i=0;i<n;++i)\par
    \{\par
        if(m1.find(a[i])!=m1.end())\par
        \{ it=m1.find(a[i]); it->second++; \}\par
        else m1.insert(pair<int,int> (a[i],1));\par
    \}\par
    \par
    for(int i=0;i<m;++i)\par
    \{\par
        if(m2.find(b[i])!=m2.end())\par
        \{ it=m2.find(b[i]); it->second++; \}\par
        else m2.insert(pair<int,int> (b[i],1));\par
    \}\par
    \par
    for(it=m1.begin(),it2=m2.begin();it!=m1.end(),it2!=m2.end();++it,++it2)\par
    \{  \par
        if(it->first==it2->first)\par
            if(it->second!=it2->second)\par
                cout<<it2->first<<" ";\par
    \}\par
    return 0;\par
\}\par
}
 