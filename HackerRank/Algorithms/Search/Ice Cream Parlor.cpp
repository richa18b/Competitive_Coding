{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int isIn(int a[],int n,int f,int x)\par
\{\par
    for(int i=0;i<n;++i)\par
        if(x==a[i]&&i!=f)\par
            return i;\par
        \par
    return -1;\par
\}\par
\par
int main()\par
\{\par
    int t;\par
    cin>>t;\par
    while(t--)\par
    \{\par
        int m,n;\par
        cin>>m;\par
        cin>>n;\par
        int a[n],first,second;\par
        for(int i=0;i<n;++i)\par
            cin>>a[i];\par
        \par
        for(int i=0;i<n;++i)\par
        \{\par
            int pos=isIn(a,n,i,m-a[i]);\par
            if(pos!=-1)\par
            \{ first=i+1; second=pos+1; break; \}\par
        \}\par
        if(first<second)\par
            cout<<first<<" "<<second<<"\\n";   \par
        else cout<<second<<" "<<first<<"\\n";\par
    \}\par
    return 0;\par
\}\par
}
 