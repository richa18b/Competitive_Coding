{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int n,k,imp=0,res=0,z=0,luck_gained=0;\par
    cin>>n>>k;\par
    \par
    int l[n],t[n],array_l[n];\par
    for(int i=0;i<n;++i)\par
    \{\par
        cin>>l[i]>>t[i];\par
        if(t[i]==1)\par
        \{ imp++; array_l[z]=l[i]; z++; \}\par
    \}\par
    \par
    if(imp<=k)\par
    \tab for(int i=0;i<n;++i)\par
    \tab\tab res+=l[i];\par
    else\par
    \{\par
    \tab int min_to_win=imp-k;\par
    \tab sort(array_l,array_l+imp);\par
    \tab map<int,int> m;\par
    \tab for(int i=0;i<min_to_win;++i)\par
    \tab\{\par
    \tab\tab luck_gained+=array_l[i];\par
    \tab\tab m.insert(pair<int,int> (array_l[i],1));\par
    \tab\}\par
    \tab for(int i=0;i<n;++i)\par
    \tab\{\par
    \tab\tab if(m.find(l[i])!=m.end())\par
    \tab\tab\tab res-=l[i];\par
    \tab\tab else res+=l[i];\par
    \tab\}\par
    \}\par
    cout<<res;\par
    return 0;\par
\}\par
}
 