{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int n;\par
    cin >> n;\par
    int a[n][n];\par
    int sum1=0,sum2=0;\par
    for(int i=0;i<n;++i)\par
        for(int j=0;j<n;++j)\par
        \{\par
            cin>>a[i][j];\par
            if(i==j)\par
                sum1+=a[i][j];\par
            if(i+j==n-1)\par
                sum2+=a[i][j];\par
        \}\par
    \par
    cout<<abs(sum2-sum1);\par
    return 0;\par
\}\par
}
 