{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main() \par
\{\par
    int n;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
    \par
    sort(a,a+n);\par
    \par
    int minD=INT_MAX;\par
    for(int i=0;i<n-1;++i)\par
    \{\par
        int difference=abs(a[i]-a[i+1]);\par
        if(difference<minD)\par
            minD=difference;\par
    \}\par
    \par
    for(int i=0;i<n-1;++i)\par
        if(abs(a[i]-a[i+1])==minD)\par
            cout<<a[i]<<" "<<a[i+1]<<" ";\par
     \par
    return 0;\par
\}\par
}
 