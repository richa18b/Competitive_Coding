{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int n;\par
    cin >> n;\par
    unsigned long long int a[n],sum=0;\par
    for(unsigned long long int i=0;i<n;++i)\par
    \{\par
        cin>>a[i];\par
        sum+=a[i];\par
    \}\par
    \par
    cout<<sum;\par
    return 0;\par
\}\par
}
 