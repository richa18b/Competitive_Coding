{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
bool all_same(int a[],int n)\par
\{\par
    int match=a[0];\par
    for(int i=1;i<n;++i)\par
        if(a[i]!=match)\par
            return false;\par
        \par
    return true;    \par
\}\par
\par
int minimalDeletions(int a[],int n)\par
\{\par
    if(n<1)\par
        return -1;\par
    \par
    if(all_same(a,n))\par
        return 0;\par
    \par
    if(n==1)\par
        return 0;\par
    \par
    if(n==2)\par
        return (a[0]==a[1])? 0:1;\par
    \par
    int binMap[100];\par
    memset(binMap,0,sizeof binMap);\par
    \par
    for(int i=0;i<n;++i)\par
        binMap[a[i]]++;\par
    \par
    int max=INT_MIN,no;\par
    for(int i=0;i<n;++i)\par
        if(binMap[a[i]]>max)\par
        \{ max=binMap[a[i]]; no=a[i]; \}\par
    \par
    int cnt=0;\par
    for(int i=0;i<n;++i)\par
        if(a[i]!=no)\par
            cnt++;\par
            \par
    return cnt;\par
\}\par
\par
int main()\par
\{\par
    int n;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
    cout<<minimalDeletions(a,n);\par
    return 0;\par
\}\par
}
 